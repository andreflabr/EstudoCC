from django.shortcuts import render
from . models import*


def receita(request):
    receitas = {
        'receitas': Receita.objects.all()
    }
    return render(request, 'receita_despesa/despesa_receita.html', receitas)


def despesa(request):
    despesas = {
        'despesas': Despesa.objects.all()
    }
    return render(request, 'receita_despesa/despesa_receita.html', despesas)

