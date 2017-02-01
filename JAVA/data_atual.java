import java.util.Date;
import java.text.SimpleDateFormat;

class data{
	
	public static void main(String[] args){
		
		Date data = new Date();
		SimpleDateFormat formato = new SimpleDateFormat ("dd/mm/yyyy");
		
		String MostrarData = formato.format(data);
		
		
		System.out.println(MostrarData);
		
		
	}
	
	
	
}
