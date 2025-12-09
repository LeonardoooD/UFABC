#include <stdio.h>

main( )
{
    int inteiro;
    float real;
    char caracter;

    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);
    printf("%d + %d = %d\n", inteiro, inteiro, inteiro + inteiro);
    printf("%d - 1 = %d\n",  inteiro, inteiro - 1);
    printf("%d * %d = %d\n", inteiro, inteiro, inteiro * inteiro);
    printf("%d / 2 = %d\n", inteiro, inteiro/2);
    printf("%d %% 3 = %d\n", inteiro, inteiro % 3);
    inteiro *= 3;
    printf("%d *= 3: %d\n", inteiro/3, inteiro);
    ++inteiro;
    printf("++%d = %d\n", inteiro-1, inteiro);
    
    printf("\nDigite um real: ");
    scanf("%f", &real);
    printf("%f + %f = %f\n", real, real, real + real);
    printf("%f - 1 = %f\n",  real, real - 1);
    printf("%f * %f = %f\n", real, real, real * real);
    printf("%f / 2 = %f\n", real, real/2);
    
    printf("\nDigite um caracter: ");
    scanf(" %c", &caracter);
    printf("%c + %c = %c\n", caracter, caracter, caracter + caracter);
    printf("%c - 1 = %c\n",  caracter, caracter - 1);
    printf("%c * %c = %c\n", caracter, caracter, caracter * caracter);
    printf("%c / 2 = %c\n", caracter, caracter/2);
    printf("%c % 3 = %c\n", caracter, caracter % 3);
    
    

}