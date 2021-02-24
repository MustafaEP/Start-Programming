#include <stdio.h>
#include <stdlib.h>

int main()
{

    int b[] = {10, 20, 30, 40};
    int *pb = b;

    printf("METHOD 1 : ARRAY INDICES\n");
    for(int i=0; i<4; i++)
    {
        printf("b[%d]:\t\t%d\n",i,b[i]);
    }

    printf("\n");

    printf("METHOD 2 : POINTER OFFSET\n");
    for(int i=0; i<4; i++)
    {
        printf("*(pb +%d):\t%d\n",i,*(pb +i));
    }

    printf("\n");

    printf("METHOD 3 : POINTER/ARRAYS OFFSET PRINTING\n");
    for(int i=0; i<4; i++)
    {
        printf("*(b +%d):\t%d\n",i,*(b +i));
    }


    return 0;
}
