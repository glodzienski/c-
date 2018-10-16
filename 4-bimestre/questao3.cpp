# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    float a,r, pi;
    pi=3.14159;
    printf ("Calculo da area de uma circunferencia\n\n");
    printf ("Entre com o valor do raio:\n");
    scanf ("%f", &r);
    a=pi*(r*r);
    printf ("A area da circunferencia e: %f", a);
    getch();
}
