#include <stdio.h>
#include <conio.h>

main()
{
    int Tdulces, Sdulces;//Total y sobrantes de dulce
    int Consumo, Gasto;
    printf("Dulces totales\n");
    scanf("%d",&Tdulces);
    printf("Dulces sobrantes\n");
    scanf("%d",&Sdulces);
    Consumo = Tdulces - Sdulces;
    Gasto = Consumo * 13;
    printf("El consumo fue:%d \n", Consumo);
    printf("El gasto fue:%d pesos", Gasto);
    getch();
}