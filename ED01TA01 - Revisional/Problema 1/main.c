#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i, vMaior, vMenor, vNumero;
        printf("Digite um numero: ");
        scanf("%lf", &vNumero);
        vMaior = vNumero;
        vMenor = vNumero;
    for (i=0; i<4; i++){
        printf("\nDigite um numero: ");
        scanf("%lf", &vNumero);

        if(vNumero<vMenor){
            vMenor = vNumero;
        }
        if(vNumero>vMaior){
            vMaior = vNumero;
        }
    }

    printf("\n\nMaior numero: %.2lf", vMaior);
    printf("\nMenor numero: %.2lf", vMenor);

    return 0;
}
