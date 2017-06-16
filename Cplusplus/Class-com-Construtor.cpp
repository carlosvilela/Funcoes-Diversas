#include <cstdio>

class teste{
private:
    int x, y;

public:
    teste(int a, int b); // o construtor deve ter o mesmo nome da class e não pode ter return e o corpo da função pode ser escrito fora da class

};


teste::teste (int a, int b){
x = a;
y = b;

printf("x = %d; y = %d", x, y);

}

main(){

teste(1,5);


}
