#classe
class Conta:
    def __init__ (self, numero, titular, saldo, limite):
        #atributos da conta

        self.__numero=numero
        self.__titular=titular
        self.__saldo=saldo
        self.__limite=limite

        self.codigo_banco="001"

    def imprimir_saldo(self):
        print("saldo de {} do {}".format(self.__saldo, self.__titular))

    def depositar(self, valor):
        self.__saldo = self.__saldo + valor

    def sacar(self, valor):
        self.__saldo = self.__saldo - valor

    #getters e setters
    def get_limite(self):
        return self.__limite

    def set_limite(self, novo_limite):
        self.__limite=novo_limite

    def get_titular(self):
        return self.__titular

    def set_titular(self, novo_titular):
        self.__titular = novo_titular