from conta import Conta

def print_hi(name):
    print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.


if __name__ == '__main__':
    #instanciar
    conta=Conta(122, "joao", 1000, 2000)
    '''
    conta.imprimir_saldo()
    conta.depositar(100)
    conta.imprimir_saldo()
    conta.sacar(50)
    conta.imprimir_saldo()
    '''

    conta2=Conta(1222, "andre", 2000, 3000)
    '''
    conta2.imprimir_saldo()
    conta2.depositar(100)
    conta2.imprimir_saldo()
    conta2.sacar(50)
    conta2.imprimir_saldo()
    '''
    print("o limite da conta é {}".format(conta2.get_limite()))
    conta2.set_limite(5000)
    print("o limite da conta é {}".format(conta2.get_limite()))

    print("o nome do titular {}".format(conta2.get_titular()))
    conta2.set_titular("andre luiz da silva")
    print("o nome novo do titular {}".format(conta2.get_titular()))