#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidade(Carta c) {
    return (float)c.populacao / c.area;
}

int main() {
    Carta carta1, carta2;

    printf("==== Cadastro de Cartas ====\n\n");

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo: ");
    scanf(" %[^\n]", carta1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo: ");
    scanf(" %[^\n]", carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n==== Cartas Cadastradas ====\n");
    printf("Carta 1 - %s (%s - %s)\n", carta1.cidade, carta1.estado, carta1.codigo);
    printf(" Populacao: %d\n", carta1.populacao);
    printf(" Area: %.2f km2\n", carta1.area);
    printf(" PIB: %.2f bilhoes\n", carta1.pib);
    printf(" Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf(" Densidade Populacional: %.2f hab/km2\n\n", calcularDensidade(carta1));

    printf("Carta 2 - %s (%s - %s)\n", carta2.cidade, carta2.estado, carta2.codigo);
    printf(" Populacao: %d\n", carta2.populacao);
    printf(" Area: %.2f km2\n", carta2.area);
    printf(" PIB: %.2f bilhoes\n", carta2.pib);
    printf(" Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf(" Densidade Populacional: %.2f hab/km2\n\n", calcularDensidade(carta2));

    // ==============================
    // Comparação das cartas
    // ==============================
    // 🔹 Aqui definimos o critério de comparação
    // Altere para: 1=População, 2=Área, 3=PIB, 4=Pontos Turísticos, 5=Densidade
    int criterio = 1; // exemplo: População

    printf("==== Comparacao ====\n");

    if (criterio == 1) {
        printf("Comparando POPULACAO...\n");
        if (carta1.populacao > carta2.populacao)
            printf("Vencedora: %s (Carta 1)\n", carta1.cidade);
        else if (carta2.populacao > carta1.populacao)
            printf("Vencedora: %s (Carta 2)\n", carta2.cidade);
        else
            printf("Empate!\n");

    } else if (criterio == 2) {
        printf("Comparando AREA...\n");
        if (carta1.area > carta2.area)
            printf("Vencedora: %s (Carta 1)\n", carta1.cidade);
        else if (carta2.area > carta1.area)
            printf("Vencedora: %s (Carta 2)\n", carta2.cidade);
        else
            printf("Empate!\n");

    } else if (criterio == 3) {
        printf("Comparando PIB...\n");
        if (carta1.pib > carta2.pib)
            printf("Vencedora: %s (Carta 1)\n", carta1.cidade);
        else if (carta2.pib > carta1.pib)
            printf("Vencedora: %s (Carta 2)\n", carta2.cidade);
        else
            printf("Empate!\n");

    } else if (criterio == 4) {
        printf("Comparando PONTOS TURISTICOS...\n");
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
            printf("Vencedora: %s (Carta 1)\n", carta1.cidade);
        else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
            printf("Vencedora: %s (Carta 2)\n", carta2.cidade);
        else
            printf("Empate!\n");

    } else if (criterio == 5) {
        printf("Comparando DENSIDADE POPULACIONAL...\n");
        float dens1 = calcularDensidade(carta1);
        float dens2 = calcularDensidade(carta2);
        // Menor vence
        if (dens1 < dens2)
            printf("Vencedora: %s (Carta 1)\n", carta1.cidade);
        else if (dens2 < dens1)
            printf("Vencedora: %s (Carta 2)\n", carta2.cidade);
        else
            printf("Empate!\n");
    }

    return 0;
}
