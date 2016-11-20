#include "stdafx.h" // Biblioteca do Visual Strudio



int main(int argc, char *argv[]){

	/*
	testes.exe oi tudo bem?

	terminal:

	testes.exe // argv[0] - Repete o nome digitado no inicio que é o nome do programa
	oi // argv[1] - palavra 1
	tudo // argv[2] - palavra 2
	bem? // argv[3] - palavra 3
	<NULL> // argv[4] - ENTER sem argumentos

	o argc retorna o numero de argumentos, neste caso foram 4 (0, 1, 2, 3, 4)
	
	
	*/

	int i = 0;
	while (i <= argc){

		printf("%s\n", argv[i]);
		i++;

	}


	return 0;
}
