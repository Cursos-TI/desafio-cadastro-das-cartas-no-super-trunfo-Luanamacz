/*Fiz os código conforme pedido, no Terminal saiu correto.Porém está
acontecendo um problema no "PROBLEMAS". Tentei pesquisar o que estava acontecendo
e não consegui solucionar o problema...
Fiz as duas cartas como pedido.

*/ 

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

    printf("Codigo da carta: A01 \n");
    scanf("%d", &Codigo[0]);

    printf("Nome da Cidade: Rio de Janeiro \n");
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

