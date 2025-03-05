#include <stdio.h>
#include <string.h>

void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {

    // Desafio Super Trunfo
    // Nível: Mestre

    //Variáveis Carta 01
    char Estado1[30];
    char Codigo1[3];
    char Cidade1[50];
    unsigned long int Populacao1;
    float AreaKm21;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float PibPercapta1;
    float SuperPoder1;

    //Variáveis Carta 02
    char Estado2[30];
    char Codigo2[3];
    char Cidade2[50];
    unsigned long int Populacao2;
    float AreaKm22;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float PibPercapta2;
    float SuperPoder2;

    //Entrada de dados

    // Carta 01 Estado A
    printf("Digite o nome do estado1: \n");
    fgets(Estado1, sizeof(Estado1), stdin);
    remove_newline(Estado1);

    printf("Digite o codigo da carta1: \n");
    scanf("%s", Codigo1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade1: \n");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    remove_newline(Cidade1);

    printf("Digite a populacao1: \n");
    scanf("%lu", &Populacao1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a Areakm21: \n");
    scanf("%f", &AreaKm21);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o PIB em R$1: \n");
    scanf("%f", &PIB1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite os pontos turisticos1: \n",'\n');
    scanf("%d", &PontosTuristicos1);
    getchar(); // Limpa o buffer de entrada

    
    //Carta 02 Estado B
    printf("Digite o nome do estado2: \n");
    fgets(Estado2, sizeof(Estado2), stdin);
    remove_newline(Estado2);

    printf("Digite o codigo da carta2: \n");
    scanf("%s", Codigo2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade2: \n");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    remove_newline(Cidade2);

    printf("Digite a populacao2: \n");
    scanf("%lu", &Populacao2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a Areakm22: \n");
    scanf("%f", &AreaKm22);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o PIB em R$2: \n");
    scanf("%f", &PIB2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite os pontos turisticos2: \n", '\n');
    scanf("%d", &PontosTuristicos2);
    getchar(); // Limpa o buffer de entrada

    



    //Cálculos carta 01
    DensidadePopulacional1 = Populacao1 / AreaKm21;
    PibPercapta1 = PIB1 / Populacao1;
    SuperPoder1 = (Populacao1 + AreaKm21 + PIB1 + PontosTuristicos1 + PibPercapta1 + 1 / DensidadePopulacional1);

    //Cálculos carta 02
    DensidadePopulacional2 = Populacao2 / AreaKm22;
    PibPercapta2 = PIB2 / Populacao2;
    SuperPoder2 = (Populacao2 + AreaKm22 + PIB2 + PontosTuristicos2 + PibPercapta2 + 1 / DensidadePopulacional2);


    //Saída de Dados Carta 01:
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area em Km2: %.2f\n", AreaKm21);
    printf("PIB em R$: %.2f\n", PIB1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB Percapta: %.2f\n", PibPercapta1);
    printf("Super Poder: %.2f\n", SuperPoder1);


    //Saída de Dados Carta 02:
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area em Km2: %.2f\n", AreaKm22);
    printf("PIB em R$: %.2f\n", PIB2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB Percapta: %.2f\n", PibPercapta2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Função para exibir o resultado da comparação  void exibeResultado(const char *tipo, int resultado) {



    // Comparar as cartas

    printf("Populacao1 > Populacao2 %f\n", Populacao1 > Populacao2); //Resultado das comparações Populacao1 > Populacao2
    printf("Areakm21 > Areakm22 %f\n", AreaKm21 > AreaKm22); //Resultados das Comparações AreaKm21 > AreaKm22 ?
    printf("PIB1 > PIB2 %f\n", PIB1 > PIB2); //Resultados das Comparações PIB1 > PIB2 ?
    printf("PontosTuristicos1 > PontosTuristicos2 %d\n",
           PontosTuristicos1 > PontosTuristicos2); //Resultados das Comparações PontosTuristicos1 > PontosTuristicos2 ?
    printf("DensidadePopulaciona1 > DensidadePopulacional2 %f\n", DensidadePopulacional1 >
                                                                  DensidadePopulacional2); //Resultados das Comparações DensidadePopulacional1 < DensidadePopulacional2 ?
    printf("PIBPercapta1 > PIBPercapta2 %f\n",
           PibPercapta1 > PibPercapta2); //Resultados das Comparações PibPercapta1 > PibPercapta2 ?
    printf("SuperPoder1 > SuperPoder2 %f\n",
           SuperPoder1 > SuperPoder2); //Resultados das Comparações SuperPoder1 > SuperPoder2 ?

    //se carta 01 = 1 resultado é carta 01 venceu
    // se carta 01 = 0 resultado é carta 02 venceu

    printf("Populacao = (carta 2 vence), (carta 1 vence)\n");
    printf("Areakm2 = (Carta' 2 vence),(carta 1 vence)\n");
    printf("PIB = (carta 2 vence), (carta 1 vence)\n");
    printf("PontosTuristicos = (carta 2 vence), (carta 1 vence)\n");
    printf("DensidadePopulacional = (carta 2 vence), (carta 1 vence)\n");
    printf("PIBPercapta = (carta 2 vence), (carta 1 vence)\n");
    printf("SuperPoder = (carta 2 vence),(carta 1 vence)\n");


    return 0;

}