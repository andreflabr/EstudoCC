package pkg9;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

class Pessoa {
    private String cpf;
    private String nome;
    private String email;
    private String rg;
    private String endereco;

    // Construtor
    public Pessoa(String cpf, String nome, String email, String rg, String endereco) {
        this.cpf = cpf;
        this.nome = nome;
        this.email = email;
        this.rg = rg;
        this.endereco = endereco;
    }

    // Métodos getters e setters
    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }
}

class Funcionario extends Pessoa {
    private String nis;
    private Date dataNascimento;
    private String escolaridade;
    private double salario;
    private String cargo;
    private Date entradaEmpresa;
    private String contaBanco;

    // Construtor
    public Funcionario(String cpf, String nome, String email, String rg, String endereco,
                       String nis, Date dataNascimento, String escolaridade, double salario,
                       String cargo, Date entradaEmpresa, String contaBanco) {
        super(cpf, nome, email, rg, endereco);
        this.nis = nis;
        this.dataNascimento = dataNascimento;
        this.escolaridade = escolaridade;
        this.salario = salario;
        this.cargo = cargo;
        this.entradaEmpresa = entradaEmpresa;
        this.contaBanco = contaBanco;
    }

    // Métodos getters e setters específicos para Funcionario
    public String getNis() {
        return nis;
    }

    public void setNis(String nis) {
        this.nis = nis;
    }

    public Date getDataNascimento() {
        return dataNascimento;
    }

    public void setDataNascimento(Date dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    public String getEscolaridade() {
        return escolaridade;
    }

    public void setEscolaridade(String escolaridade) {
        this.escolaridade = escolaridade;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    public Date getEntradaEmpresa() {
        return entradaEmpresa;
    }

    public void setEntradaEmpresa(Date entradaEmpresa) {
        this.entradaEmpresa = entradaEmpresa;
    }

    public String getContaBanco() {
        return contaBanco;
    }

    public void setContaBanco(String contaBanco) {
        this.contaBanco = contaBanco;
    }
}

class Cliente extends Pessoa {
    private String login;
    private Date dataPrimeiraCompra;

    // Construtor
    public Cliente(String cpf, String nome, String email, String rg, String endereco,
                   String login, Date dataPrimeiraCompra) {
        super(cpf, nome, email, rg, endereco);
        this.login = login;
        this.dataPrimeiraCompra = dataPrimeiraCompra;
    }

    // Métodos getters e setters específicos para Cliente
    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public Date getDataPrimeiraCompra() {
        return dataPrimeiraCompra;
    }

    public void setDataPrimeiraCompra(Date dataPrimeiraCompra) {
        this.dataPrimeiraCompra = dataPrimeiraCompra;
    }
}

public class Main {
    public static void main(String[] args) {
        SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");

        try {
            Date dataNascimentoFuncionario = dateFormat.parse("15/08/1985");
            Date entradaEmpresaFuncionario = dateFormat.parse("01/01/2020");

            Funcionario funcionario = new Funcionario("12345678901", "João da Silva", "joao@email.com",
                    "12345-6", "Rua das Flores, 123", "12345", dataNascimentoFuncionario,
                    "Ensino Superior", 5000.00, "Analista", entradaEmpresaFuncionario, "1234-5");

            Date dataPrimeiraCompraCliente = dateFormat.parse("10/02/2021");

            Cliente cliente = new Cliente("98765432109", "Maria Oliveira", "maria123",
                    "maria@email.com", "54321-0", "Avenida Principal, 456",
                    dataPrimeiraCompraCliente);

            System.out.println("Dados do Funcionario:");
            System.out.println("Nome: " + funcionario.getNome());
            System.out.println("CPF: " + funcionario.getCpf());
            System.out.println("Email: " + funcionario.getEmail());
            System.out.println("Salario: " + funcionario.getSalario());

            System.out.println("\nDados do Cliente:");
            System.out.println("Nome: " + cliente.getNome());
            System.out.println("CPF: " + cliente.getCpf());
            System.out.println("Email: " + cliente.getEmail());
            System.out.println("Data da Primeira Compra: " + dateFormat.format(cliente.getDataPrimeiraCompra()));
            
        } catch (ParseException e) {
            e.printStackTrace();
        }
    }
}