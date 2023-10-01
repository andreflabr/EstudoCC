package pkg7;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Escolha a forma geometrica:");
        System.out.println("a) Triangulo retangulo");
        System.out.println("b) Circulo");
        System.out.println("c) Trapezio");
        System.out.println("d) Quadrado");
        System.out.println("e) Retangulo");

        char escolha = scanner.next().charAt(0);

        double area = 0.0;

        switch (escolha) {
            case 'a':
                System.out.print("Digite o valor da base (A): ");
                double baseTriangulo = scanner.nextDouble();
                System.out.print("Digite o valor da altura (C): ");
                double alturaTriangulo = scanner.nextDouble();
                area = (baseTriangulo * alturaTriangulo) / 2;
                break;
            case 'b':
                System.out.print("Digite o valor do raio (C): ");
                double raio = scanner.nextDouble();
                area = 3.14159 * raio * raio;
                break;
            case 'c':
                System.out.print("Digite o valor da base maior (A): ");
                double baseMaior = scanner.nextDouble();
                System.out.print("Digite o valor da base menor (B): ");
                double baseMenor = scanner.nextDouble();
                System.out.print("Digite o valor da altura (C): ");
                double alturaTrapezio = scanner.nextDouble();
                area = ((baseMaior + baseMenor) * alturaTrapezio) / 2;
                break;
            case 'd':
                System.out.print("Digite o valor do lado (B): ");
                double ladoQuadrado = scanner.nextDouble();
                area = ladoQuadrado * ladoQuadrado;
                break;
            case 'e':
                System.out.print("Digite o valor do comprimento (A): ");
                double comprimentoRetangulo = scanner.nextDouble();
                System.out.print("Digite o valor da largura (B): ");
                double larguraRetangulo = scanner.nextDouble();
                area = comprimentoRetangulo * larguraRetangulo;
                break;
            default:
                System.out.println("Escolha invalida");
                System.exit(1);
        }

        System.out.println("area: " + area);

        scanner.close();
    }
}