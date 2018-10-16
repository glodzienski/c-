# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    char nome[30];
    float p, qc, tp;
    printf ("Entre o nome da mercadoria:\n");
    scanf ("%s", &nome);
    printf ("Entre com o preco da mercadoria:\n");
    scanf ("%f", &p);
    printf ("Entre com a quantidade comprada:\n");
    scanf ("%f", &qc);
    tp=p*qc;
    printf ("Total a pagar pelo(a) %s : %f", &nome, tp);
    getch();
}
