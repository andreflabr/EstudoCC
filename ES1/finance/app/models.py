from django.db import models

# Create your models here.
class User (models.Model):
    email = models.CharField(max_length=50)
    senha = models.CharField(max_length=50)

    def __str__ (self):
        return f'{self.email}'#{self.senha}'

class User_info (models.Model):
    nome = models.CharField(max_length=50)
    idade = models.IntegerField
    sexo = models.IntegerField
    descricao = models.CharField(max_length=300)
    dta_nascimento = models.DateField
    dta_cadastro = models.DateField
    user = models.OneToOneField(User, on_delete = models.CASCADE)


    def __str__ (self):
        return f'{self.nome}{self.idade}{self.sexo}{self.descricao}{self.dta_nascimento}{self.dta_cadastro}'


class TipoSaldo (models.Model):
    tipo = models.CharField(max_length=50)
    descricao = models.CharField(max_length=50)

    def __str__ (self):
        return f'{self.tipo}'
    

class Saldo (models.Model):
    tipo_saldo = models.ManyToManyField(TipoSaldo)
    valor = models.DecimalField

    def __str__ (self):
        return f'{self.valor}{self.tipo_saldo}'
    

class Dica (models.Model):

    texto = models.CharField(max_length=400)

    def __str__ (self):
        return f'{self.texto}'
    

class TipoMeta (models.Model):
    tipo = models.CharField(max_length=50)
    descricao = models.CharField(max_length=50)

    def __str__ (self):
        return f'{self.tipo}'
    

class Meta (models.Model):
    tipo_meta = models.ManyToManyField(TipoMeta)
    valor = models.DecimalField

    def __str__ (self):
        return f'{self.valor}{self.tipo_meta}'
    

class Receita (models.Model):
    tipo_saldo = models.ManyToManyField(TipoSaldo)
    valor = models.DecimalField

    def __str__ (self):
        return f'{self.tipo_saldo}{self.valor}'
    

class Despesa (models.Model):
    tipo_saldo = models.ManyToManyField(TipoSaldo)
    valor = models.DecimalField

    def __str__ (self):
        return f'{self.tipo_saldo}{self.valor}'