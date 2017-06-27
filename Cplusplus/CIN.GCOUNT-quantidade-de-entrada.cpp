#include <iostream>

using namespace std;

main(){

char palavra[] = ".";
int x;

cin.getline(palavra, 10, '\n');
x = cin.gcount();

cout << "\n\n X = " << (x - 1) << endl;




}
