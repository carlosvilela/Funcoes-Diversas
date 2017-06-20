#include <iostream>

using namespace std;

main(){
    
    /*
     
     A função fill preenche os espaços vazios com caracteres devinidos
    
     */
    
    
    
    char palavra[5] = "CASA"; // sempre colocar um valor superior a quantidade que deseja usar no vetor
    
    cout.fill('Q'); // define que será inserido o caracter Q preenchendo os espaços vazios
    cout.width(10); // quantidade de espaço que o cout exibirá
    cout << palavra; // QQQQQQCASA
    
}
