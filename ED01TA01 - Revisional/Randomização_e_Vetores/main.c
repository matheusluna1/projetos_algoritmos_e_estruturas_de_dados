#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i, j, vet[9];

    for (i=0; i<9; i++){
        vet[i]= rand();
    }

    for (i=0; i<9; i++) {

        printf("\n[%d] %d", i, vet[i]);
    }
    return 0;
}
