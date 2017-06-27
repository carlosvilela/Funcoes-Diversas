#include<fstream>

const char* Nome1 = "arquivo_1.txt";

const char* Nome2 = "arquivo_2.txt";

using namespace std;

main(){

//Para abrir o arquivo no modo de acréscimo, use o ios::app.

    fstream arquivo; // o OPEN serve para abrir o arquivo em modo entrada ou saida

    arquivo.open(Nome1, ios::in);

    arquivo.open(Nome2, ios::out);


    ifstream infile; // pega arquivo existente, não cria arquivo, e abre em modo entrada

    infile.open("Arquivo.in", ios::in); // não é necessário especificar IOS::IN

    ofstream outline; // cria arquivo e abre em modo saida

    outline.open("Arquivo.out", ios::out);  // não é necessário especificar IOS::OUT



    arquivo.close(); // fechar arquivo

    infile.close(); // fechar arquivo

    outline.close(); // fechar arquivo

}
