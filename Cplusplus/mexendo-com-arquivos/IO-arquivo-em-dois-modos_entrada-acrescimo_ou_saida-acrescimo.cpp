#include <fstream>

using namespace std;


const char* NomeArquivo1 = "arquivo-entrada-acrescimo.txt";
const char* NomeArquivo2 = "arquivo-saida-acrescimo.txt";


main(){

/*

não dá para usar os dois ao mesmo tempo.

ou você usa
fstream io (NomeArquivo1, ios::in);
ou usa
fstream io (NomeArquivo2, ios::out);

*/

fstream io (NomeArquivo1, ios::in);

fstream io (NomeArquivo2, ios::out);


}
