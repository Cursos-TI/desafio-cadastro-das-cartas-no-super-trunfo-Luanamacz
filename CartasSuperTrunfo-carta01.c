

#include <stdio.h>

int main(){

    int Codigo[50];
    char Cidade[50];
    int Populacao[2000];
    char Estado [50];
    float Area[10000];
    float Pib[40000];
    int Pontos[50];

    printf("Estado: \n");
    scanf("%s", &Estado);

    printf("Codigo da carta: A02 \n");
    scanf("%d", &Codigo[0]);

    printf("Nome da Cidade:São Paulo \n");
    scanf("%s", &Cidade);

    printf("População: \n");
    scanf("%d", &Populacao);

    printf("Área em km²");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f" , &Pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &Pontos);

    printf("- Estado digitado: %s\n -Codigo da cidade:%s\n- Codigo da carta: %d \n", Estado, Cidade, Codigo[0]);
    printf("- Populacao digitando: %d\n- Area: %.2f\n- PIB: %.2f\n- Pontos Turisticos: %d\n", Populacao, Area, Pib, Pontos);



    return 0;

}
