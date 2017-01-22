import java.io.FileWriter; // usar o comando FileWriter para criar arquivo no local e nome indicado
import java.io.PrintWriter; // usar PrintWriter para escrever conteudo do arquivo

class test{
	
	public static void main (String args[]){
		
		try{
		
		FileWriter arquivo = new FileWriter("test.txt"); // cria o arquivo
		PrintWriter escreverArquivo = new PrintWriter(arquivo); // escreve no arquivo
		escreverArquivo.print("Texto");
		arquivo.close();
		
		}catch(Exception e){
			System.out.println("ERRO: "+e);
			}
		
		
	}
	
}
