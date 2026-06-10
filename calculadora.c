#include <stdio.h>
#include "function_multiplicar.c"

int main(){
    int input = 0;
    int num1 = 0;
    int num2 = 0;

    printf("Calculadora\n\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");

    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n\n");
    
    printf("--> ");
    scanf("%d", &input);
    
    switch(input){
        case 1:
            printf("\n\nDigite o primeiro numero: ");
            scanf("%d", &num1);

            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            printf("O resultado e: %d", num1+num2);
            break;

        case 2:
            printf("\n\nDigite o primeiro numero: ");
            scanf("%d", &num1);

            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            printf("O resultado e: %d", num1-num2);
            break;

        case 3:
            printf("\n\nDigite o primeiro numero: ");
            scanf("%d", &num1);
            
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            
            printf("O resultado e: %d", dividir(num1, num2)); 
            break;

        case 4:
            printf("\n\nDigite o primeiro numero: ");
            scanf("%d", &num1);
            
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            
            printf("O resultado e: %d", multiplicar(num1, num2));
            break;
        
        default:
            
        printf("opcao indisponivel");
            break;
    }

    printf("\n\nFeito por Miguel de Mello");
    return 0;
