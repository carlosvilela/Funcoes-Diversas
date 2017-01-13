/**
 * Lembre-se que não é uma boa pratica criar uma class so para armazenar dadis,
 * é mais interessante que a classe alem dos dados tambem tenha funcções e procedimentos
 * sem ser com a funão de servir de variável
 **/

import java.util.Scanner;

class test{
	
	public static void main(String args[]){
	
	// variaveis
	Integer i,x;
	
	// entrada de dados
	Scanner in = new Scanner(System.in);
	
	// inicialiar classe
	variaveis vetor[] = new variaveis[100]; // criar vetor

	
	// estrutura do programa
	System.out.println("< Exemplo de Vetores >=========================================");
	
	System.out.print("Insira a quantidade de Cadastro no vetor: ");
	x = in.nextInt();
	
	
	// inserir dados no vetor	
	i = 0;
	while(i <= (x-1)){
		
		vetor[i] = new variaveis(); // inicializar para não ficar nulo
		
		System.out.print("Insira o Nome: ");
		vetor[i].addNome(in.next());
		
		System.out.print("Insira a Idade: ");
		vetor[i].addIdade(in.nextInt());
		
		System.out.print("Insira o Sexo (M/F): ");
		vetor[i].addSexo(in.next().charAt(0));
		
		System.out.print("\n\n\n");
		
		i++;
	}
	
	
	// exibir vetor
	i=0;
	while(i<=x){
	
	System.out.println(vetor[i]);
	
	i++;
		
	}
	
	// desalocar vetor da memoria
	
	i=0;
	while(i<=x){
		
		vetor[i] = null;
		
		i++;
	}

	Runtime.getRuntime().gc(); // força a chamada do coletor



	}
}



// variaveis.java
public class variaveis{
	
	private String nome;
	private Integer idade;
	private Character sexo;
	
	
	public void addNome(String Aluno){
		
		this.nome = Aluno;
		
		}
	public String getNome(){
		return this.nome;
		}
	
	public void addIdade(Integer idade){
		
		this.idade = idade;
		
		}
	public Integer getIdade(){
		return this.idade;
		}
	
	public void addSexo(Character sexo){
		
		this.sexo = sexo;
		
		}
	public Character getSexo(){
		return this.sexo;
		}
	
	@Override
	public String toString(){
		
		String Retorno;
		
		Retorno = "Aluno: "+ this.getNome() +"; "+
		"Sexo: "+ this.getSexo() +"; "+
		"Idade: "+ this.getIdade()+" anos.";
		
		return Retorno;
	}
	
	
}
