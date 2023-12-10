from django.db import models
from django.contrib.auth.models import User

class Categoria(models.Model):
    nome = models.CharField(max_length=50)

    def __str__(self):
        return self.nome


class TipoDespesa(models.Model):
    nome = models.CharField(max_length=50)
    descricao = models.CharField(max_length=200)

    def __str__(self):
        return self.nome


class TipoReceita(models.Model):
    nome = models.CharField(max_length=50)
    descricao = models.CharField(max_length=200)

    def __str__(self):
        return self.nome
    
    
class TipoMeta(models.Model):
    nome = models.CharField(max_length=50)
    descricao = models.CharField(max_length=200)

    def __str__(self):
        return self.nome


class Transacao(models.Model):
    usuario = models.ForeignKey(User, on_delete=models.CASCADE)
    categoria = models.ForeignKey(Categoria, on_delete=models.CASCADE)
    descricao = models.CharField(max_length=100)
    valor = models.DecimalField(max_digits=10, decimal_places=2)
    data = models.DateField()

    def __str__(self):
        return f'{self.descricao} - {self.valor}'


class Despesa(Transacao):
    local = models.CharField(max_length=100)
    metodo_pagamento = models.CharField(max_length=50)
    tipo_despesa = models.ForeignKey(TipoDespesa, on_delete=models.CASCADE)


class Receita(Transacao):
    fonte = models.CharField(max_length=100)
    metodo_recebimento = models.CharField(max_length=50)
    tipo_receita = models.ForeignKey(TipoReceita, on_delete=models.CASCADE)
    
    
class Dica(models.Model):
    titulo = models.CharField(max_length=150)
    texto = models.TextField()

    def __str__(self):
        return self.titulo
    
    
class Meta(models.Model):
    usuario = models.ForeignKey(User, on_delete=models.CASCADE)
    tipo_meta = models.ForeignKey(TipoMeta, on_delete=models.CASCADE)
    valor = models.DecimalField(max_digits=10, decimal_places=2)
    descricao = models.CharField(max_length=200)

    def __str__(self):
        return f'{self.tipo_meta} - {self.valor}'