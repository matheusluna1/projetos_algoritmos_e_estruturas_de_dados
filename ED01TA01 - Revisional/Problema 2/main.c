#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vMassa,vPeso;
    int vPlaneta;
    printf("Digite sua masssa em kg: ");
    scanf("%lf", &vMassa);
    system("cls");

    printf("1- Mercurio\t\t2- Venus\n3- Terra\t\t4- Marte\n5- Jupiter\t\t6- Saturno\n7- Urano\t\t8- Netuno\n9- Plutao");
    printf("\n\nSelecione um planeta: ");
    scanf("%d", &vPlaneta);
    puts("");
    puts("");
    puts("");

    switch (vPlaneta)
    {
    case 1 :
        vPeso = vMassa * 0.38;
        printf("Seu peso em Mercurio eh: %.2lf\n\n", vPeso);
        break;

    case 2 :
        vPeso = vMassa * 0.91;
        printf("Seu peso em Venus eh: %.2lf\n\n", vPeso);
        break;

    case 3 :
        printf("Seu peso em Terra eh: %.2lf\n\n", vMassa);
        break;

    case 4 :
        vPeso = vMassa * 0.38;
        printf("Seu peso em Marte eh: %.2lf\n\n", vPeso);
        break;

    case 5 :
        vPeso = vMassa * 2.34;
        printf("Seu peso em Jupiter eh: %.2lf\n\n", vPeso);
        break;

    case 6 :
        vPeso = vMassa * 1.06;
        printf("Seu peso em Saturno eh: %.2lf\n\n", vPeso);
        break;

    case 7 :
        vPeso = vMassa * 0.92;
        printf("Seu peso Urano eh: %.2lf\n\n", vPeso);
        break;

    case 8 :
        vPeso = vMassa * 1.19;
        printf("Seu peso em Netuno eh: %.2lf\n\n", vPeso);
        break;

    case 9 :
        vPeso = vMassa * 0.06;
        printf("Seu peso em Plutao eh: %.2lf\n\n", vPeso);
        break;

    default :
        printf("O planeta nao esta na lista!!\n\n");
        break;

    }

    return 0;
}
