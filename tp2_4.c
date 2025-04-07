#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}typedef tCompu;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

int generarAleatorio(int min, int max) {
    return min + rand()%(max-min+1);
}

tCompu generarPc() {
    tCompu pc;

    pc.velocidad = generarAleatorio(1,3);
    pc.anio = generarAleatorio(2015, 2024);
    pc.cantidad_nucleos = generarAleatorio(1,8);
    pc.tipo_cpu = tipos[rand()%6];

    return pc;
}

//FUNCION_1
void listarPCs(struct compu pcs[], int cantidad);

//FUNCION_2
void mostrarMasVieja(struct compu pcs[], int cantidad);

//FUNCION_3
void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main() {
    
    srand(time(NULL));

    tCompu pcs[5];
    for (int i = 0; i < 5; i++)
    {
        pcs[i] = generarPc();
    }
    
    //FUNCION_1
    printf("\n-----Lista de todas las PCs-----");
    listarPCs(pcs, 5);

    printf("\n");

    //FUNCION_2
    printf("\n-----PCs mas vieja/s-----");
    mostrarMasVieja(pcs, 5);

    printf("\n");

    //FUNCION_3
    printf("\n-----PCs mas veloz-----");
    mostrarMasVeloz(pcs, 5);

    return 0;
}

//FUNCION_1
void listarPCs(struct compu pcs[], int cantidad) {

    for (int i = 0; i < cantidad; i++)
    {
        printf("\nPC %d:", i+1);
        printf("\nVelocidad: %d GHz.", pcs[i].velocidad);
        printf("\nAnio: %d", pcs[i].anio);
        printf("\nCantidad de nucleos: %d", pcs[i].cantidad_nucleos);
        printf("\nTipo de procesador: %s", pcs[i].tipo_cpu);
        printf("\n");
    }
    
}

//FUNCION_2
void mostrarMasVieja(struct compu pcs[], int cantidad) {

    int masVieja = 0;

    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < pcs[masVieja].anio)
        {
            masVieja = i;
        }
        
    }
    printf("\nVelocidad: %d GHz.", pcs[masVieja].velocidad);
    printf("\nAnio: %d", pcs[masVieja].anio);
    printf("\nCantidad de nucleos: %d", pcs[masVieja].cantidad_nucleos);
    printf("\nTipo de procesador: %s", pcs[masVieja].tipo_cpu);
    printf("\n");
    
}

//FUNCION_3
void mostrarMasVeloz(struct compu pcs[], int cantidad) {

    int masVeloz = 0;

    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].velocidad > pcs[masVeloz].velocidad)
        {
            masVeloz = i;
        }
        
    }
    printf("\nVelocidad: %d GHz.", pcs[masVeloz].velocidad);
    printf("\nAnio: %d", pcs[masVeloz].anio);
    printf("\nCantidad de nucleos: %d", pcs[masVeloz].cantidad_nucleos);
    printf("\nTipo de procesador: %s", pcs[masVeloz].tipo_cpu);
    printf("\n");

}