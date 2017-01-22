import java.io.FileWriter; // usar o comando FileWriter para indicar local e nome do arquivo
import java.io.PrintWriter; // usar PrintWriter para escrever conteudo do arquivo

class test{
	
	public static void main (String args[]){
		
		try{
		
		FileWriter arquivo = new FileWriter("test.txt");
		PrintWriter escreverArquivo = new PrintWriter(arquivo);
		escreverArquivo.print("Texto");
		arquivo.close();
		
		}catch(Exception e){
			System.out.println("ERRO: "+e);
			}
		
		
	}
	
}
