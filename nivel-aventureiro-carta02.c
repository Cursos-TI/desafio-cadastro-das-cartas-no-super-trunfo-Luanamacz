#include <stdio.h>

int main() {

    

    int Codigo[50];
    char Cidade[50];
    int Populacao[6748000];
    char Estado [50];
    float Area[120025];
    float Pib[69928];
    int Pontos[30];
    float Densidade [562224];
    float capita [445391];
    




    printf("Carta 02 \n");
    printf("Estado: \n");
    scanf("%s", &Estado);

    printf("Codigo da carta: A02 \n");
    scanf("%d", &Codigo[0]);

    printf("Nome da Cidade: São Paulo \n");
    scanf("%s", &Cidade);

    printf("População: \n");
    scanf("%d", &Populacao);

    printf("Área em km²:");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f" , &Pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &Pontos);

    printf("Densidade populacional: \n");
    scanf("%f",Populacao,Cidade);



    printf("PIB per capita: \n");
    scanf("%f", capita);


    printf("- Estado: %s\n", Estado);
    printf("- Código da Cidade: %d\n", Codigo[0]);
    printf("- Código da carta: A02 \n");
    printf("- População: %d\n", Populacao);
    printf("- Área: %.2f\n", Area);
    printf("- PIB: %.2f\n", Pib);
    printf("- Pontos Turísticos: %.2f hab/km\n", Densidade);
    printf("- PIB per capita: %.2f\n", capita);



    return 0;

}
