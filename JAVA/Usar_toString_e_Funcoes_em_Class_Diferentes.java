// arquivo cadastro.java - não se esqueça que o nome deve ser o mesmo da class respeitando maiusculas e minusculas

public class cadastro{ // o arquivo deve obrigatoriamente ter o mesmo nome da classe, senão não compila
	
	private String nome;
	private Integer idade;
	private Character sexo;
	
	
	public void addNome(String aluno){
	
		this.nome = aluno;
	
	}
	
	public String getNome(){
		
		return this.nome;
	
	}
	
	public void addIdade(Integer idade){
		
		this.idade = idade;
	
	}
	
	public Integer getIdade (){
		
		return this.idade;
	
	}
	
	
	public void addSexo (Character sexo){
		
		this.sexo = sexo;
		
	}
	
	public Character getSexo (){
		
		return this.sexo;
		
	}
	
	@Override // deixa explicito que este método é uma função de reescrita. suponha q você erre e coloque o nome da função de tostring, se não colocar o @Override esse erro passará batido, mas se colocar @Override então o compilador identificará e não deixará compilar sinalizando que você errou
	public String toString(){
		
		return "Aluno: "+this.nome+"; Idade: "+this.idade+" anos; Sexo: "+this.sexo;
	
	}

	
}




// arquivo main.java

import java.util.Scanner;

class principal { // não precisa ser public class porque não iremos compartilhar eta classe
	
	public static void main (String args[]){
		
		String nome;
		Integer idade;
		Character sexo;
		
		Scanner in = new Scanner(System.in);
		cadastro aluno = new cadastro(); // class cadastro
		
		System.out.println("<Cadastrar>===============================");
		
		System.out.print("Insira o Nome: ");
		nome = in.nextLine();
		aluno.addNome(nome);
		
		System.out.print("Insira a Idade: ");
		idade = in.nextInt();
		aluno.addIdade(idade);
		
		System.out.print("Insira o Sexo (M/F): ");
		sexo = in.next().charAt(0); // pega o next que é uma string e o charAt(index) que converte um caracter em char, se index = 0 então pega a primeira letra
		aluno.addSexo(sexo);
		
		System.out.println("<Exibir>==================================");
		
		System.out.println(aluno);
		
	}
	
}

// Sem toString
/**

[desktop@localhost Primeiros Passos]$ java principal
<Cadastrar>===============================
Insira o Nome: Carlos
Insira a Idade: 30
Insira o Sexo (M/F): M
<Exibir>==================================
cadastro@4554617c
[desktop@localhost Primeiros Passos]$ 


 **/
 
 
 // com toString
 
/**
  
  [desktop@localhost Primeiros Passos]$ java principal
<Cadastrar>===============================
Insira o Nome: Carlos
Insira a Idade: 30
Insira o Sexo (M/F): M
<Exibir>==================================
Aluno: Carlos; Idade: 30 anos; Sexo: M
[desktop@localhost Primeiros Passos]$ 

  
**/

