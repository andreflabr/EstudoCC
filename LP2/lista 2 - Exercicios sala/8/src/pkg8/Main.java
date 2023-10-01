package pkg8;

import java.util.Date;

class Funcionario {
    private String cpf;
    private String nome;
    private String nis;
    private String rg;
    private Date dataNascimento;
    private String email;
    private String endereco;
    private String escolaridade;
    private double salario;
    private String cargo;
    private Date entradaEmpresa;
    private String contaBanco;

    // Construtor
    public Funcionario(String cpf, String nome, String nis, String rg, Date dataNascimento,
                       String email, String endereco, String escolaridade, double salario,
                       String cargo, Date entradaEmpresa, String contaBanco) {
        this.cpf = cpf;
        this.nome = nome;
        this.nis = nis;
        this.rg = rg;
        this.dataNascimento = dataNascimento;
        this.email = email;
        this.endereco = endereco;
        this.escolaridade = escolaridade;
        this.salario = salario;
        this.cargo = cargo;
        this.entradaEmpresa = entradaEmpresa;
        this.contaBanco = contaBanco;
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

    public String getNis() {
        return nis;
    }

    public void setNis(String nis) {
        this.nis = nis;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public Date getDataNascimento() {
        return dataNascimento;
    }

    public void setDataNascimento(Date dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
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

class Cliente {
    private String cpf;
    private String nome;
    private String login;
    private String email;
    private String rg;
    private String endereco;
    private Date dataPrimeiraCompra;

    // Construtor
    public Cliente(String cpf, String nome, String login, String email, String rg,
                   String endereco, Date dataPrimeiraCompra) {
        this.cpf = cpf;
        this.nome = nome;
        this.login = login;
        this.email = email;
        this.rg = rg;
        this.endereco = endereco;
        this.dataPrimeiraCompra = dataPrimeiraCompra;
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

    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
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

    public Date getDataPrimeiraCompra() {
        return dataPrimeiraCompra;
    }

    public void setDataPrimeiraCompra(Date dataPrimeiraCompra) {
        this.dataPrimeiraCompra = dataPrimeiraCompra;
    } 
}
