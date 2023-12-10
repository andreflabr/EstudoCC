from django.shortcuts import render, redirect
from . models import*
from .forms import TransacaoForm

def receita(request):
    receitas = {
        'receitas': Receita.objects.all()
    }
    return render(request, 'receitas/receita.html',receitas)


def despesa(request):
    despesas = {
        'despesas': Despesa.objects.all()
    }
    return render(request, 'despesas/despesa.html',despesas)
 

def home(request):
    despesas = Despesa.objects.all()
    receitas = Receita.objects.all()
    metas = Meta.objects.all()
    dicas = Dica.objects.all()

    context = {
        'despesas': despesas,
        'receitas': receitas,
        'metas': metas,
        'dicas': dicas,
    }

    return render(request, 'home/home.html', context)


def criar_transacao(request):
    if request.method == 'POST':
        form = TransacaoForm(request.POST)
        if form.is_valid():
            form.save()
            """return redirect('home/') """
    else:
        form = TransacaoForm()

    return render(request, 'forms/form_transacao.html', {'form': form})


def transacao(request):
    transacoes = Transacao.objects.all()
    context = {'transacoes': transacoes}
    return render(request, 'transacao/transacao.html', context)