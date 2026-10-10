#include <stdio.h>
#include <conio.h>

main()
{
    int reg;
    float call, cal2, cal3, cal4, cal5,pro;
    printf("Teclea tu registro\n");
    scanf("%d",&reg);
    printf("Teclea call, cal2, cal3, cal4, cal5\n");
    scanf("%f",&call);
    scanf("%f",&cal2);
    scanf("%f",&cal3);
    scanf("%f",&cal4);
    scanf("%f",&cal5);
    pro =(call+cal2+cal3+cal4+cal5)/5;
    printf("%d %.2f",reg, pro);
    getch();

}