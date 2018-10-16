# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    int a,b,c,t;
    printf("Entre com o primeiro valor:\n");
    scanf("%i", &a);
    printf("Entre com o segundo valor:\n");
    scanf("%i", &b);
    printf("Entre com o terceiro valor:\n");
    scanf("%i", &c);
    t=(pow(a,2))+(pow(b,2))+(pow(c,2));
    printf("A soma dos quadrados dos tres valores e: %i", t);
    getch();
} 
     
