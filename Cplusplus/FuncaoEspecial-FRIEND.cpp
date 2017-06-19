#include <cstdio>

// Função independente Amida de uma class



class class_independente{
private:
    
    int a;
    
   friend void funcao_independente(int x); // a função tornou-se amiga da classe, ou seja, a função agora é membro da classe
  
};


void funcao_independente (int x){
    
    class_independente class_ind;
    
    class_ind.a = x; // pode acessar o conteudo provado da class
    
    printf("Função Independente retorna: %d", class_ind.a);
    
}




main(){
    funcao_independente(5);
}
