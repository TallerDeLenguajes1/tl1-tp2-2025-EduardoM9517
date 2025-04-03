#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main() {

    srand(time(NULL));

    int i, j;
    int mt[N] [M];
    //
    int * puntero;
    //
    puntero = *mt;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *puntero=1+rand()%100;
            printf("%d  ", *puntero);
            puntero++;
        }
        printf("\n");
    }
    
    return 0;
}