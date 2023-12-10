from django.contrib import admin
from django.urls import path
from django.views.generic import TemplateView
from app.views import *

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', TemplateView.as_view(template_name = 'index.html'), name = 'index'),
    path('receitas/', receita, name = 'receitas'),
    path('despesas/', despesa, name = 'despesas'),
    path('home/', home, name = 'home'),
    path('criar_transacao/', criar_transacao, name='criar_transacao'),
    path('transacao/', transacao, name='transacao'),
]
