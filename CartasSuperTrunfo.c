#include <stdio.h>

int main() {
    // Carta 1
    char cidade1[] = "São Paulo";
    int populacao1 = 46000000;
    float area1 = 248222.0;
    float pib1 = 2.5;
    int pontos1 = 20;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000000) / populacao1;

    // Carta 2
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 17000000;
    float area2 = 43796.0;
    float pib2 = 1.3;
    int pontos2 = 25;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000000) / populacao2;

    printf("População: %s venceu (%d)\n", 
        (populacao1 > populacao2) ? "Carta 1" : (populacao2 > populacao1) ? "Carta 2" : "Empate", 
        (populacao1 != populacao2));

    printf("Área: %s venceu (%d)\n", 
        (area1 > area2) ? "Carta 1" : (area2 > area1) ? "Carta 2" : "Empate", 
        (area1 != area2));

    printf("PIB: %s venceu (%d)\n", 
        (pib1 > pib2) ? "Carta 1" : (pib2 > pib1) ? "Carta 2" : "Empate", 
        (pib1 != pib2));

    printf("Pontos Turísticos: %s venceu (%d)\n", 
        (pontos1 > pontos2) ? "Carta 1" : (pontos2 > pontos1) ? "Carta 2" : "Empate", 
        (pontos1 != pontos2));

    printf("Densidade Populacional: %s venceu (%d)\n", 
        (densidade1 < densidade2) ? "Carta 1" : (densidade2 < densidade1) ? "Carta 2" : "Empate", 
        (densidade1 != densidade2));

    printf("PIB per Capita: %s venceu (%d)\n", 
        (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : (pibPerCapita2 > pibPerCapita1) ? "Carta 2" : "Empate", 
        (pibPerCapita1 != pibPerCapita2));

    printf("Super Poder: %s venceu (%d)\n", 
        ((populacao1 > populacao2) + (area1 > area2) + (pib1 > pib2) + (pontos1 > pontos2) + (densidade1 < densidade2) + (pibPerCapita1 > pibPerCapita2) > 
         (populacao2 > populacao1) + (area2 > area1) + (pib2 > pib1) + (pontos2 > pontos1) + (densidade2 < densidade1) + (pibPerCapita2 > pibPerCapita1)) 
        ? "Carta 1" : 
        ((populacao2 > populacao1) + (area2 > area1) + (pib2 > pib1) + (pontos2 > pontos1) + (densidade2 < densidade1) + (pibPerCapita2 > pibPerCapita1) > 
         (populacao1 > populacao2) + (area1 > area2) + (pib1 > pib2) + (pontos1 > pontos2) + (densidade1 < densidade2) + (pibPerCapita1 > pibPerCapita2)) 
        ? "Carta 2" : "Empate",
        ((populacao1 != populacao2) + (area1 != area2) + (pib1 != pib2) + (pontos1 != pontos2) + (densidade1 != densidade2) + (pibPerCapita1 != pibPerCapita2))
    );

    return 0;
}