from django.shortcuts import render
from . models import* 

def Cursos (request):
    Cursos = {
            'Cursos': Cursos.objects.all()
        }
    return render(request, 'consulta/consulta.html,')