package faculdade;
public class Faculdade {
    private String nome;
    private String endereco;
    private int quantidadeAlunos;
    private boolean privada;

    // Construtor padrão
    public Faculdade() {
    }

    // Construtor com parâmetros
    public Faculdade(String nome, String endereco, int quantidadeAlunos, boolean privada) {
        this.nome = nome;
        this.endereco = endereco;
        this.quantidadeAlunos = quantidadeAlunos;
        this.privada = privada;
    }

    // Getters e Setters
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public int getQuantidadeAlunos() {
        return quantidadeAlunos;
    }

    public void setQuantidadeAlunos(int quantidadeAlunos) {
        this.quantidadeAlunos = quantidadeAlunos;
    }

    public boolean isPrivada() {
        return privada;
    }

    public void setPrivada(boolean privada) {
        this.privada = privada;
    }

    // Métodos adicionais
    public void realizarMatricula(int quantidade) {
        quantidadeAlunos += quantidade;
        System.out.println("Matricula realizada com sucesso. Quantidade de alunos atual: " + quantidadeAlunos);
    }

    public void exibirInformacoes() {
        System.out.println("-------------------------------------");
        System.out.println("Nome: " + nome);
        System.out.println("Endereco: " + endereco);
        System.out.println("Quantidade de alunos: " + quantidadeAlunos);
        System.out.println("Privada: " + (privada ? "Sim" : "Nao"));
        System.out.println("-------------------------------------");
    }

    // Método main para testar a classe
    public static void main(String[] args) {
        // Instanciando objeto usando o construtor padrão
        Faculdade faculdade1 = new Faculdade();
        faculdade1.setNome("Faculdade XYZ");
        faculdade1.setEndereco("Rua A, 123");
        faculdade1.setQuantidadeAlunos(1000);
        faculdade1.setPrivada(true);

        // Instanciando objeto usando o construtor com parâmetros
        Faculdade faculdade2 = new Faculdade("Faculdade ABC", "Avenida B, 555", 2000, false);
        Faculdade faculdade3 = new Faculdade("Faculdade DEF", "Avenida C, 666", 500, true);
        // Chamando métodos
        faculdade1.realizarMatricula(50);
        faculdade2.exibirInformacoes();
        faculdade3.exibirInformacoes();
    }
}