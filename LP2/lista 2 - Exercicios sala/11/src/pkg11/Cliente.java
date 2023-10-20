
package pkg11;

public class Cliente extends Empresa {
    private int numeroPedido;

    public Cliente(String nome, String endereco, String cidade, String estado, String cep, String telefone, int numeroPedido) {
        super(nome, endereco, cidade, estado, cep, telefone);
        this.numeroPedido = numeroPedido;
    }

    public int getNumeroPedido() {
        return numeroPedido;
    }

    public void setNumeroPedido(int numeroPedido) {
        this.numeroPedido = numeroPedido;
    }


    public void print() {
        super.print();
        System.out.println("Número do Pedido: " + numeroPedido);
    }
}
