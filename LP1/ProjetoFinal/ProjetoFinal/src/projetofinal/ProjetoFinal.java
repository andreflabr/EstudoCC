package projetofinal;

import java.util.ArrayList;
import java.util.Scanner;

abstract class Pessoa {
    protected String nome;
    protected int idade;

    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public abstract void exibirInformacoes();
}

class Aluno extends Pessoa {
    private int matricula;

    public Aluno(String nome, int idade, int matricula) {
        super(nome, idade);
        this.matricula = matricula;
    }

    public void exibirInformacoes() {
        System.out.println("Aluno: " + nome + ", Idade: " + idade + ", Matricula: " + matricula);
    }
}

class Professor extends Pessoa {
    private String disciplina;

    public Professor(String nome, int idade, String disciplina) {
        super(nome, idade);
        this.disciplina = disciplina;
    }

    public void exibirInformacoes() {
        System.out.println("Professor: " + nome + ", Idade: " + idade + ", Disciplina: " + disciplina);
    }
}

class Disciplina {
    private String nome;

    public Disciplina(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }
}

class Curso {
    private String nome;
    private ArrayList<Disciplina> disciplinas;

    public Curso(String nome) {
        this.nome = nome;
        this.disciplinas = new ArrayList<>();
    }

    public void adicionarDisciplina(Disciplina disciplina) {
        disciplinas.add(disciplina);
    }

    public void exibirDisciplinas() {
        System.out.println("Disciplinas do Curso " + nome + ":");
        for (Disciplina disciplina : disciplinas) {
            System.out.println("- " + disciplina.getNome());
        }
    }
}

class Sistema {
    private ArrayList<Aluno> alunos;
    private ArrayList<Professor> professores;
    private ArrayList<Disciplina> disciplinas;
    private ArrayList<Curso> cursos;

    public Sistema() {
        this.alunos = new ArrayList<>();
        this.professores = new ArrayList<>();
        this.disciplinas = new ArrayList<>();
        this.cursos = new ArrayList<>();
    }

    public void menuPrincipal() {
        Scanner scanner = new Scanner(System.in);
        int opcao;

        do {
            System.out.println("\nMENU PRINCIPAL:");
            System.out.println("1- Gerenciar ALUNOS");
            System.out.println("2- Gerenciar PROFESSORES");
            System.out.println("3- Gerenciar DISCIPLINAS");
            System.out.println("4- Gerenciar CURSOS");
            System.out.println("5- SAIR");

            System.out.print("Escolha uma opcao: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    menuAlunos();
                    break;
                case 2:
                    menuProfessores();
                    break;
                case 3:
                    menuDisciplinas();
                    break;
                case 4:
                    menuCursos();
                    break;
                case 5:
                    System.out.println("Saindo do sistema...");
                    break;
                default:
                    System.out.println("Opcao invalida. Tente novamente.");
            }
        } while (opcao != 5);
    }

    private void menuAlunos() {
        Scanner scanner = new Scanner(System.in);
        int opcao;

        do {
            System.out.println("\nMENU ALUNOS:");
            System.out.println("1- Cadastrar aluno");
            System.out.println("2- Listar alunos");
            System.out.println("3- Voltar ao menu principal");

            System.out.print("Escolha uma opcao: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    cadastrarAluno();
                    break;
                case 2:
                    listarAlunos();
                    break;
                case 3:
                    System.out.println("Voltando ao menu principal...");
                    break;
                default:
                    System.out.println("Opcao invalida. Tente novamente.");
            }
        } while (opcao != 3);
    }

    private void cadastrarAluno() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome do aluno: ");
        String nome = scanner.nextLine();
        System.out.print("Digite a idade do aluno: ");
        int idade = scanner.nextInt();
        System.out.print("Digite a matricula do aluno: ");
        int matricula = scanner.nextInt();

        Aluno aluno = new Aluno(nome, idade, matricula);
        alunos.add(aluno);

