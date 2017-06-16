#include <cstdio>

class teste{
private:
    int x, y;

public:
    teste(int a, int b);

};


teste::teste (int a, int b){
x = a;
y = b;

printf("x = %d; y = %d", x, y);

}

main(){

teste(1,5);


}
