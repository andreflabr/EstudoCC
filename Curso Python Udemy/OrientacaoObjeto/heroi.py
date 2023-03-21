class Heroi:
"""
    voa = False
    lanca_teia = False
    possui_arma = False
    frase_comum = ""
"""
    def __init__ (self, voa,possui_arma, lanca_teia, frase_comum):
        print("Executando init...")
        self.voa = voa
        self.possui_arma = possui_arma
        self.lanca_teia = lanca_teia
        self.frase_comum = frase_comum
    def falar(self):
        print(self.frase_comum)

    def detalhar(self):
        if self.voa:
            print("O heroi voa")
        if self.lanca_teia:
            print("O heroi lança teia")
        if self.possui_arma:
            print("O heroi possui arma")