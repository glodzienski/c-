# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include<math.h>

int main()
{
float qm,preco=0;
printf("Entre com o numeros de maca que voce comprou\n");
scanf("%f",&qm);
    if (qm<10)
       {
       preco=qm*0.10;
       printf("Voce ira pagar um total de: :%.2f",preco);
       }
     else
       {
       preco=qm*0.20;
       printf("Voce ira pagar um total de: :%.2f",preco);
       }
getch();

}
