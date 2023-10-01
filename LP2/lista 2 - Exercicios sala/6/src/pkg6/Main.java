package pkg6;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Escolha a operacao:");
        System.out.println("1. Soma");
        System.out.println("2. Subtracao");
        System.out.println("3. Multiplicacao");
        System.out.println("4. Divisao");

        int escolha = scanner.nextInt();

        System.out.print("Digite o primeiro numero: ");
        double num1 = scanner.nextDouble();
        System.out.print("Digite o segundo numero: ");
        double num2 = scanner.nextDouble();

        double resultado = 0;

        switch (escolha) {
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                resultado = num1 - num2;
                break;
            case 3:
                resultado = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    System.out.println("Erro: Divisão por zero");
                    System.exit(1);
                }
                break;
            default:
                System.out.println("Opção inválida");
                System.exit(1);
        }

        System.out.println("Resultado: " + resultado);

        scanner.close();
    }
}