#include <stdio.h>

int main() {
    int numero, digito1, digito2, digito3, digito4, digito5;
    
    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &numero);
    
    digito1 = numero % 10;
    numero = numero / 10;
    
    digito2 = numero % 10;
    numero = numero / 10;
    
    digito3 = numero % 10;
    numero = numero / 10;
    
    digito4 = numero % 10;
    numero = numero / 10;
    
    digito5 = numero % 10;
    
    printf("O primeiro digito do numero e: %d\n", digito5);
    printf("O segundo digito do numero e: %d\n", digito4);
    printf("O terceiro digito do numero e: %d\n", digito3);
    printf("O quarto digito do numero e: %d\n", digito2);
    printf("O quinto digito do numero e: %d\n", digito1);
    
    return 0;
}
