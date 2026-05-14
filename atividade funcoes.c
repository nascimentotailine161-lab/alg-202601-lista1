#include <stdio.h>
#include <stdbool.h>

// Função para calcular horas, minutos e segundos
void calcularTempo(int totalSegundos, int *h, int *m, int *s) {
    *h = totalSegundos / 3600;

    int resto = totalSegundos % 3600;

    *m = resto / 60;
    *s = resto % 60;
}

// Verifica se é par
bool isPar(int numero) {
    return numero % 2 == 0;
}

// Verifica se é ímpar
bool isImpar(int numero) {
    return numero % 2 != 0;
}

// Calcula média entre dois números
float media(float a, float b) {
    return (a + b) / 2;
}

// Retorna o maior valor
float maior(float a, float b) {
    if (a > b)
        return a;
    else
        return b;
}

// Retorna o menor valor
float menor(float a, float b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {

    // ===== Tempo =====
    int totalSegundos, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    calcularTempo(totalSegundos, &horas, &minutos, &segundos);

    printf("%d segundos = %d h %d min %d s\n\n",
           totalSegundos, horas, minutos, segundos);

    // ===== Par ou Ímpar =====
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (isPar(numero))
        printf("O numero %d e PAR.\n", numero);

    if (isImpar(numero))
        printf("O numero %d e IMPAR.\n\n", numero);

    // ===== Média, maior e menor =====
    float n1, n2;

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("Media = %.2f\n", media(n1, n2));
    printf("Maior = %.2f\n", maior(n1, n2));
    printf("Menor = %.2f\n", menor(n1, n2));

    return 0;
}
