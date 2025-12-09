
/*Fica em loop eterno*/
/*tipo de variáveis  
int - tamnho inteiro definido pelo processador 
char - 1 byte(8bits)
float - 4 bytes (32bits)
double - 8 bytes (64bits)
Exite qualificadores de inteiros 
short int - 2 bytes
long int - 4 bytes (32 bits) ou 8 bytes (64 bits)

Os qualificadores de int e char 
unsigned - apresenta valores >= 0
Exemploum unsigned char apresenta de 0 a 2**8   (lembre se 2**n sendo n o numero de bits e vai até 512 números )
signed apresenta valores negativos (padrão)
Ex: vai  de -128 a 127 ou seja 512 ,(obs não vai de -128 até 128 pois ele passa por zero assim tendo que diminuir um número ])
long double - precisão estendida depende da plataforma 
Vetores de tamanho pré-definidos podem ser criados da seguinte forma 
tipo nome[TAMANHO]
Ex:int v[100];

Podemos dizer também o tamanho das variáveis
atrávez  do sizeof 
printf("%d\n,sizeof(int)")
ou
int x
printf("%d\n,sizeof(x)")


PAra definir uma constante antes de main devos usar a diretiva #define

#define PI 3.14
main(){
    int pipi;

    pipi= 2*PI;

}
Usamos %f para marcar o lugar onde inserimos a variável 
então:
Exemplo:

main(){

printf("Minha idade e: %d anos ",idade);

}

Etambém serve para traduzir oque estou escrevendo
por exemplo se  for: 
%d (int) ele traduz  para  um número inteiro
se for
%f (float)ele traduz para um ponto flutuante
se for
%c (char)ele traduz para o número  da tabela ASCII
%s (char[])para string 
%lf para doble (um decimal preciso) 

e usando %.2f  define quantos número  tem depois da vírgula 

enum serve para enumerar no caso seindicamoso dia da lista ele se iguala olhar no  programa enumeracao.c

OPERDORES

C tem apenas 5 operadores =,-,*,/,%
Para divisão entre inteiros o  valor é truncado isso é tudodepois da vírgula é cortado 

Outros operadores 

++ ou -- incremeta ou decrementa em1o valor númerico

Operadores relacionais 

<,>, ,<=, >=, ++, !=

e 3 lógicos

&&(e) ||(ou) e !  não

Note que em Java e Python
não exite operadores boolenaos
as expressões são avaliadas para 0 ou  em 1 
então  tudo que for  diferente  de zero é verdadeiro 

Como em C  todos os tipo são interpretados como seuqencias debits temososoperadores  

& - realiza a operação E entre dois números (pega o numero e binario e toma cada digito para verse é verdadeiro ou falso por exemplo só se é 1 e 1)
| - OU ()
^ - OU EXCLUSIVO (XOR)
<<- Desloca os bits n casas para esquerda
>>  - Desloca os bits n casa para direita 
~ - complemento do número 

ver os codigosopsAritimeticos,Logicos e binarios 
para colocar uma entradausa scanf("%d",&inteiro) usaseo  & para indicar a  localização para guardar na variavel 

Blocos condicionais 
em C temos dois blocos if-else e switch

switch  define uma escolha a ser feita de acordo com o valor de uma variável 

exemplo com if -else 

if( x>10 ){
    printf("x é muito grande!\n");
}else if ( x<10 ){
    printf("x é muito pequeno!\n");
}else{
    printf("x tem o valor certo!\n");
}
obs :\n serve para colocar em uma nova linha

swicth(variável){
    case valor1:
        Instruções;break;
    case valor2 :
        Intsruções;
    default :
        Instruções;
}
faz um goto p a label do valor determinado 
break  indica para ir nofinal do bloco depois o codigo da função
sem ele ele executa até  o final  do bloco no caso seé valor2 ele realizas intruções dele e do deafult  

Blocos de repetição

while verifica a condição 

do...while : garante  que realiza pelo mnos a execução do bloco  uma vez 
do{
    instruções;
}while(condição); faz uma vez a  ação e enquanto a condição for verdadeira continua a repetindo 
for delimita os limetes de uma ou mais variaveis 

for (var = valor ;condição ;var = var + constante )

printf(string ,  opções );
string + string como conteudo e a formatação 
opções +valores de diversos tipos a serem impressos 

\n pula uma linha 
\t tabulação

%d imprima um inteiro 
%ld "" um long inteiro
%u "" usigned int
%c ""char
%f ""float
%lf "" double
%s "" string

%.xf imprima um float com x casas decimais 

scanf(string, variáveis);

int x;
scanf("ENtre com um inteiro : %d",&x) tem que ter o & pois indica o "espaço onde deve por"
*/

