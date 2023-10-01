package pkg2;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        double a,b,c,triangulo, quadrado, circulo, trapezio, retangulo;
        
        System.out.println("a:");
        a = scan.nextDouble();
        System.out.println("b:");
        b = scan.nextDouble();
        System.out.println("c:");
        c = scan.nextDouble();
        
        //área do triângulo retângulo
        double areaTriangulo = (a * c) / 2.0;

        //área do círculo
        double pi = 3.14159;
        double areaCirculo = pi * c * c;

        //área do trapézio
        double areaTrapezio = ((a + b) * c) / 2.0;

        //área do quadrado
        double areaQuadrado = b * b;

        //área do retângulo
        double areaRetangulo = a * b;

        System.out.println("Área do triângulo retângulo: " + areaTriangulo);
        System.out.println("Área do círculo: " + areaCirculo);
        System.out.println("Área do trapézio: " + areaTrapezio);
        System.out.println("Área do quadrado: " + areaQuadrado);
        System.out.println("Área do retângulo: " + areaRetangulo);
        
        scan.close();    }
    
}
