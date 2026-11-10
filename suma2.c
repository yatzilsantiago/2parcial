#include <stdio.h>
int main (void){
    int A,i=0,suma=0;
    printf("ingresar valor de A: ");
    scanf("%d",&A);

    while(i<=A)
    {
        printf("%d+%d=",suma,i);
        suma=suma+i;
        printf("%d",suma);

        i++;

    }
    return 0;
}