#include <stdio.h>
#include <stdlib.h>

int main()
{



    int tam = 33;
    int *ptam = &tam;

    printf("Content: %d \n", tam);
    printf("Address: %d \n", &tam);
    printf("Address: %p \n\n", &tam);

    printf("Pointer: %d \n", ptam);
    printf("Pointer: %p \n\n", ptam);

    printf("Pointers Adress: %d \n", &ptam);
    printf("Pointers Adress: %p \n\n", &ptam);

    //Pointer: address of a variable is another variable that contains


    return 0;
}
