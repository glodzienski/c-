# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<math.h>

int main()
{
float var1,var2=0;
printf("Entre com o valor 1\n");
scanf("%f",&var1);
printf("Entre com o valor 2\n");
scanf("%f",&var2);

    if (var1>var2)
       {
     printf("%.0f %.0f",var2,var1);
       }
     else
       {
       printf("%.0f %.0f",var1,var2);
       }
       
getch();

}
