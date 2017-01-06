import java.util.Scanner; // biblioteca para entrada de dados


public class calcularmedia_inteiro{
	
	public static void main (String args[]){
		
		int i;
		i = 0;
		
		// criar objeto de entrada de dados
		Scanner in = new Scanner (System.in);
		
		int n, num, media;
		num = 0;
		media = 0;
		
		while (i<=9){
			
			System.out.print("Digite o "+(i+1)+"(a) numero: ");
			n = in.nextInt(); // entrada de dados somente inteiro
			
			num = num + n;
			
		i++;	
			
		}
		
		media = num/10;
		
		System.out.println("A média dos números digitados é: "+(media));
		
		
		// Desalocar objeto da memória, como se fosse ponteiros
		in = null;
		Runtime.getRuntime().gc();
		
	}
	
}
