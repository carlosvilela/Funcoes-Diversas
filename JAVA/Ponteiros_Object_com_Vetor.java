class test{
	
	public static void main(String args[]){
		
		Object pointVI[] = new Integer[6];
		
		for(int i = 0; i<=5; i++){
			
			pointVI[i] = i*2;
			
			System.out.println(pointVI[i]);
		}
		
		
		Object pointVC[] = new Character[6];
		
		for (int i = 0; i<=5; i++){
			
			pointVC[i] = 'a';
			
			System.out.println(pointVC[i]);
		}
		
		
		Object pointVS[] = new String[6];
		
		for (int i = 0; i<=5; i++){
			
			pointVS[i] = "oi "+i;
			
			System.out.println(pointVS[i]);
		}
		
		
		
		
		pointVI = null;
		pointVC = null;
		pointVS = null;
		
		
		Runtime.getRuntime().gc();
		
		
	}
	
	
}
