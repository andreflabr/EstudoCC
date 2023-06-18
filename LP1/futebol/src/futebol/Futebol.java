package futebol;
public class Futebol {
    private String time;
    private int quantidadeJogadores;
    private int placar;
    private boolean partidaEmAndamento;
    
    // Construtor padrão
    public Futebol() {
        this.time = "Time A";
        this.quantidadeJogadores = 11;
        this.placar = 0;
        this.partidaEmAndamento = false;
    }
    
    // Construtor com parâmetros
    public Futebol(String time, int quantidadeJogadores) {
        this.time = time;
        this.quantidadeJogadores = quantidadeJogadores;
        this.placar = 0;
        this.partidaEmAndamento = false;
    }
    
    // Getters e Setters
    public String getTime() {
        return time;
    }
    
    public void setTime(String time) {
        this.time = time;
    }
    
    public int getQuantidadeJogadores() {
        return quantidadeJogadores;
    }
    
    public void setQuantidadeJogadores(int quantidadeJogadores) {
        this.quantidadeJogadores = quantidadeJogadores;
    }
    
    public int getPlacar() {
        return placar;
    }
    
    public void setPlacar(int placar) {
        this.placar = placar;
    }
    
    public boolean isPartidaEmAndamento() {
        return partidaEmAndamento;
    }
    
    public void iniciarPartida() {
        partidaEmAndamento = true;
        System.out.println("A partida comecou!");
    }
    
    public void marcarGol() {
        if (partidaEmAndamento) {
            placar++;
            System.out.println("Gol! Placar atual: " + placar);
        } else {
            System.out.println("A partida ainda nao comecou.");
        }
    }
    
    public static void main(String[] args) {
        Futebol jogo1 = new Futebol();
        Futebol jogo2 = new Futebol("Time B", 10);
        
        jogo1.iniciarPartida();
        jogo1.marcarGol();
        
        jogo2.iniciarPartida();
        jogo2.marcarGol();
        jogo2.marcarGol();
        
        System.out.println("Placar do jogo 1: " + jogo1.getPlacar());
        System.out.println("Placar do jogo 2: " + jogo2.getPlacar());
    }
}
