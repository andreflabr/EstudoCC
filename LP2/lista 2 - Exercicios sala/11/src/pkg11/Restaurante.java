
package pkg11;


public class Restaurante extends Empresa {
    private String tipoCulinaria;

    public Restaurante(String nome, String endereco, String cidade, String estado, String cep, String telefone, String tipoCulinaria) {
        super(nome, endereco, cidade, estado, cep, telefone);
        this.tipoCulinaria = tipoCulinaria;
    }

    public String getTipoCulinaria() {
        return tipoCulinaria;
    }

    public void setTipoCulinaria(String tipoCulinaria) {
        this.tipoCulinaria = tipoCulinaria;
    }


    public void print() {
        super.print();
        System.out.println("Tipo de Culinária: " + tipoCulinaria);
    }
}