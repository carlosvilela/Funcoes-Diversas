import java.io.FileReader; // Ler Arquivo
import java.io.BufferedReader; // Ler Buffer no arquivo/ ler arquivo


class LerArquivos{
	
	public static void main(String args[]){
		
		try{
		
		FileReader arquivo = new FileReader("exemplo.txt");
		BufferedReader ler = new BufferedReader(arquivo);
		
		String conteudo = ler.readLine();
				
		arquivo.close();
		
		System.out.println(conteudo);

				
		}catch(Exception e){}
	
	
	
		
	}
	
	
	
}
