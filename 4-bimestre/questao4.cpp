# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    float a,b,c;
    printf ("Teorema de Pitagoras\n\n\n");
    printf ("Entre com o valor do primeiro cateto:\n");
    scanf ("%f", &b);
    printf ("Entre com o valor do segundo cateto:\n");
    scanf ("%f", &c);
    a=sqrt(pow(b,2))+(pow(c,2));
    printf ("O resultado final e: %f", a);
    getch();
}
