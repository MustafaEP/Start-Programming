#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[200];
    printf("Please! Write your name: ");
    scanf("%s",&name);

    printf("/n");

    for(int i=0; i<10; i++)
        printf("\n%d.Name: %s", i+1, name);



    return 0;
}
