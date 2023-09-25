from django.db import models

class Cidade(models.Model):
    nome_cidade = models.CharField(max_length=30)
    uf = models.CharField(max_length=2)

    def __str__(self):
        return f'{self.nome_cidade}{self.uf}'


class Pessoa(models.Model):
    nome=models.CharField(max_length=50)
    cpf=models.IntegerField
    dta_nasc=models.DateField()
    email=models.CharField(max_length=50)
    nome_pai=models.CharField(max_length=50)
    nome_mae=models.CharField(max_length=50)
    cidade = models.ForeignKey(Cidade, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.nome}{self.cpf}{self.dta_nasc}{self.email}{self.nome_pai}{self.nome_mae}{self.cidade}'


class Ocupacao(models.Model):
    nome_ocupacao= models.CharField(max_length=30)

    def __str__(self):
        return f'{self.nome_ocupacao}'
    

class Area_saber(models.Model):
    nome_area_saber= models.CharField(max_length=30)

    def __str__(self):
        return f'{self.nome_area_saber}'
    

class Instituicao(models.Model):
    nome_instituicao= models.CharField(max_length=50)
    site= models.CharField(max_length=50)
    telefone= models.IntegerField
    def __str__(self):
        return f'{self.nome_instituicao}{self.site}{self.telefone}'
    

class Cursos(models.Model):
    nome_curso = models.CharField(max_length=50)
    carga_horaria = models.IntegerField
    duracao = models.IntegerField
    area_saber = models.ForeignKey(Area_saber, on_delete=models.CASCADE)
    instituicao = models.ForeignKey(Instituicao, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.nome_curso}{self.carga_horaria}{self.duracao}{self.area_saber}{self.instituicao}'
    

class Periodo(models.Model):
    periodo = models.CharField(max_length=20)

    def __str__(self):
        return f'{self.periodo}'
    

class Disciplina(models.Model):
    nome_disciplina=models.CharField(max_length=50)
    area_saber = models.ForeignKey(Area_saber, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.nome_disciplina}{self.area_saber}'
    

class Matricula(models.Model):
    dta_inicio=models.DateField()
    dta_termino=models.DateField()
    instituicao = models.ForeignKey(Instituicao, on_delete=models.CASCADE)
    nome_curso = models.ForeignKey(Cursos, on_delete=models.CASCADE)
    nome = models.ForeignKey(Pessoa, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.dta_inicio}{self.dta_termino}{self.instituicao}{self.nome_curso}{self.nome}'
    

class Avaliacao(models.Model):
    descricao=models.CharField(max_length=30)
    nome_curso = models.ForeignKey(Cursos, on_delete=models.CASCADE)
    nome_disciplina= models.ForeignKey(Disciplina, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.descricao}{self.nome_curso}{self.nome_disciplina}'
    

class Frequencia(models.Model):
    nome_curso = models.ForeignKey(Cursos, on_delete=models.CASCADE)
    nome_disciplina= models.ForeignKey(Disciplina, on_delete=models.CASCADE)
    n_faltas = models.IntegerField

    def __str__(self):
        return f'{self.nome_curso}{self.nome_disciplina}{self.n_faltas}'
    

class Turma(models.Model):
    nome_turma=models.CharField(max_length=30)
    periodo=models.IntegerField

    def __str__(self):
        return f'{self.nome_turma}{self.periodo}'


class Ocorrencia(models.Model):
    desc_ocorrencia= models.CharField(max_length=50)
    dta_ocorrencia=models.DateField()
    nome_curso = models.ForeignKey(Cursos, on_delete=models.CASCADE)
    nome_disciplina= models.ForeignKey(Disciplina, on_delete=models.CASCADE)
    nome= models.ForeignKey(Pessoa, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.desc_ocorrencia}{self.dta_ocorrencia}{self.nome_curso}{self.nome_disciplina}{self.nome}'
    

class Disciplina_curso(models.Model):
    nome_disciplina_curso= models.CharField(max_length=50)
    carga_horaria= models.IntegerField
    nome_curso = models.ForeignKey(Cursos, on_delete=models.CASCADE)
    periodo= models.ForeignKey(Periodo, on_delete=models.CASCADE)

    def __str__(self):
        return f'{self.nome_disciplina_curso}{self.carga_horaria}{self.nome_curso}{self.periodo}'


class Tipo_avaliacao(models.Model):
    prova=models.CharField(max_length=50)
    trabalho=models.CharField(max_length=50)
    projeto=models.CharField(max_length=50)
    lista_exercicio=models.CharField(max_length=50)

    def __str__(self):
        return f'{self.prova}{self.trabalho}{self.projeto}{self.lista_exercicio}'






