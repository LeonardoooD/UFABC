#include <stdio.h>
#include <string.h>

/* ignore isso nessa aula */
char * itoa(unsigned char val)
{
    static char buffer[9] = {0};
    int i = 7;

    memset(buffer, '0', 8);

    while ( val != 0 && i>=0 ) {
        buffer[i] = "01"[val % 2];
        val /= 2;
        --i;
    }

    return buffer;
}

main( )
{
    char byte;
    char treze[9] = "00001101\0";

    printf("Digite um inteiro: ");
    scanf("%d", &byte);
    printf("BinÃ¡rio: \n");
    printf("%s\n", itoa(byte));
    
    printf("\n%s & %s: ", itoa(byte), treze);
    printf("%s\n", itoa(byte & 13));

    printf("%s | %s: ", itoa(byte), treze);
    printf("%s\n", itoa(byte | 13));
    printf("%s ^ %s: ", itoa(byte), treze); 
    printf("%s\n", itoa(byte ^ 13));
 
    printf("%s << 2 = ", itoa(byte));
    printf("%s (%d)\n", itoa(byte << 2), byte << 2);

    printf("%s >> 1 = ", itoa(byte));
    printf("%s (%d)\n", itoa(byte >> 1), byte >> 1);

    printf("~%s = ", itoa(byte));
    printf("%s (%d)\n", itoa(~byte), ~byte);

}