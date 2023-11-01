#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;

    printf("--------------------------------------\n");
    printf("O Sorveteiro Mais Importante Da Cidade\n");
    printf("--------------------------------------\n");

    printf("\n");

    printf("Escolha Um Sabor\n");

    do
    {
        printf("Digite o Numero Do Sabor Desejado\n");
        printf("(1).Napoleao\n");
        printf("(2).Frokis\n");
        printf("(3).Leite Compensado\n");
        printf("(4).Chaculati\n");
        scanf("%d",&i); 

    } while ((i<1) || (i>4));

    switch (i)
    {
    case 1:
        printf("Voce Escolheu Napoleao");
        break;
    
    case 2:
        printf("Voce Escolheu Frokis");
        break;

    case 3:
         printf("Voce Escolheu Leite Compensado");
         break;

    case 4:
        printf("Voce Escolheu Chaculatii");
        break;
   
    }
	
	
	
	
	
	
	
	
	
	return 0;
}