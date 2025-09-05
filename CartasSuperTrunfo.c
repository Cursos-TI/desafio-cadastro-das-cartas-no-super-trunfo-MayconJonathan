//CRIAR UM MENU COM OPÇOES  ADD CARTA 1, ADD CARTA 2, Exibir dados das cartas
#include <stdio.h>
int main() {
    int opcao;
    char Estado_A[20], Cdc_A[5], cidadeA[20];
    char Estado_B[20], Cdc_B[5], cidadeB[20];
    int POP_A, PT_A, POP_B, PT_B;
    float AREA_A, PIB_A, AREA_B, PIB_B;
    float DEN_A, PIBPC_A;
    float DEN_B, PIBPC_B;
menu:
    printf("============MENU============\n");
    printf("Selecione a opcao desejada\n");
    
    printf("1. Adicionar carta 1\n");
    printf("2. Adicionar carta 2\n");
    printf("3. Exibir dados das cartas\n");
    scanf("%d", &opcao);
    printf("\n");

    //FUNÇÕES DE ENTRADA DE DADOS
    switch (opcao){
        case 1: 
            printf("Atencao, digite a seguir os dados referentes a primeira carta (Use _ para espacar os nomes) \n");
            printf("Digite o nome do estado: ");
            scanf("%s", Estado_A);
            printf("Digite o codigo da carta: ");
            scanf("%s", Cdc_A);
            printf("Digite o nome da cidade: ");
            scanf("%s", cidadeA);
            printf("Digite o numero de habitantes da cidade (nao use pontos): ");
            scanf("%d", &POP_A);
            printf("Digite a area da cidade em km² (nao use pontos): ");
            scanf("%f", &AREA_A);
            printf("Digite o PIB da cidade (nao use pontos apenas numeros): ");
            scanf("%f", &PIB_A);
            printf("Digite a quantidade pontos turisticos da cidade: ");
            scanf("%d", &PT_A);
            printf("\n");
            goto menu;
        case 2:
            printf("Atencao, digite a seguir os dados referentes a segunda carta (Use _ para espacar os nomes) \n");
            printf("Digite o nome do estado: ");
            scanf("%s", Estado_B);
            printf("Digite o codigo da carta: ");
            scanf("%s", Cdc_B);
            printf("Digite o nome da cidade: ");
            scanf("%s", cidadeB);
            printf("Digite o numero de habitantes da cidade (nao use pontos): ");
            scanf("%d", &POP_B);
            printf("Digite a area da cidade em km²(nao use pontos): ");
            scanf("%f", &AREA_B);
            printf("Digite o PIB da cidade(nao use pontos apenas numeros): ");
            scanf("%f", &PIB_B);
            printf("Digite a quantidade pontos turisticos da cidade: ");
            scanf("%d", &PT_B);
            printf("\n");
            goto menu;
        //FUNÇÃO DE EXIBIÇÃO DE DADOS COM CALCULO  
        case 3:
            printf("Dados da primeira carta: \n");
            printf("Nome do Estado: %s\n", Estado_A);
            printf("Codigo da carta: %s\n",Cdc_A);
            printf("Nome da cidade: %s\n", cidadeA);
            printf("Numero de habitantes: %d\n", POP_A);
            printf("Area da cidade em Km²: %f\n", AREA_A);
            printf("PIB da cidade: %f\n", PIB_A);
            printf("Pontos Turisticos: %d\n", PT_A);
            DEN_A = POP_A/AREA_A;
            printf("Densidade Populacional: %f\n", DEN_A);
            PIBPC_A = PIB_A/POP_A;
            printf("PIB per Capita: %f\n", PIBPC_A);
            printf("\n");
            
            //Dados Segunda carta
            printf("\n");
            printf("Dados da segunda carta: \n");
            printf("Nome do Estado: %s\n", Estado_B);
            printf("Codigo da carta: %s\n",Cdc_B);
            printf("Nome da cidade: %s\n", cidadeB);
            printf("Numero de habitantes: %d\n", POP_B);
            printf("Area da cidade em Km²: %f\n", AREA_B);
            printf("PIB da cidade: %f\n", PIB_B);
            printf("Pontos Turisticos: %d\n", PT_B);
            DEN_B = POP_B/AREA_B;
            printf("Densidade Populacional: %f\n", DEN_B);
            PIBPC_B = PIB_B/POP_B;
            printf("PIB per Capita: %f\n", PIBPC_B);
            printf("\n");
            goto menu;

            }

}
