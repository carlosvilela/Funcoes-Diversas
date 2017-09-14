#include <stdio.h>

typedef struct {
	
	int dia;
	int mes;
	int ano;
	
} Data;

typedef struct{
	
	char nome[80];
	
	Data aniversario;
	
} Contato;

main(){
	
	Contato t;
	
	t.aniversario.ano = 10;


}
