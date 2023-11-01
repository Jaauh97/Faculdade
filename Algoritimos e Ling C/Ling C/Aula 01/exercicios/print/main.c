#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

    char nome[30];
    char ende[30];
    int idade;
    
    
   printf("Nome:\n");
    scanf("%s", &nome);
    
    printf("Endereco:\n");
    scanf("%s", &ende);

    printf("Idade:\n");
    scanf("%d", &idade);

// Toda vez que for mostrar uma variavel tem que se colocar o % 

    printf("\n");
    printf("\n Nome: %s", nome);
    printf("\n Endereco: %s", ende);
    printf("\n Idade %d", idade);

    
    
    return 0;
}
	
	
	
