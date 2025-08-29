#include <stdio.h>
#include <stdlib.h>

int main() {

    char estado1[30], estado2 [30], codigo1[10], codigo2[10], cidade1[30], cidade2[30];
    int população1, população2, turismo1, turismo2;
    float área1, área2, pib1, pib2, densidade1, densidade2, pibcapita1, pibcapita2, superpoder1, superpoder2;

    printf("Vamos registrar a primeira carta. \n");
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &população1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &área1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos túristicos: \n");
    scanf("%d", &turismo1);

    densidade1 = população1 / área1;
    pibcapita1 = pib1 / população1;
    superpoder1 =  pib1 + população1 + área1 + turismo1 + densidade1 + pibcapita1;

    printf("Estado: %s \n", estado1 );
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", população1);
    printf("Área: %f km² \n", área1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Pontos Túristicos: %d \n", turismo1);
    printf("Densidade populacional: %f hab/km² \n", densidade1);
    printf("PIB per capita: %f reais \n", pibcapita1);
    printf("Super Poder: %f \n", superpoder1);

    printf("Registro completo \n");
    printf("Vamos registrar a segunda carta. \n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população \n");
    scanf("%d", &população2);

    printf("Digite a área da cidade \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos túristicos: \n)");
    scanf("%d", &turismo2);

    densidade2 = população2 / área2;
    pibcapita2 = pib2 / população2;
    superpoder2 = pib2 + população2 + área2 + turismo2 + densidade2 + pibcapita2;

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", população2);
    printf("Área: %f km² \n", área2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Pontos Túristicos: %d \n", turismo2);
    printf("Densidade populacional: %f hab/km² \n", densidade2);
    printf("PIB per capita: %f reais \n", pibcapita2);
    printf("Super Poder: %f \n", superpoder2);

    printf("Registro completo \n");

    int escolhaJogador;

    printf("Escolha um atributo para comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Turismo \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB per capita \n");
    printf("7. Super Poder \n");
    scanf("%d", &escolhaJogador);

    switch(escolhaJogador)
    {
    case 1: if(população1 > população2)
         printf("A carta 1 venceu no quesito: População \n");
     else if (população2 > população1)
 {
        printf("A carta 2 venceu no quesito: População \n");
 } else
        printf("Houve um empate \n");
    break;
    case 2: if(área1 > área2)
         printf("A carta 1 venceu no quesito: Área \n");
     else if (área2 > área1)
{
        printf("A carta 2 venceu no quesito: Área \n");
} else
        printf("Houve um empate \n");
    break;
    case 3: if(pib1 > pib2)
         printf("A carta 1 venceu no quesito: PIB \n");
    else if (pib2 > pib1)
{
         printf("A carta 2 venceu no quesito: PIB \n");
} else
        printf("Houve um empate \n");
        break;
    case 4: if(turismo1 > turismo2)
        printf("A carta 1 venceu no quesito: Turismo \n");
    else if(turismo2 > turismo1)
{
        printf("A carta 2 venceu no quesito: Turismo \n");
} else
        printf("Houve um empate \n");
        break;
    case 5: if(densidade2 > densidade1)  
        printf("A carta 1 venceu no quesito: Densidade Populacional \n");
    else if(densidade1 > densidade2)
{
        printf("A carta 2 venceu no quesito: Densidade Populacional \n");
} else
        printf("Houve um empate \n");
    break;
    case 6: if(pibcapita1 > pibcapita2)
        printf("A carta 1 venceu no quesito: PIB per capita \n");
    else if(pibcapita2 > pibcapita1)
{
        printf("A carta 2 venceu no quesito: PIB per capita \n");
} else
        printf("Houve um empate \n");
    break;
     case 7: if(superpoder1 > superpoder2)
        printf("A carta 1 venceu no quesito: Super Poder \n");
    else if(superpoder2 > superpoder1)
{
        printf("A carta 2 venceu no quesito: Super Poder \n");
} else
        printf("Houve um empate \n");
break;
}
   

    return 0;
}