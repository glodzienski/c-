# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<math.h>

int main()
{
float altura,sexo,pi=0;
printf("Entre com sua altura:\n");
scanf("%f",&altura);
printf("Entre com o seu sexo sendo que feminino=1 e masculino=2:\n");
scanf("%f",&sexo);
    if (sexo==2)
       {
       pi=(72.7*altura)-58;
       printf("Seu peso ideal e: %.1f kg",pi);
       }
     else
       {
       pi=(62.7*altura)-44.7;
       printf("Seu peso ideal e: %.1f kg",pi);
       }
getch();

}
