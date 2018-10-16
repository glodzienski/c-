# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    float ql,pg,vt;
    printf("Calculo do preco da gasolina \n\n");
    printf("Informe a quantidade de litros:\n");
    scanf("%f", &ql);
    pg=2.03;
    vt=pg*ql;
    printf("O total gasto foi:%f", vt);
    getch();
}
