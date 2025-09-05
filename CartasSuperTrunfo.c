#include <stdio.h>

// Definição da estrutura para armazenar os dados da carta
typedef struct {
    char estado[20];
    char codigo[5];
    char cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

// Função para cadastrar os dados da carta
void cadastrarCarta(Carta *carta, int numero) {
    printf("\n--- Cadastro da Carta %d ---\n", numero);
    printf("Digite o nome do estado: ");
    scanf("%s", carta->estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", carta->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->cidade);
    printf("Digite o numero de habitantes da cidade: ");
    scanf("%lu", &carta->populacao);
    printf("Digite a area da cidade em km²: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &carta->pontosTuristicos);

    // Cálculos automáticos
    carta->densidade = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
    carta->superPoder = carta->populacao + carta->area + carta->pib +
                        carta->pontosTuristicos + carta->pibPerCapita +
                        (1.0f / carta->densidade); // inverso da densidade
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta, int numero) {
    printf("\n--- Dados da Carta %d ---\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("Populacao: %lu\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade);
    printf("PIB per Capita: %.2f\n", carta.pibPerCapita);
    printf("Super Poder: %.2f\n", carta.superPoder);
}

// Função para comparar duas cartas
void compararCartas(Carta c1, Carta c2) {
    printf("\n===== Comparacao de Cartas =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.pontosTuristicos > c2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade < c2.densidade); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pibPerCapita > c2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.superPoder > c2.superPoder);
}

int main() {
    Carta carta1, carta2;
    int opcao;

    while (1) {
        printf("\n============ MENU ============\n");
        printf("1. Adicionar Carta 1\n");
        printf("2. Adicionar Carta 2\n");
        printf("3. Exibir Dados das Cartas\n");
        printf("4. Comparar Cartas\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCarta(&carta1, 1);
                break;
            case 2:
                cadastrarCarta(&carta2, 2);
                break;
            case 3:
                exibirCarta(carta1, 1);
                exibirCarta(carta2, 2);
                break;
            case 4:
                compararCartas(carta1, carta2);
                break;
            case 5:
                printf("Encerrando o programa...\n");
                return 0;
            default:
                printf("Opcao invalida!\n");
        }
    }
}
