// calculo.java

public class calculo{
	
	private double N1;
	private double N2;
	private double result;
	
	
	public double media (double num1, double num2){
		
		
		this.N1 = num1;
		this.N2 = num2;
		
		this.result = (this.N1+this.N2)/2;
		
		
		return this.result;
		
	}
	
	@Override
	public String toString(){
		return "Uso: media [numero] [numero] \n * Calcula a média entre dois números \n \n";
	}
	
	
	
}

// media.java

class media{
	
	public static void main (String args[]){
		
		calculo calc = new calculo();	
		
			
		try{
			
			System.out.println("A média entre "+args[0]+" e "+args[1]+" é: "+(calc.media(Double.parseDouble (args[0]), Double.parseDouble(args[1]))));
		
		} catch (Exception e){
			
			System.out.println(calc);
			
		}
	
	
	}
	
}
