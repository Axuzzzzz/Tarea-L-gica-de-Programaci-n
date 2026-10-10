#include <stdio.h>
#include <conio.h>

main()
{
    int num1, num2;
    int suma, multiplicacion;
    float media;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2);

    suma = num1 + num2;
    multiplicacion = num1 * num2;
    media = (float)(num1 + num2) / 2;

    printf("La suma fue: %d \n", suma);
    printf("La multiplicacion fue: %d \n", multiplicacion);
    printf("La media fue: %.2f", media);
    
    getch();
}