#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mass[5] = {5, 10, 15, 20, 25};
    int *p;

    p=mass;
    //we assigned mass to p. if we don't use it *, computer will read the adress
    printf("p = %d\n\n",p);


    printf("*p degeri = %d\n", *p);
    printf("(*p+1) degeri = %d\n", *(p+1));
    printf("(*p+2) degeri = %d\n", *(p+2));
    printf("(*p+3) degeri = %d\n", *(p+3));
    printf("(*p+4) degeri = %d\n", *(p+4));

    return 0;
}
