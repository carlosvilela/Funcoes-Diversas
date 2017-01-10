/* classe Programa - esta é a classe executavel com a função main, 
 * não precisa iniciar com public class porque não vamos usar funções
 *  desta classe em outras classes
*/

import java.util.Scanner;

class programa{
	
	public static void main (String args[]){
	
	double n1, n2, resultado;
	
	funcoes fun = new funcoes(); // desta forma pegamos a classe que contem as funcoes
	
	Scanner in = new Scanner(System.in);
	
	
	System.out.println("Insira um numero qualquer: ");
	n1 = in.nextDouble();
	
	System.out.println("Insira outro numero qualquer: ");
	n2 = in.nextDouble();
	
	resultado = fun.media(n1, n2);
	
	System.out.println("A Média é: "+resultado);
		
	}
	
	
}


/* Esta Classe é onde temos as funções que serão utilizadas na classe programa,
 * não colocamos public class porque não é necessário já que esta classe está
 * dentro do mesmo arquivo java que a classe programa, mas se fosse um arquivo extertno
 * seria interessante colocar public classe para deixarmos a classe publica
 *
 */

class funcoes{
	
	public static double media (double num1, double num2){
		double r;
		
		
		r = (num1+num2)/2;
		
		return r;
		
	}
	
	
}

