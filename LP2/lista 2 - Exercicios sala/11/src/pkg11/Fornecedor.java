
package pkg11;
public class Fornecedor extends Empresa {
    private String produtoFornecido;

    public Fornecedor(String nome, String endereco, String cidade, String estado, String cep, String telefone, String produtoFornecido) {
        super(nome, endereco, cidade, estado, cep, telefone);
        this.produtoFornecido = produtoFornecido;
    }

    public String getProdutoFornecido() {
        return produtoFornecido;
    }

    public void setProdutoFornecido(String produtoFornecido) {
        this.produtoFornecido = produtoFornecido;
    }

    public void print() {
        super.print();
        System.out.println("Produto Fornecido: " + produtoFornecido);
    }
}