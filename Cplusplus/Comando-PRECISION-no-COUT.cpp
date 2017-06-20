#include <iostream>

using namespace std;

main(){

    float valor = 888.56955;
    cout.precision(2); // exibe apenas os 2 primeiros numeros
    cout << valor; // 8.9e+02 (gerou uma notação cientifica 8.9*10⁰2) 
    
    cout <<endl;
    
    valor = 0.856687;
    cout.precision(3);
    cout << valor; // 0.857
    
    cout << endl;
    
    valor = 7.8565588;
    cout.precision(5); // considera todos os valores, inclusive o 7
    cout << valor; // 7.7455 (são 4 numeros decimais mais o numero inteiro completando a precisao de 5 numeros)
    
    
}
