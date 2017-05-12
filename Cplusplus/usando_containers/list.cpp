#include <iostream>
#include <list>
#include <cstdio>
#include <vector>

using namespace std;

main(){
	
	list<int> teste;
	
	teste.push_front(5);
	teste.push_back(55);
	teste.push_back(25);
	teste.push_front(80);
	teste.push_back(0); // elimita esse
	teste.push_front(7777); // elimina esse
	
	teste.pop_back(); // elimina o ultimo da lista
	teste.pop_front(); // elimina o primeiro da lista
	
	
	list<int>::iterator p;
	p = teste.begin();
		
	while(p!= teste.end()){
	
	printf("\n%d", *p);
	
	p++;
	
	}


	while (!teste.empty()){
		
		teste.erase(teste.begin());
	}



	if (teste.empty()){
		
		printf("\n\nLista vazia");
	}else{
		printf("\n\nEsta lista contem elementos");
	}

	
	
	list<int>::iterator y;
	
	y = teste.begin();
	
	while (y != teste.end()){
		
		printf("\n%d", *y);
		
		y++;
	}
	
	
	
	vector<int> ui;
	
	ui.push_back(5); // os valores só podem ser acrescidos no final
	//ui.push_front(5); //não é possivel colocar valor no inicio, esse comando não existe
	
	printf("\n\n%d", ui[0]);
	
	
}
