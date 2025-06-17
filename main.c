#include <stdio.h>

// Função que calcula a média das notas
float calcularMedia(float notas[], int quantidade) {
    float soma = 0.0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

// Função que encontra a maior nota
float encontrarMaior(float notas[], int quantidade) {
    float maior = notas[0];
    for (int i = 1; i < quantidade; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int main() {
    float notas[10];
    int quantidade;

    // Interface inicial
    printf(" Estatisticas de Notas: \n");
    printf("Voce pode inserir ate 10 notas.\n");

    // Validação da quantidade de notas
    do {
        printf("Quantas notas deseja inserir (De 1 ate 10?) ");
        scanf("%d", &quantidade);
        if (quantidade < 1 || quantidade > 10) {
            printf("Limite de notas ultrapassado, tente novamente.\n");
        }
    } while (quantidade < 1 || quantidade > 10);

    // Leitura das notas com validação de intervalo (0 a 10)
    for (int i = 0; i < quantidade; i++) {
        do {
            printf("Digite a nota %d (De 0 ate 10): ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0.0 || notas[i] > 10.0) {
                printf("Indique uma nota de 0 ate 10\n");
            }
        } while (notas[i] < 0.0 || notas[i] > 10.0);
    }

    // Cálculos
    float media = calcularMedia(notas, quantidade);
    float maior = encontrarMaior(notas, quantidade);

    // Resultados
    printf("\n Resultados: \n");
    printf("Media das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);

    return 0;
}
