#include <iostream>
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
    
    
}
