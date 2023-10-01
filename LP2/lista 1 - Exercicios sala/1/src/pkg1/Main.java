package pkg1;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a,b, soma;
        
        System.out.println("primeiro valor: ");
        a = scan.nextInt();
        System.out.println("segundo valor: ");
        b = scan.nextInt();
        
        soma = a + b;
        
        System.out.println("O resultado eh: " + soma);
        
        
        scan.close();

    }
    
}
