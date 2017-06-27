#include <fstream>

using namespace std;


const char* NomeArquivo = "exemplo.txt";

main(){

ofstream outline(NomeArquivo, ios::out); // cria ou abre aruivo em modo saida / acrescimo
  
  /*
  Você usa a constante de enumeração ios::out para abrir o arquivo no modo de saída. Para abrir o arquivo no modo de acréscimo, use o ios::app.

Quando você abre um arquivo no modo de saída, todos os dados armazenados nesse arquivo são descartados. Caso deseje fazer uma adição a um arquivo existente, você precisa abrir o arquivo no modo de acréscimo. Os dados serão então adicionados ao final do arquivo. 
 
 */


}
