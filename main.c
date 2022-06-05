#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main ()
{

    int choice;

    printf("bem-vindo aos servicos do operadores matematicas \n");
    printf("escolhe uma opcao : \n1 : Multiplicar dois numeros , \n2 : Calcular a raiz quadrada e seu dobro de um numero : ");
    scanf ("%d" , &choice);

    if (choice == 1)
    {
        int num1 , num2 , result;
        printf("Informe seu primeiro numero : ");
        scanf("%d" , &num1);
        printf("Informe seu segundo numero : ");
        scanf ("%d" , &num2);
        printf("O resultado e : %d " , result = num1*num2);

    }
    else if (choice==2)
    {
            int raiz;
            printf("Informe um numero por favor : ");
            scanf("%d" , &raiz);
            printf("A raiz quadrada de %d e %f " , raiz , sqrt(raiz));
            float quadrado = (sqrt(raiz)*sqrt(raiz));
            printf("Quadrado da raiz =%f",quadrado);


    }
    else {
        printf("Esta opcao nao esta disponivel, escolha 1 ou 2");
    }


    return 0;
}










