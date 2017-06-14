// O operador de resolução de escopo (::) recupera o valor global de a que está oculto no escopo atual.


#include <cstdio>

int a = 1;

main(){

int a = 5;


printf("Variavel Local: %d", a);

printf("\n\nVariavel Global: %d", ::a);



}
