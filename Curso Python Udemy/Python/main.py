"""
x=10
y=15
z = x+y
print("o resultado da conta (", x,"+", y, ") é: ", z)

a = 12j + 15
print(a - 45j + 30 + 39j)
#--------------------------------------------------------
def carlos(i):
    print("teste ", i)
carlos(5)

teste = "curso de corno"
print(teste[5])
#--------------------------------------------------------
q=input("digite algo\n")
print(f"o que voce digitou é {q}\n")

teste_1 = int(input("digite um numero\n"))
print(f"O numero digitado é: {teste_1}\n")

teste_2 = float(input("digite um numero decimal\n"))
print(f"o numero decimal é: {teste_2}\n")

teste_3 = str(input("escreva algo\n"))
print(f"a string é é: {teste_3}\n")
#--------------------------------------------------------
x="olá "
y="Raimundo"
z= x+y
print(z)

w = x*25
print(w)
#--------------------------------------------------------
a = "andre"
c = 10
b = "%d teste de escrita com meu nome %s" % (c, a)
print(b)
#--------------------------------------------------------
x=150.567
print("%.1f" % x)

y=150.23
print("taxa de juros é de %.1f%%" % y)

print("teste desse valor: {}".format(x))

print("teste desse valor: {2}".format("1","2","3","4","5","6"))
print(f"teste desse valor: {x}")
#--------------------------------------------------------
teste = "andreandreandre"
teste_1 = teste[5:10]
print(teste_1)

teste_1 = teste[5:10:2]
print(teste_1)

teste_1 = teste[::-1]
print(teste_1)
#--------------------------------------------------------
email = "andre@gmail.com"
ind = email.index("@")
usuario = email[ : ind]
print(usuario)

ind_arroba = email.index("@")
ind_ponto = email.index(".")
provedor = email[(ind_arroba+1) : ind_ponto]
print(provedor)

lista = email.split("@")
print(lista)
print(lista[0])
print(lista[1])
#--------------------------------------------------------
x=10
if x==10:
    print("sucesso")
elif x < 10:
    print("menos")
else:
    print("maior")
#--------------------------------------------------------
i = [1,2,3,4,5,6,7,8,9]

for j in i:
    print(j)
print("\n")

for k in range (10,20,2):   #inicio, fim, salto
    print(k)
print("\n")

for teste in ("teste"):
    print(teste)
print("\n")

for strings in ["banana", "maça", "pera", "melancia"]:
    print(strings)
    if (strings == "pera"):
        break               #Pausa o loop no if verdadeiro
print("\n")

for strings_2 in ["banana", "maça", "pera", "melancia"]:
    if (strings_2 == "pera"):
        continue            #pula o loop verdadeiro do if
    print(strings_2)
print("\n")
#--------------------------------------------------------
x = 1
while x < 10:
    print(x+2)
    x += 1
print("\n")
#--------------------------------------------------------
while True:
    notas = float(input("digite uma nota, para parar o codigo digite -1 \n"))
    if notas == -1:
        break               #finaliza o looping no -1
    else:
        print(notas, "\n")

#======================================listas=============================================

#adicionar itens a listas com .append

lista = ["teste1", "teste2", "teste3"]
lista.append("teste4")
lista.insert(2, "teste5")           #posição para inserção
lista.remove("teste2")              #remover item lista
lista.sort()                        #ordenar
print(lista,"\n")
lista.reverse()                     #reverter lista
print(lista,"\n")

lista.append("teste1")
quantidade_teste1 = lista.count("teste1")
print(f"quantidade = {quantidade_teste1}")  #contagem de itens lista

numero_removido = lista.pop()                         #.pop remove ultimo elemento da lista e retorna ele
print(numero_removido)
#--------------------------------------------------------
numeros  = [1,2,3,4,5,6,7,8,9]
print(numeros)
del numeros[2]
print(numeros)
del numeros[5:7]
print(numeros)

numeros.clear()
print(numeros)              #maneira 1 de limpar lista
lista = []                  #maneira 2 de limpar lista
print(lista)
#--------------------------------------------------------
lista_2 = [1,2,3,4,5,[6,7,8,9]]         #lista dentro de lista
print(lista_2)

print(lista_2[5])                       #elemento 5 é toda a lista

letras = ["a", "b", "c"]
numeros = [1,2,3]

mistura = [letras + numeros]
print(mistura,"\n")

tamanho = len(letras)                  #tamanho lista
print(tamanho)

index_1 = letras.index("a")
print(index_1)
#--------------------------------------------------------
linguagens = ["PYTHON", "C++", "COBOL"]
linguagem = str(input("Digite a linguagem: \n"))
if linguagem.upper() in linguagens:
    print("Esta na lista!\n")
else:
    print("Nao esta na lista!\n")
#--------------------------------------------------------

listinha = []
while True:
    teste = int(input("digite um numero: digite 0 para parar \n"))
    if teste == 0:
        break
    listinha.append(teste)

print(listinha)

for num in listinha:
    print(num)

#--------------------------------------------------------
pares = []
impares = []

while True:
    valor = int(input("digite o numero a adicionar: caso queira finalizar digite -1\n"))
    if valor == -1:
        break
    elif valor % 2 == 0:
        pares.append(valor)
    else:
        impares.append(valor)

pares.sort()
impares.sort()

print(pares)
print(impares)
#--------------------------------------------------------
lista = ["teste1", "teste2", "teste3"]
lista_2 = list(enumerate(lista, start=100))
print(lista_2)
print("\n\n")

itens = ["item_1", "item_3", "item_2", "item_4"]
for indice, item in enumerate(itens, 1):
    print(indice, item)
print("\n")

itens.sort()
for indice, item in enumerate(itens):
    print(indice+1, item)
#--------------------------------------------------------
tuplas = ("teste1", "teste2", "teste3") #definida entre parenteses ou sem parentese
print(tuplas[1])

tuplas2 = "teste1", "teste2", "teste3"
teste = tuplas2[1:3]
print(teste)

lista = ["teste1", "teste2", "teste3"]
tuplas3 = tuple(lista)
lista2 = list(tuplas3)

print(tuplas3)
print(lista2)
#--------------------------------------------------------
#set conjuntos, usamos chaves pra definir // valores do set nao se repetem
teste = {10,20,20,10,10,10,30}
print(teste)
#criar conjunto vazio
teste2 = set()
#--------------------------------------------------------
lista = ["teste1", "teste2", "teste2", "teste2", "teste3"]
print(lista)
conjunto = set(lista) #convertendo a lista pra conjunto
print(conjunto)
#--------------------------------------------------------
#unir conjuntos
conj1 = {10,20,30}
conj2 = {"teste1", "teste2"}

conjunto_uniao = conj1.union(conj2)
print(conjunto_uniao)
#--------------------------------------------------------
#diferença de conjuntos
conj3 = {1,2, "teste"}
conj4 = {1,2,3, "teste"}
conj5 = conj4.difference(conj3)
print(conj5)
#--------------------------------------------------------
#intersection de conjuntos
conj3 = {1,2, "teste"}
conj4 = {1,2,3, "teste"}
conj5 = conj4.intersection(conj3)
print(conj5)
#--------------------------------------------------------
#testando se um set tem outro set incluido nele
conj3 = {1,2, "teste"}
conj4 = {1}
if conj3.issuperset(conj4):
    print("ok")
#--------------------------------------------------------
if conj4.issubset(conj3):
    print("ok")
#--------------------------------------------------------
if conj3.isdisjoint(conj4):
    print("ok")
else:
    print("ko")
#--------------------------------------------------------
#dicionario {chave:valor}
dicionario = {'a':1,
              'c':3,
              'b':2}

#acessar posição no discionario pelo nome da chave
print(dicionario['b'])
#--------------------------------------------------------
#trocar valor da chave
dicionario['b'] = 20
print(dicionario['b'])
#--------------------------------------------------------
del dicionario['a']
print(dicionario)

print(dicionario.items())
print(dicionario.keys())
print(dicionario.values())

dicionario.clear()
print(dicionario)

del dicionario
#--------------------------------------------------------
produto2 ={"mouse": 25.00,
           "teclado": 30.00,
           "webcam": 90.00}

#teste = str(input("digite o item "))
#print(produto2[teste])

produto3 = {"computador": 1500.00}

produto2.update(produto3)
print(produto2)

#--------------------------------------------------------
def teste(numero):
    return numero + 10

teste2 = teste(25)
print(teste2)

#--------------------------------------------------------
valor = 100
def calculo():
    #global valor
    valor=50
    print(valor)
calculo()

def soma (valor1, valor2, imprime = False):
    resultado = valor1+valor2
    if imprime:
        print(resultado)
    return resultado
total = soma(10,20,True)

#--------------------------------------------------------
# todo arquivo .py é um modulo 
# from pasta import nome_do_arquivo   "teste sendo o nome do arquivo sem a extensao"
from ... import ...
#--------------------------------------------------------
#recursividade
def fatorial(x):
    if x <= 1:
        return 1
    else:
        return (x * fatorial(x-1))

resultado = fatorial(3)
print(resultado)

#--------------------------------------------------------
#type retorna o tipo da variavel
num = 10
print(type(num))

#--------------------------------------------------------
#strings
nome = "andre luiz"
print(nome.startswith("and"))
print(nome.endswith("uiz"))
print(nome.endswith("a"))

#validar elementos string
a = "Aula Python"
print("teste" in a)
print("Aula" in a)

print("teste" not in a)
print("teste" not in a)

print(a.lower())
print(a.upper())

#string posições etc
texto = "teste eu nao sei o que colocar teste teste"
print(texto.count("teste"))

print(f"tamanho string: ", len(texto))

print(f"posição de 'teste' na string: ", texto.find("teste", 0, 42))
print(f"posição de 'teste' na string de tras pra frente: ", texto.rfind("teste", 0, 42))

print("Index: ", texto.index("teste"))
print("Index: ", texto.rindex("teste"))
print("Index: ", texto.index("colocar"))
print("Index: ", texto.rindex("colocar"))

#posicionamento de strings
#center centraliza a string em posições dadas na função
texto = "teste"
texto2 = "teste1"
texto3 = texto.center(20)
texto4 = texto2.center(10)
texto5 = texto2.center(10, '-')

print(texto3)
print(texto4)
print(texto5)

texto6 = texto.ljust(10)
print(texto6)
texto7 = texto.rjust(10)
print(texto7)
#--------------------------------------------------------
#quebrar string por caracter
carros = "gol;palio;corsa;punto;corcel;uno;corola;civic;santana"
lista_carros = carros.split(";")
print(lista_carros)

text = "ola mundo\nexemplo\nesta é outra linha\netc"
lista = text.splitlines()
print (lista)

#substituir texto
texto2 = "teste de nao sei o que, teste"
texto3 = texto2.replace("teste", "python")
print(texto3)

texto4 = texto2.replace("teste", "c++", 1) #somente a primeira ocorrencia
print(texto4)

texto5 = texto2.replace("", "_") 
print(texto5)

texto6 = texto2.replace("teste", "") #remove a palavra
print(texto6)

#--------------------------------------------------------
#remover espaços em branco
#strip remove no inicio e fim
#lstrip inicio
#rstring final

texto = "     texto com muitos espaços   "
print(".", texto, ".")

a = texto.strip() 
print(a)

texto2 = "texto com muitos barcos implementados"
b = texto2.strip("texto")
print(b)

#--------------------------------------------------------
#validação por tipo de conteudo
#identificar se uma string possui numeros etc

#se for tudo numero/letra

texto= "s33453das45345"
print(texto.isalnum())

texto2= ";;;334    53jk    dak5"
print(texto2.isalnum()) #falso por conter simbolo e espaços

texto3 = "soahoas"   #tudo letra
print(texto3.isalpha())

texto4 = "5464576456"   #numericos
print(texto4.isdigit())

texto5 = "43534"   #inclui frações mas é igual ao isdigit
print(texto5.isnumeric())

texto6 = "TESTE"   #maiuscula
print(texto6.isupper())

texto7 = "teste"   #minuscula
print(texto7.islower())

texto8 = "  \n \t"   #se possui somente espaços
print(texto8.isspace())

texto8 = "teste\n"   #se possui caracteres que nao imprime igual o /n
print(texto8.isprintable())

#--------------------------------------------------------
"""