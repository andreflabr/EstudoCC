from heroi import Heroi
"""
homem_aranha = Heroi()
homem_aranha.lanca_teia = True
homem_aranha.detalhar()

arqueiro_verde = Heroi()
arqueiro_verde.possui_arma = True
arqueiro_verde.detalhar()

he_man = Heroi()
he_man.frase_comum = "eu tenho a força"
he_man.falar()
"""
homem_aranha = Heroi(False, False, True, "")
print(homem_aranha.voa)
print(homem_aranha.lanca_teia)

he_man = Heroi(False, True, False, "eu tenho a força")
he_man.frase_comum = "eu tenho a força"
he_man.falar()

homem_aranha.detalhar()
he_man.detalhar()