package pkg3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Ler dados do primeiro funcionário
        System.out.print("Informe o numero do primeiro funcionario: ");
        int numeroFuncionario1 = sc.nextInt();
        System.out.print("Informe o numero de horas trabalhadas do primeiro funcionario: ");
        int horasTrabalhadas1 = sc.nextInt();
        System.out.print("Informe o valor que o primeiro funcionario recebe por hora: ");
        double valorPorHora1 = sc.nextDouble();

        // Calcular o salário do primeiro funcionário
        double salario1 = horasTrabalhadas1 * valorPorHora1;

        // Ler dados do segundo funcionário
        System.out.print("Informe o numero do segundo funcionario: ");
        int numeroFuncionario2 = sc.nextInt();
        System.out.print("Informe o numero de horas trabalhadas do segundo funcionario: ");
        int horasTrabalhadas2 = sc.nextInt();
        System.out.print("Informe o valor que o segundo funcionario recebe por hora: ");
        double valorPorHora2 = sc.nextDouble();

        // Calcular o salário do segundo funcionário
        double salario2 = horasTrabalhadas2 * valorPorHora2;

        // Exibir os resultados com duas casas decimais
        System.out.printf("Funcionario %d - Salario: R$ %.2f%n", numeroFuncionario1, salario1);
        System.out.printf("Funcionario %d - Salario: R$ %.2f%n", numeroFuncionario2, salario2);

        sc.close();    }
    
}
