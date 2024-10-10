#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


char nomedopais[20], codigo;
int populacao, opcao, comparacao;
float area, pib;
int turisticos ;
float densidadepopulacional, pibpc;
float populacaoA = 14.14 , turisticosA = 20, pibA = 352.618 , areaA = 567.295, densidadePA = 25.03, pibpca = 20.449;



    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Digite o Nome do Pais: \n");
    scanf("%s", &nomedopais);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Informe os pontos turisticos: \n");
    scanf("%d", &turisticos);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a populacao: \n");
    scanf("%f", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    densidadepopulacional = populacao / area;
    pibpc = pib / populacao;

    //exibiçao de dados inseridos

   // printf("##Suas Cartas## \n");
    //printf("Pais: %s\n", nomedopais);
   // printf("Código: %s\n", codigo);
   // printf("Pontos Turísticos: %d\n", turisticos);
    //printf("PIB: %f", pib);
   // printf("Populção: %f\n", populacao);
   // printf("Area: %f\n", area);
  //  printf("Densidade Populacional: %f\n", densidadepopulacional);
   // printf("Pib per Capita: %f\n", pibpc);

    // Menu do game

     printf("*** Jogo Super Trunfo*** \n");
     printf("Selecione uma opcao abaixo: \n");
     printf(" 1 - Iniciar Jogo: \n");
     printf(" 2 - Ver regras: \n");
     printf(" 3 - Sair: \n");
     scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
        printf("**** Menu de comparacao.**** \n");
        printf("Ecolha sua opcao: \n");
        printf("1 - Pontos turisticos. \n");
        printf("2 - PIB. \n");
        printf("3 - Populaçao. \n");
        printf("4 - Area. \n");
        printf("5 - PIB per Capita. \n");
        printf("6 - Densidade Populacional. \n");
        scanf("%d", &comparacao);

    switch(comparacao)
    {
    case 1:
        printf("Voce escolheu Pontos Turisticos. \n");
        if (turisticos > turisticosA){
        printf("Parabens, sua carta venceu! \n");
    }else{
       printf("Infelizmente sua carta perdeu... \n");
    }
        break;

    case 2:
        printf("Voce escolheu o PIB. \n");
        if (pib > pibA){
        printf("Parabens, sua carta venceu! \n");
    }else{
       printf("Infelizmente sua carta perdeu... \n");
    }
        break;

    case 3:
        printf("Voce escolheu a Populaçao. \n");
        if (populacao > populacaoA){
        printf("Parabens, sua carta venceu! \n");
    }else{
       printf("Infelizmente sua carta perdeu... \n");
    }
        break;

    case 4:
        printf("Voce escolheu a Area. \n");
        if (area > areaA){
        printf("Parabens, sua carta venceu! \n");
    }else{
       printf("Infelizmente sua carta perdeu... \n");
    }
        break;

    case 5:
        printf("Voce escolheu o PIB per Capia. \n");
        if (pibpc > pibpca){
        printf("Parabens, sua carta venceu! \n");
    }else{
       printf("Infelizmente sua carta perdeu... \n");
    }
        break;

    case 6:
        printf("Voce escolheu a Densidade Populacional. \n");
        if (densidadepopulacional < densidadePA){
        printf("Parabens, sua carta venceu! \n");
    }else{
       printf("Infelizmente sua carta perdeu... \n");
    }
        break;
    }

    case 2:
        printf("Regras: O usuário poderá escolher diferentes atributos para comparação através de um menu.");
        break;
    case 3:
        printf("Ate a proxima!");
        break;
    default:
        printf("Opçao invalida. \n");
    }


return 0;
}
