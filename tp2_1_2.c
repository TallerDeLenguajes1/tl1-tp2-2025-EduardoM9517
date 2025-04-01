#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main() {

    srand(time(NULL));

    int i;
    double vt[N];
    //
    double * puntero;
    //
    puntero = vt;

    for(i = 0;i < N ; i++)
    {
        *puntero=1+rand()%100;
        printf("%.2f ", *puntero);
        puntero++;
    }

    return 0;
}