#include <stdio.h>

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Código: ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Código: ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
