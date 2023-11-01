int main(int argc, char const *argv[])
{
    int i;

    printf("--------------------------------------\n");
    printf("O Sorveteiro Mais Importante Da Cidade\n");
    printf("--------------------------------------\n");

    printf("\n");

    printf("Escolha Um Sabor");

    do
    {
        printf("Digite o Numero Do Sabor Desejado\n");
        printf("(1).Frokis");
        printf("(2).Muciri");
        printf("(3).Leite Compensado");
        printf("(4).Chaculati");
        scanf("%d"&i);

    } while ((i<1) || (i>3));

    switch (1)
    {
    case 1:
        printf("Voce Escolheu Frokis");
        break;
    
    case 2:
        printf("Voce Escolheu Muciri");
        break;

    case 3:
         printf("Voce Escolheu Leite Compensado");
         break;

    case 4:
        printf("Voce Escolheu Chaculati");
        break;
   
    }
    


    return 0;
}
