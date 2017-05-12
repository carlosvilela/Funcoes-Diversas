#include <cstdio>
#include <vector>

using namespace std;

main(){
	
	vector<int> exemplo(12); // de 0 até 12 = 13 posições; vector inteiro; porém coloquei 12 para evitar erro, sendo duas posições adicionais
	vector<int> vetor; // não é necessário colocar o tamanho do vetor
	vector<int> testando;
	
	// Escrever Vector com a tabuada de 2
/*

0x2 = exemplo[0] = 0
1x2 = exemplo[1] = 2
2x2 = exemplo[2] = 4
3x2 = exemplo[3] = 6
4x2 = exemplo[4] = 8
5x2 = exemplo[5] = 10
6x2 = exemplo[6] = 12
7x2 = exemplo[7] = 14
8x2 = exemplo[8] = 16
9x2 = exemplo[9] = 18
10x2 = exemplo[10] = 20


*/

	for (int i = 0; i<=10; i++){
	exemplo[i] = i*2; // inserir valores de forma tradicional
	vetor.push_back(i*5); // inserir valores de forma mais interessante
		
	}
	

// valor da Poosição do Vector
	printf("exemplo[5] = %d\n", exemplo[5]); // 2*5 = 10
	
// Tamanho do vector
		printf("exemplo.size() = %d\n", exemplo.size()); // mostra o tamanho especificado na variavel
	
		printf("\nTamanho inicial do vetor: %d\n", vetor.size()); // 11 porque são 10 mais o zero
	
	// apagar todos os elementos do ultimo ao primeiro
	for(int i = 10; i>=0; i--){
		
		vetor.erase(vetor.begin()+i);
	}
	
	printf("\nTamanho final do vetor: %d\n", vetor.size());
	
// Verifica se vector está vazio
	if (vetor.empty()){
		printf("\n\n O Vector esta Vazio");
	}else{
		printf("\n\n O Vector contem elementos");
	}
	
	
// insere valores no vector testando
	for (int i = 0; i<=5; i++){
		testando.push_back((2*5)-i);
	}

// exibe valores do vector testando
	for(int i = 0; i<=5; i++){
		printf("\n testando[%d] = %d",i, testando[i]);
	}
	
	if (testando.empty()){
		printf("O Vetor esta vazio");
	}else{
		printf("\n\nxiiii esse vetor nao esta vazio, se ferrou!!! deixa comigo que irei apaga-lo :)");
		
		// apagando vector testando (estou escrevendo vector para acostumar com esse nome, :) eu sei como se escreve vetor ^^)
		
		while(!testando.empty()){ // enquanto not empty - enquanto não for vazio

			testando.pop_back();

		}
		
	}
	
	if (testando.empty()){
		printf("\n\nFinalmente este vetor esta vazio :)\n\n");
	}	else{
		
		printf("\n\nMe Ferrei, nao consegui pagar essa bosta :(\n\n");
	}

	
	
	
}
