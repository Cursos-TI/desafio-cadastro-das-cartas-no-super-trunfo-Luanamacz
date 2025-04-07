#include <stdio.h>

int exibirResultado(int atributo1_SãoPaulo, int atributo2_SãoPaulo, int atributo1_RiodeJaneiro, int atributo2_RiodeJaneiro, int soma_SãoPaulo, int soma_RiodeJaneiro, const char *atributo1, const char *atributo2) {
    printf("\nComparando cartas: São Paulo vs Rio de Janeiro\n");
    printf("Atributo 1: %s\n", atributo1);
    printf("Atributo 2: %s\n", atributo2);
    printf("São Paulo - %s: %d, %s: %d\n", atributo1, atributo1_SãoPaulo, atributo2, atributo2_SãoPaulo);
    printf("Rio de Janeiro - %s: %d, %s: %d\n", atributo1, atributo1_RiodeJaneiro, atributo2, atributo2_RiodeJaneiro);
    printf("Soma dos atributos - São Paulo: %d, Rio de Janeiro: %d\n", soma_SãoPaulo, soma_RiodeJaneiro);

    return (soma_SãoPaulo > soma_RiodeJaneiro) ? printf("A carta do São Paulo venceu a rodada!\n") :
           (soma_RiodeJaneiro > soma_SãoPaulo) ? printf("A carta da Rio de Janeiro venceu a rodada!\n") :
           printf("Empate!\n");
}

int main() {
    int atributo1_SãoPaulo, atributo2_SãoPaulo, atributo1_RiodeJaneiro, atributo2_RiodeJaneiro;
    int soma_SãoPaulo, soma_RiodeJaneiro;
    int escolha1, escolha2;

    int densidadePopulacional_SãoPaulo = 8102.47, densidadePopulacional_RiodeJaneiro = 5622.34;
    int pibPerCapita_SãoPaulo = 56724.32, pibPerCapita_RiodeJaneiro = 44532.91;
    int populacao_SãoPaulo = 123250000, populacao_RiodeJaneiro = 6748000;

    printf("Escolha dois atributos para comparar:\n");
    printf("1. Densidade Populacional\n");
    printf("2. PIB per Capita\n");
    printf("3. População\n");

    printf("Escolha o primeiro atributo (1-3): ");
    scanf("%d", &escolha1);
    if (escolha1 < 1 || escolha1 > 3) {
        printf("Escolha inválida! Atribuindo atributo padrão: Densidade Populacional.\n");
        escolha1 = 1; 
    }

    printf("Escolha o segundo atributo (1-3), diferente do primeiro: ");
    scanf("%d", &escolha2);
    if (escolha2 < 1 || escolha2 > 3 || escolha2 == escolha1) {
        printf("Escolha inválida ou igual à primeira escolha! Atribuindo atributo padrão: PIB per Capita.\n");
        escolha2 = (escolha1 == 2) ? 3 : 2; 
    }

    switch(escolha1) {
        case 1:
            atributo1_SãoPaulo = densidadePopulacional_SãoPaulo;
            atributo1_RiodeJaneiro = densidadePopulacional_RiodeJaneiro;
            break;
        case 2:
            atributo1_SãoPaulo = pibPerCapita_SãoPaulo;
            atributo1_RiodeJaneiro = pibPerCapita_RiodeJaneiro;
            break;
        case 3:
            atributo1_SãoPaulo = populacao_SãoPaulo;
            atributo1_RiodeJaneiro = populacao_RiodeJaneiro;
            break;
    }

    switch(escolha2) {
        case 1:
            atributo2_SãoPaulo = densidadePopulacional_SãoPaulo;
            atributo2_RiodeJaneiro = densidadePopulacional_RiodeJaneiro;
            break;
        case 2:
            atributo2_SãoPaulo = pibPerCapita_SãoPaulo;
            atributo2_RiodeJaneiro = pibPerCapita_RiodeJaneiro;
            break;
        case 3:
            atributo2_SãoPaulo = populacao_SãoPaulo;
            atributo2_RiodeJaneiro = populacao_RiodeJaneiro;
            break;
    }

    int vitoria1 = (escolha1 == 1) ? (atributo1_SãoPaulo < atributo1_RiodeJaneiro) : (atributo1_SãoPaulo > atributo1_RiodeJaneiro);
    int vitoria2 = (escolha2 == 1) ? (atributo2_SãoPaulo < atributo2_RiodeJaneiro) : (atributo2_SãoPaulo > atributo2_RiodeJaneiro);

    soma_SãoPaulo = atributo1_SãoPaulo + atributo2_SãoPaulo;
    soma_RiodeJaneiro = atributo1_RiodeJaneiro + atributo2_RiodeJaneiro;

    printf("\nResultado da comparação:\n");

    exibirResultado(atributo1_SãoPaulo, atributo2_SãoPaulo, atributo1_RiodeJaneiro, atributo2_RiodeJaneiro, soma_SãoPaulo, soma_RiodeJaneiro, "Atributo 1", "Atributo 2");

    return 0;
}
