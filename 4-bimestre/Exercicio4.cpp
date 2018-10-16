# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<math.h>

int main()
{
int ano=0;
printf("Entre com o ano\n");
scanf("%i",&ano);
    if (ano% 4== 0)
       {
     printf("Esse ano e bissexto.");
       }
     else
       {
     printf("Esse ano nao e bissexto.");
       }
       
getch();

}
