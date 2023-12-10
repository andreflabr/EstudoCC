from django.contrib import admin
from app.models import *

class DespesaInline(admin.TabularInline): 
    model = Despesa
    extra = 1

class ReceitaInline(admin.TabularInline):  
    model = Receita
    extra = 1

class TransacaoAdmin(admin.ModelAdmin):
    inlines = [DespesaInline, ReceitaInline]

admin.site.register(Categoria)
admin.site.register(TipoDespesa)
admin.site.register(TipoReceita)
admin.site.register(TipoMeta)
admin.site.register(Transacao, TransacaoAdmin)
admin.site.register(Despesa)
admin.site.register(Receita)
admin.site.register(Dica)
admin.site.register(Meta)