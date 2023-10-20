package pkg11;

import pkg11.Cliente;
import pkg11.Empresa;
import pkg11.Fornecedor;
import pkg11.Restaurante;

public class Main {
    public static void main(String[] args) {
                // Criando uma instância de Empresa
        Empresa empresa = new Empresa("Minha Empresa", "Rua da Empresa", "Cidade", "Estado", "12345", "123-456-7890");

        // Criando uma instância de Restaurante
        Restaurante restaurante = new Restaurante("Meu Restaurante", "Rua do Restaurante", "Cidade", "Estado", "54321", "987-654-3210", "Comida Italiana");

        // Criando uma instância de Cliente
        Cliente cliente = new Cliente("João", "Rua do Cliente", "Cidade", "Estado", "67890", "555-555-5555", 12345);

        // Criando uma instância de Fornecedor
        Fornecedor fornecedor = new Fornecedor("Fornecedor XYZ", "Rua do Fornecedor", "Cidade", "Estado", "98765", "999-999-9999", "Produtos Eletrônicos");

        // Imprimindo os detalhes de cada entidade
        System.out.println("Detalhes da Empresa:");
        empresa.print();

        System.out.println("\nDetalhes do Restaurante:");
        restaurante.print();

        System.out.println("\nDetalhes do Cliente:");
        cliente.print();

        System.out.println("\nDetalhes do Fornecedor:");
        fornecedor.print();
    }
}
    
    

