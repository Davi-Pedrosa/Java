#include <stdio.h>
#include <string.h>  // Para usar a função strcpy e strcpy

// Trocando tanto números quantos letras
void trocaValor() {
    char valorA[91], valorB[91], valorTemp[91];

    printf("Entre com o primeiro valor: ");
    scanf("%90s", valorA);  // Limite o número de caracteres lidos para evitar overflow

    printf("Entre com o segundo valor: ");
    scanf("%90s", valorB);  // Limite o número de caracteres lidos para evitar overflow

    // Imprimir valores antes da troca
    printf("Antes da troca:\nValor A: %s\nValor B: %s\n", valorA, valorB);

    // Trocar os valores
    strcpy(valorTemp, valorA); 
    strcpy(valorA, valorB);    
    strcpy(valorB, valorTemp); 

    // Imprimir valores após a troca
    printf("Valores trocados:\nValor A: %s\nValor B: %s\n", valorA, valorB);
}

int main() {
    trocaValor();
    return 0;
}