        System.out.println("Aluno cadastrado com sucesso!");
    }

    private void listarAlunos() {
        System.out.println("\nLISTA DE ALUNOS:");
        for (Aluno aluno : alunos) {
            aluno.exibirInformacoes();
        }
    }

    private void menuProfessores() {
        Scanner scanner = new Scanner(System.in);
        int opcao;

        do {
            System.out.println("\nMENU PROFESSORES:");
            System.out.println("1- Cadastrar professor");
            System.out.println("2- Listar professores");
            System.out.println("3- Voltar ao menu principal");

            System.out.print("Escolha uma opcao: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    cadastrarProfessor();
                    break;
                case 2:
                    listarProfessores();
                    break;
                case 3:
                    System.out.println("Voltando ao menu principal...");
                    break;
                default:
                    System.out.println("Opcao invalida. Tente novamente.");
            }
        } while (opcao != 3);
    }

    private void cadastrarProfessor() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome do professor: ");
        String nome = scanner.nextLine();
        System.out.print("Digite a idade do professor: ");
        int idade = scanner.nextInt();
        scanner.nextLine();  // Consumir a quebra de linha pendente
        System.out.print("Digite a disciplina do professor: ");
        String disciplina = scanner.nextLine();

        Professor professor = new Professor(nome, idade, disciplina);
        professores.add(professor);

        System.out.println("Professor cadastrado com sucesso!");
    }

    private void listarProfessores() {
        System.out.println("\nLISTA DE PROFESSORES:");
        for (Professor professor : professores) {
            professor.exibirInformacoes();
        }
    }

    private void menuDisciplinas() {
        Scanner scanner = new Scanner(System.in);
        int opcao;

        do {
            System.out.println("\nMENU DISCIPLINAS:");
            System.out.println("1- Cadastrar disciplina");
            System.out.println("2- Listar disciplinas");
            System.out.println("3- Voltar ao menu principal");

            System.out.print("Escolha uma opcao: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    cadastrarDisciplina();
                    break;
                case 2:
                    listarDisciplinas();
                    break;
                case 3:
                    System.out.println("Voltando ao menu principal...");
                    break;
                default:
                    System.out.println("Opcao invalida. Tente novamente.");
            }
        } while (opcao != 3);
    }

    private void cadastrarDisciplina() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome da disciplina: ");
        String nome = scanner.nextLine();

        Disciplina disciplina = new Disciplina(nome);
        disciplinas.add(disciplina);

        System.out.println("Disciplina cadastrada com sucesso!");
    }

    private void listarDisciplinas() {
        System.out.println("\nLISTA DE DISCIPLINAS:");
        for (Disciplina disciplina : disciplinas) {
            System.out.println("- " + disciplina.getNome());
        }
    }

    private void menuCursos() {
        Scanner scanner = new Scanner(System.in);
        int opcao;

        do {
            System.out.println("\nMENU CURSOS:");
            System.out.println("1- Cadastrar curso");
            System.out.println("2- Listar cursos");
            System.out.println("3- Adicionar disciplina a um curso");
            System.out.println("4- Voltar ao menu principal");

            System.out.print("Escolha uma opcao: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    cadastrarCurso();
                    break;
                case 2:
                    listarCursos();
                    break;
                case 3:
                    adicionarDisciplinaAoCurso();
                    break;
                case 4:
                    System.out.println("Voltando ao menu principal...");
                    break;
                default:
                    System.out.println("Opcao invalida. Tente novamente.");
            }
        } while (opcao != 4);
    }

    private void cadastrarCurso() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome do curso: ");
        String nome = scanner.nextLine();

        Curso curso = new Curso(nome);
        cursos.add(curso);

        System.out.println("Curso cadastrado com sucesso!");
    }

    private void listarCursos() {
        System.out.println("\nLISTA DE CURSOS:");
        for (Curso curso : cursos) {
            System.out.println("- " + curso.getNome());
        }
    }

    private void adicionarDisciplinaAoCurso() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome do curso ao qual deseja adicionar disciplina: ");
        String nomeCurso = scanner.nextLine();

        Curso cursoEncontrado = null;
        for (Curso curso : cursos) {
            if (curso.getNome().equalsIgnoreCase(nomeCurso)) {
                cursoEncontrado = curso;
                break;
            }
        }

        if (cursoEncontrado != null) {
            System.out.print("Digite o nome da disciplina a ser adicionada: ");
            String nomeDisciplina = scanner.nextLine();

            Disciplina disciplinaEncontrada = null;
            for (Disciplina disciplina : disciplinas) {
                if (disciplina.getNome().equalsIgnoreCase(nomeDisciplina)) {
                    disciplinaEncontrada = disciplina;
                    break;
                }
            }

            if (disciplinaEncontrada != null) {
                cursoEncontrado.adicionarDisciplina(disciplinaEncontrada);
                System.out.println("Disciplina adicionada ao curso com sucesso!");
            } else {
                System.out.println("Disciplina nao encontrada.");
            }
        } else {
            System.out.println("Curso nao encontrado.");
        }
    }
}

public class ProjetoFinal {
    public static void main(String[] args) {
        Sistema sistema = new Sistema();
        sistema.menuPrincipal();
    }
}