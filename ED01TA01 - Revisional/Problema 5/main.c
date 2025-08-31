#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vMaior = -1, vMenor = 1001, vNum, flag = 1;
    do {
        printf("Digite um número entre 1 e 1000: ");
        scanf("%d", &vNum);
        puts("");
        if (vNum < 1 || vNum >1000){
            flag = 0;
        }else{

            if (vNum > vMaior) {vMaior = vNum;}
            if (vNum < vMenor) {vMenor = vNum;}

        }

    }while (flag != 0);

    system("cls");
    printf("Saiu\n\n");

    if (vMaior != -1 && vMenor != 1001) {

        printf("O maior numero eh: %d \n", vMaior);
        printf("O menor numero eh: %d \n\n", vMenor);

    }else {

        printf("Nenhum valor dentro da condicao estabelecida foi digitado!\n\n");

    }

    return 0;
}
