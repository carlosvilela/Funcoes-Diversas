#include <cstdio>

// Função independente Amida de uma class

class dependente{

public:
    
void funcao_dependente (int x);

} executar;


class class_dependente{
private:
    
int a;

public:
friend class dependente;  

};


void dependente::funcao_dependente(int x){
    
    class_dependente class_dep;
    
    class_dep.a = x;
    
    printf("Função dependente retorna: %d", class_dep.a);
    
    
}




main(){
    executar.funcao_dependente(43);
}
