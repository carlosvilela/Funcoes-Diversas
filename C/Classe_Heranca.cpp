#include <Cstdio>

class principal{
	
	protected:
		int x;
		
		public:
			int getX();
	
	
};

int principal::getX(){
	return (x);
}




class secundario: public principal{
	
	public:
		void setX(int c);
	
	
	
};
secundario sec;

void secundario::setX(int c){
	
	x = c;
	
}




main(){


sec.setX(5);

printf("%d",sec.getX());
	
	
	
}
