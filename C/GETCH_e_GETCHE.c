#include <stdio.h> // printf. scanf
#include <stdlib.h> // pause
#include <conio.h> // getch, getche

int main(int argc, char** argv[]){

    char usuario[3];
    usuario[0] = '0';
    usuario[1] = '0';
    usuario[2] = '0';
    usuario[3] = '0';

    char senha[3];
    senha[0] = '0';
    senha[1] = '0';
    senha[2] = '0';
    senha[3] = '0';



    printf("Insira o Usuario: ");
    usuario[0] = getche(); // pega os caracteres sem exibir
    usuario[1] = getche();
    usuario[2] = getche();
    usuario[3] = getche();

    printf("\nInsira a Senha: ");
    senha[0] = getch(); // pega os caracteres e exibe
    printf("*");
    senha[1] = getch();
    printf("*");
    senha[2] = getch();
    printf("*");
    senha[3] = getch();
    printf("*");

    printf("\n\nUsuario: %s\nSenha: %s", usuario, senha);

    for(int i = 0; i<=3; i++){

        printf("\nusuario[%d] = %c", i,usuario[i]);

    }
    for(int i = 0; i<=3; i++){

        printf("\nsenha[%d] = %c", i,senha[i]);

    }

    system("pause>>null");

return 0;

}
