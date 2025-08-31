#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vPopulacaoPaisA = 5000000, vPopulacaoPaisB = 7000000, vTempoAnos = 0;

    while (vPopulacaoPaisA <= vPopulacaoPaisB) {

        vPopulacaoPaisA = vPopulacaoPaisA + (vPopulacaoPaisA * 0.03);

        vPopulacaoPaisB = vPopulacaoPaisB + (vPopulacaoPaisB * 0.02);

        vTempoAnos++ ;

    }
    printf("Foi necessario %d Anos para que a populacao do pais A ultrapasse a do pais B\n\n", vTempoAnos);

    printf("Populacao do pais A ao final: %d \n", vPopulacaoPaisA);
    printf("Populacao do pais B ao final: %d\n\n", vPopulacaoPaisB);
    return 0;
}
