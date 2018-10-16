# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    char nome[35];
    int tc, a, b, c;
    printf ("Entre com o nome do piloto:\n");
    scanf ("%s", &nome);
    printf ("Entre com a pontuacao da primeira corrida:\n");
    scanf ("%i", &a);
    printf ("Entre com a pontuacao da segunda corrida:\n");
    scanf ("%i", &b);
    printf ("Entre com a pontuacao da terceira corrida:\n");
    scanf ("%i", &c);
    tc=a+b+c;
    printf ("A pontuacao do piloto %s foi %i",nome, tc);
    getch();   
}
