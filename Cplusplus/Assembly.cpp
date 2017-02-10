#include "stdio.h"
#include "stdlib.h"

int soma (int a, int b, int c); // Declarar Função

// Atribuir instruções a função
int soma (int a, int b, int c){

int x; // variavel de retorno da função

// realiza a soma em assembly - adiciona os valores dos registradores ebx, ecx ao registrador eax somando os valores
asm volatile ("add %%ebx,%%eax; add %%ecx,%%eax;" //instrução em assembly
:"=a"(x) //saida de dados do registrador eAx
:"a"(a), "b"(b),"c"(c) //entrada de dados aos registradores eAx eBx e eCx
);

return x; //retorno do resultado


}


int main(void){

printf("%d",soma(1,2,10)); // retorna o valor 13 que é a soma de 1+2+10

system("pause>null");

}
