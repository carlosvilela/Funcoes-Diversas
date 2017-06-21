#include <iostream>

using namespace std;

main(){
    
    char a[6];
    int i;
    
    cin.get(a[4]); // pega o primeiro caracter que foi digitado e coloca na variavel na posicao que você especificar
    cout << a[4] << endl;
    
    /*
    cin.get(i); // não aceita numeros, aceita apenas caracteres
    cout << i << endl;
    */
    
    cin.get(a,5); // lê um array e para na posicao especiicada, pode ainda configurar o delimitador cin.get(a,5, '\n');, porém o delimitador padrão é o \n
    for (int i = 0; i<=6; i++){
        
        cout << a[i] << endl;
        
    }
    
    
    
    
}
