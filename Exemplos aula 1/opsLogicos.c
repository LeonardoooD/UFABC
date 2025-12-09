#include <stdio.h>

main( )
{
    int inteiro;

    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);
    printf("%d == 10? %d\n", inteiro, inteiro == 10);
    printf("%d > 10? %d\n", inteiro, inteiro > 10);
    printf("%d < 10? %d\n", inteiro, inteiro < 10);
    printf("%d != 10? %d\n", inteiro, inteiro != 10);

    printf("%d > 10 && %d != 12? %d\n", inteiro, inteiro, inteiro>10 && inteiro != 12);
    printf("!%d = %d\n", inteiro, !inteiro);

    printf("\nPodemos comparar caracteres tambÃ©m!\n");
    printf("'a' < 'z'? %d\n", 'a' < 'z');
    printf("Os caracteres sÃ£o nÃºmeros equivalentes da tabela ASCII\n");
    printf("'A' < 'a'? %d\n", 'A' < 'a');

}