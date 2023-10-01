package pkg4;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int numFuncionarios = 2;
        int[] numeros = new int[numFuncionarios];
        int[] horasTrabalhadas = new int[numFuncionarios];
        double[] valorPorHora = new double[numFuncionarios];
        double[] salarios = new double[numFuncionarios];

        
        for (int i = 0; i < numFuncionarios; i++) {
            System.out.print("Informe o numero do funcionario " + (i + 1) + ": ");
            numeros[i] = sc.nextInt();
            System.out.print("Informe o numero de horas trabalhadas do funcionario " + (i + 1) + ": ");
            horasTrabalhadas[i] = sc.nextInt();
            System.out.print("Informe o valor que o funcionario " + (i + 1) + " recebe por hora: ");
            valorPorHora[i] = sc.nextDouble();

            // Calcular o salário do funcionário
            salarios[i] = horasTrabalhadas[i] * valorPorHora[i];
        }

        // Exibir os resultados com duas casas decimais
        for (int i = 0; i < numFuncionarios; i++) {
            System.out.printf("Funcionario %d - Salario: R$ %.2f%n", numeros[i], salarios[i]);
        }

        sc.close();

    }
    
}
