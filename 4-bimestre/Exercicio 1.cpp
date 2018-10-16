# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<math.h>

int main()
{
float var1,var2,re=0;
printf("Entre com o primeiro valor\n");
scanf("%f",&var1);
printf("Entre com o segundo valor\n");
scanf("%f",&var2);
    if (var1<var2)
       {
       re=var2-var1;
       printf("A diferenca entre esses dois numeros e:%.0f",re);
       
       }
     else if (var1==var2)
       {
       printf("Voce entrou com valores iguais.");
       }
       else
       { 
       re=var1-var2;
       printf("A diferenca entre esses dois numeros e:%.0f",re); 
       }
getch();

}
