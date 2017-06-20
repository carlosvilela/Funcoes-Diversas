#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

main(){
    
    char palavra[10];
    
    cout << "Insira uma palavra: ";
    
    cin.width(5); // limita a leitura para até 4 caracteres, o quinto caracter é o ENTER, logo só posso inserir 4 caracteres
    cin >> palavra;
    
    cout << endl << "Você escreveu: " << palavra << endl;
    
    // (strlen(palavra)-1) significa que eu quero o numero de valores inseridos na variavel subtraindo o ultimo que é o comando ENTER
    for (int i = 0; i <= (strlen(palavra)-1); i++){
        cout << "palavra [" << i << "] = " << palavra[i] << endl;
    }
    
    int largura = (strlen(palavra)-1)/2; // quero que exiba até a metade
    printf("\n%d\n", largura);
    
    cout.width(largura); // limitei a quantidade de caracteres que serão exibitos, sendo que a largura é a metade da quantidade de caracteres da variável
    cout << palavra; // por algum motivo o width no cout não está funcionando
    /*
     
     Segundo o curso:C++ - Desenvolvimento Orientado a Objeto; Fundação Bradesco
     
     Você também pode usar a função width() para fluxos de saída. No exemplo mostrado abaixo, o valor de x é exibido em um campo com cinco caracteres. Se o comprimento de x for maior que 5, então a configuração da função width() será ignorada e o valor inteiro de x será exibido.
     
     
     */
    
    
    
}
