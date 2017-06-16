#include <cstdio>

class exemplo{

private:
   int x;

public:
    void add(int i);
    void get();

}membro1, membro2;

void exemplo::add(int i){

this->x = i; // atribui valor a variavel interna separando por membros

}

void exemplo::get(){

printf("\n%d\n",*this); // exibe o valor da variavel interna separando por membros

}



main(){

membro1.add(1);
membro2.add(2);

membro1.get();
membro2.get();


}
