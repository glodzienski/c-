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
    t=pow(a+b+c,2);
    printf("O quadrado da soma dos tres valores e: %i", t);
    getch();
} 
