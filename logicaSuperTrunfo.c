#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


char nomedopais[20], codigo;
int populacao, opcao, comparacao, comparacao1, comparacao2, resultado, resultado1;
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


    // Menu do game

     printf("*** Jogo Super Trunfo*** \n");
     printf("Selecione uma opcao abaixo: \n");
     printf(" 0 - Iniciar Jogo: \n");
     printf(" 8 - Ver regras: \n");
     printf(" 9 - Sair: \n");
     scanf("%d", &opcao);

    switch(opcao)
    {
    case 0:
        printf("**** Menu de comparacao.**** \n");
        printf("Ecolha suas opcoes: \n");
        printf("1 - Pontos turisticos. \n");
        printf("2 - PIB. \n");
        printf("3 - Populaçao. \n");
        printf("4 - Area. \n");
        printf("5 - PIB per Capita. \n");
        printf("6 - Densidade Populacional. \n");


        printf("Digite a Primeira Opçao.");
        scanf("%d", &comparacao1);

        printf("Digite a Segunda Opçao.");
        scanf("%d", &comparacao2);


    switch(comparacao1)
    {
    case 1:
        printf("No PRIMEIRO caso, voce escolheu: Pontos Turisticos. \n");

        resultado = turisticos > turisticosA ? 1 : 0;

        if (resultado == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", turisticosA); //CARTA DO COMPUTADOR
        break;

    case 2:
        printf("No PRIMEIRO caso, voce escolheu: PIB. \n");

          resultado = pib > pibA ? 1 : 0;

        if (resultado == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", pibA); //CARTA DO COMPUTADOR
        break;

    case 3:
        printf("No PRIMEIRO caso, voce escolheu: Populaçao. \n");

          resultado = populacao > populacaoA ? 1 : 0;

        if (resultado == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", populacaoA); //CARTA DO COMPUTADOR
        break;

    case 4:
        printf("No PRIMEIRO caso, voce escolheu: Area. \n");

          resultado = area > areaA ? 1 : 0;

        if (resultado == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", areaA); //CARTA DO COMPUTADOR
        break;

    case 5:
        printf("No PRIMEIRO caso, voce escolheu: PIB Per Capita. \n");

          resultado = pibpc > pibpca ? 1 : 0;

        if (resultado == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior.\n");
        printf("Carta Adversario: %f \n", pibpc); //CARTA DO COMPUTADOR
        break;

    case 6:
        printf("No PRIMEIRO caso, voce escolheu: Densidade Populacional. \n");

          resultado = densidadepopulacional < densidadePA ? 1 : 0;

        if (resultado == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence o menor. \n");
        printf("Carta Adversario: %f \n", densidadePA); //CARTA DO COMPUTADOR
        break;
    }


    //Realizar Segunda comparaçao.


        switch(comparacao2)
    {
    case 1:
        printf("No SEGUNDO caso, voce escolheu: Pontos Turisticos. \n");

        resultado1 = turisticos > turisticosA ? 1 : 0;

        if (resultado1 == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n"); //
        printf("Carta Adversario: %f \n", turisticosA); //CARTA DO COMPUTADOR
        break;

    case 2:
        printf("No SEGUNDO caso, voce escolheu: PIB. \n");

          resultado1 = pib > pibA ? 1 : 0;

        if (resultado1 == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", pibA); //CARTA DO COMPUTADOR
        break;

    case 3:
        printf("No SEGUNDO caso, voce escolheu: Populaçao. \n");

          resultado1 = populacao > populacaoA ? 1 : 0;

        if (resultado1 == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", populacaoA); //CARTA DO COMPUTADOR
        break;

    case 4:
        printf("No SEGUNDO caso, voce escolheu: Area. \n");

          resultado1 = area > areaA ? 1 : 0;

        if (resultado1 == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", areaA); //CARTA DO COMPUTADOR
        break;

    case 5:
        printf("No SEGUNDO caso, voce escolheu: PIB Per Capita. \n");

          resultado1 = pibpc > pibpca ? 1 : 0;

        if (resultado1 == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence a maior. \n");
        printf("Carta Adversario: %f \n", pibpca); //CARTA DO COMPUTADOR
        break;

    case 6:
        printf("No SEGUNDO caso, voce escolheu: Densidade Populacional. \n");

          resultado1 = densidadepopulacional < densidadePA ? 1 : 0;

        if (resultado1 == 1){
            printf("Parabens, voce venceu! \n");
        }else{
            printf("Infelizmente, voce perdeu. \n");
        }

        printf("#Vence o menor. \n)");
        printf("Carta Adversario: %f \n", densidadePA); //CARTA DO COMPUTADOR
        break;

    default:
        printf("Opçao Invalida. \n");
        break;

    }
        // Regras e sair do JOGO
    case 8:
        printf("Regras: O usuario podera escolher diferentes atributos para comparacao atraves de um menu. \n");
        break;
    case 9:
        printf("Ate a proxima...! \n");
        break;
    default:
        printf("Opçao Invalida. \n");
        break;
    }


        printf("****RESULTADO FINAL*****\n");

        if ((resultado == 0) && (resultado1 == 0)){
            printf("##O COMPUTADOR VENCEU.## \n");
        }else if ((resultado == 1) && (resultado1 == 1)){
            printf("##VOCE VENCEU!!.## \n");
        }else{
            printf("##EMPATE.## \n");
        }



return 0;
}
