#include <iostream>
#include <iomanip> // IO Manipulators

using namespace std;

main(){
    
    char palavra[] = "Palavra";
    
    cout.fill('Q');
    cout << setw(10) << palavra; // o manipulador SETW funciona igual ao WIDTH
    
}
