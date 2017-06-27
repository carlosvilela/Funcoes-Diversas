#include <iostream>

using namespace std;

main(){

char palavra[] = ".";
int x;

cin.getline(palavra, 10, '\n');
x = cin.peek(); // retorna o primeiro caracter

cout << "\n\n X = " << (char(x)) << endl;




}
