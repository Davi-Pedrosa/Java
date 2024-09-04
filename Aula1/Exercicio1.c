#include <stdio.h>

// Função para calcular soma, subtração, multiplicação e divisão
void calculos(float num1, float num2, float *soma, float *subtracao, float *multiplicacao, float *divisao) {
    *soma = num1 + num2;
    *subtracao = num1 - num2;
    *multiplicacao = num1 * num2;
    if (num2 != 0) {
        *divisao = num1 / num2;
    } else {
        printf("Erro: Divisão por zero.\n");
        *divisao = 0; // Define divisão como 0 para evitar erros
    }
}

int main() {
    // Declaração de variáveis
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    // Entrada dos números pelo usuário
    printf("Escreva o primeiro numero: ");
    scanf("%f", &num1);

    printf("Escreva o segundo numero: ");
    scanf("%f", &num2);

    // Chamada da função de cálculos
    calculos(num1, num2, &soma, &subtracao, &multiplicacao, &divisao);

    // Impressão dos resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}
