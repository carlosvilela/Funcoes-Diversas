/**
 * criar ponteiros em Java, usando Objects
 * 
 * parecido com a criação de ponteiros em C/C++, porem no C/C++ o sizeof
 * retorna o valor em bytes, no Java o SIZE retorna em bits, mas para 
 * converter em bytes basta dividir por 8
 * 
 * Caso queira usar o valor direto em bytes, basta colocar BYTES
 * 
 * Percebi que o comando BYTE, SIZE ou qualque coisa que vier dentro não servirá de tamanho,
 * mas sim será o valor de inicialização da variável
 **/

class test{
	
	
	public static void main (String args[]){
	
	Object ponteiro_1_Int = new Integer(Integer.SIZE/8);
	Object ponteiro_2_Int = new Integer(Integer.BYTES);
	
	Object pointF = new Float(Float.BYTES);
	Object pointD = new Double (Double.SIZE/8);
	
	Object pointC = new Character('a');
	Object pointS = new String("abcdef");
	
	pointC = 'v';
	
	pointS = ",jfdskjbkjkmnjbgfskjbgvsdfbbksbkjsv skjbfg sgfdhbfgsjh fs";
	
	System.out.println(ponteiro_1_Int);
	System.out.println(ponteiro_2_Int);
	System.out.println(pointF);
	System.out.println(pointD);
	System.out.println(pointC);
	System.out.println(pointS);
	
	// para desalocar a memória dinamixa basta anular tudo e chamar o coletor
	
	
	
	ponteiro_1_Int = null;
	ponteiro_2_Int = null;
	
	pointF = null;
	pointD = null;
	
	pointC = null;
	pointS = null;
	
	
	Runtime.getRuntime().gc(); // força a execução do coletor
	
	
	}
	
}
