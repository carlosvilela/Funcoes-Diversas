/*
Texto tirado da Fundação Bradesco, curso: Características do C++ - Definição de escopo

Escopo é a parte de um programa onde uma determinada variável é acessível. Uma variável tem um escopo associado que, juntamente com o nome da variável, identifica a variável de forma única.

O escopo de uma variável se estende entre o ponto de declaração da variável e a chave de fechamento mais próxima dentro da qual a variável é declarada.
*/

main(){

int var1;

  {
    var1 = 5; // funciona, pois está no escopo do programa
    int var2;
      {
      int var3;
      var1 = 98; // funciona, pois está no escopo do programa
      var2 = 99; // funciona, pois está no escopo do programa
      var3 = 100; // funciona, pois está no escopo do programa
      }

   }

var1 = 8; // funciona, pois está no escopo do programa
var2 = 7; // Não funciona, pois está no escopo do programa
var3 = 6; // Não funciona, pois está no escopo do programa

}
