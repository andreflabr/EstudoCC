package pkg5;

import java.util.Scanner;

class Funcionario {
    private int numero;
    private int horasTrabalhadas;
    private double valorPorHora;
    private double salario;

    public Funcionario(int numero, int horasTrabalhadas, double valorPorHora) {
        this.numero = numero;
        this.horasTrabalhadas = horasTrabalhadas;
        this.valorPorHora = valorPorHora;
        this.salario = calcularSalario();
    }

    public double calcularSalario() {
        return horasTrabalhadas * valorPorHora;
    }

    public void exibirSalario() {
        System.out.printf("Funcionario %d - Salario: R$ %.2f%n", numero, salario);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Ler dados do funcionário
        System.out.print("Informe o numero do funcionario: ");
        int numero = sc.nextInt();
        System.out.print("Informe o numero de horas trabalhadas do funcionario: ");
        int horasTrabalhadas = sc.nextInt();
        System.out.print("Informe o valor que o funcionario recebe por hora: ");
        double valorPorHora = sc.nextDouble();

        // Criar objeto Funcionario com os dados lidos
        Funcionario funcionario = new Funcionario(numero, horasTrabalhadas, valorPorHora);

        // Exibir o salário do funcionário
        funcionario.exibirSalario();

        sc.close();
    }
    
}
