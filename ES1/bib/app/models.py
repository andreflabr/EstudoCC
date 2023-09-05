from django.db import models

class Cidade(models.Model):
    nome_cidade = models.CharField(max_length=50)
    uf = models.CharField(max_length=2)

    def __str__(self):
        return f'{self.nome_cidade}{ self.uf}'

class Autor(models.Model):
    nome_autor = models.CharField(max_length=50)
    site = models.CharField(max_length=80)
    cidade = models.ForeignKey(Cidade, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.nome_autor}{self.site}{self.cidade}'

class Editora(models.Model):
    nome_editora = models.CharField(max_length=50)
    site = models.CharField(max_length=100)
    cidade = models.ForeignKey(Cidade, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.nome_editora}{self.site}{self.cidade}'

class Categoria(models.Model):
    nome = models.CharField(max_length=30)

    def __str__(self):
        return self.nome

class Livro(models.Model):
    nome_livro = models.CharField(max_length=50)
    preco = models.FloatField(max_length=50)
    dta_publicacao = models.CharField(max_length=100)
    autor = models.ForeignKey(Autor, on_delete = models.CASCADE)
    editora = models.ForeignKey(Editora, on_delete = models.CASCADE)
    categoria = models.ForeignKey(Categoria, on_delete = models.CASCADE)
    def __str__(self):
        return f'{self.nome_livro}{self.autor}{self.editora}{self.categoria}{self.preco}{self.dta_publicacao}'

class Leitores(models.Model):
    nome_leitor = models.CharField(max_length=50)
    email = models.CharField(max_length=8)
    cpf = models.CharField(max_length=11)

    def __str__(self):
        return f'{self.nome_leitor}{self.email}{self.cpf}'

class Emprestimo(models.Model):
    dta_emprestimo = models.DateTimeField(max_length=50)
    dta_devolucao = models.DateTimeField(auto_now = True)
    livro = models.ForeignKey(Livro, on_delete = models.CASCADE)
    leitor = models.ForeignKey(Leitores, on_delete = models.CASCADE)
   
    def __str__(self):
        return f'{self.livro}{self.leitor}{self.dta_emprestimo}{self.dta_devolucao}'
