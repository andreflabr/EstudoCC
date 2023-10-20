
package pkg20;
public class Main {
    public static void main(String[] args) {
        Moto motoHonda = new Moto("Honda", 150, "Pirelli");
        Carro carroFiat = new Carro("Fiat", 120, "Michelin");

        System.out.println("Atributos da Moto Honda:");
        System.out.println("Marca: " + motoHonda.getModelo());
        System.out.println("Velocidade: " + motoHonda.getVelocidade() + " km/h");
        System.out.println("Pneu: " + motoHonda.getPneuModelo() + " (Aro " + motoHonda.getPneuAro() + ")");

        System.out.println("\nAtributos do Carro Fiat:");
        System.out.println("Marca: " + carroFiat.getModelo());
        System.out.println("Velocidade: " + carroFiat.getVelocidade() + " km/h");
        System.out.println("Pneu: " + carroFiat.getPneuModelo() + " (Aro " + carroFiat.getPneuAro() + ")");
    }
}

class Automovel {
    private int velocidade;
    private String modelo;

    public Automovel(String modelo, int velocidade) {
        this.modelo = modelo;
        this.velocidade = velocidade;
    }

    public int getVelocidade() {
        return velocidade;
    }

    public String getModelo() {
        return modelo;
    }
}

class Pneu {
    private int aro;
    private String modelo;

    public Pneu(String modelo, int aro) {
        this.modelo = modelo;
        this.aro = aro;
    }

    public int getAro() {
        return aro;
    }

    public String getModelo() {
        return modelo;
    }
}

class Carro extends Automovel {
    private Pneu pneu;

    public Carro(String modelo, int velocidade, String pneuModelo) {
        super(modelo, velocidade);
        this.pneu = new Pneu(pneuModelo, 16);
    }

    public String getPneuModelo() {
        return pneu.getModelo();
    }

    public int getPneuAro() {
        return pneu.getAro();
    }
}

class Moto extends Automovel {
    private Pneu pneu;

    public Moto(String modelo, int velocidade, String pneuModelo) {
        super(modelo, velocidade);
        this.pneu = new Pneu(pneuModelo, 18);
    }

    public String getPneuModelo() {
        return pneu.getModelo();
    }

    public int getPneuAro() {
        return pneu.getAro();
    }
}