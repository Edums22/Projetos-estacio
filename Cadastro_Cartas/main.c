#include <stdio.h>

struct Carta {
    char codigo[4];             // Ex: A01, B02
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", carta2.codigo);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados cadastrados
    printf("\n===== CARTA 1 =====\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n===== CARTA 2 =====\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
