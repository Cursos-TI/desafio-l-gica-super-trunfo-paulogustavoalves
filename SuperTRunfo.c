#include <stdio.h>
  #include <string.h>

    int main() {
    // Paulo Gustavo
    // Cadastro das cartas
    char estado1[50], estado2[50],codigo1[20], codigo2[20], nomedacidade1[20], nomedacidade2[20]; 
    int população1, população2, pontosturisticos1, pontosturisticos2;
    float areakm1, areakm2, pib1, pib2,pibpercapita1, pibpercapita2,densidadepopulacional1, densidadepopulacional2,Superpoder1, Superpoder2;
    // população, area, pib, pibpercapita e densidade < invertida o menor vence e pontos turiitico

    printf("Vamos Jogar super trunfo!\n");
    printf("Me fale o estado da sua carta:\n");
    scanf("%s", estado1);

    printf("Agora o codigo\n");
    scanf("%s", codigo1);

    printf("Agora me fale a cidade\n");
    scanf("%s", nomedacidade1);

    printf("Agora a população\n");
    scanf("%d", &população1);

    printf("Agora a Area por km²\n");
    scanf("%f", &areakm1);

    printf("Agora o Pib\n");
    scanf("%f", &pib1);

    printf("Agora o numéro de pontos turisticos\n");
    scanf("%d", &pontosturisticos1);

    printf("Vamos para a segunda carta\n");

    printf("Me fale o estado da sua carta\n");
    scanf("%s", estado2);

    printf("Agora o codigo\n");
    scanf("%s", codigo2);

    printf("Agora me fale a cidade\n");
    scanf("%s", nomedacidade2);

    printf("Agora a população\n");
    scanf("%d", &população2);

    printf("Agora a Area por km²\n");
    scanf("%f", &areakm2);

    printf("Agora o Pib\n");
    scanf("%f", &pib2);

    printf("Agora os pontos turisticos\n");
    scanf("%d", &pontosturisticos2);

    pibpercapita1 = pib1 / população1;
    pibpercapita2 = pib2 / população2;

    densidadepopulacional1 = população1 / areakm1;
    densidadepopulacional2 = população2 / areakm2;

    Superpoder1 = população1 + areakm1 + pib1 + pibpercapita1 + densidadepopulacional1 + pontosturisticos1;
    Superpoder2 = população2 + areakm2 + pib2 + pibpercapita2 + densidadepopulacional2 + pontosturisticos2;
    printf("Comparação Das Cartas\n");
    printf("Carta1 : %s, população:%d \n", estado1, população1);
    printf("Carta2 : %s, população:%d \n", estado2, população2);
    printf("Carta1 : %s, Area Por Km :%f \n", estado1, areakm1);
    printf("Carta2 : %s, Area Por Km :%f \n", estado2, areakm2);
    printf("Carta1 : %s, PIB :%f \n", estado1, pib1);
    printf("Carta2 : %s, PIB :%f \n", estado2, pib2);
    printf("Carta1 : %s, Pontos turisticos :%d \n", estado1, pontosturisticos1);
    printf("Carta2 : %s, Pontos Turisticos :%d \n", estado2, pontosturisticos2);
    printf("Carta1 : %s, PibPerCapita :%f \n", estado1, pibpercapita1);
    printf("Carta2 : %s, PibPerCapita :%f \n", estado2, pibpercapita2);
    printf("Carta1 : %s, Densidade Populacional :%f \n", estado1, densidadepopulacional1);
    printf("Carta2 : %s, Densidade Populacional :%f \n", estado2, densidadepopulacional2);
    printf("Carta1 : %s, Superpoder  :%f \n", estado1, Superpoder1);
    printf("Carta1 : %s, Superpoder :%f \n", estado2, Superpoder2);

    if(população1 > população2){
       printf("Resultado Carta1 (%s) Venceu\n", estado1);
    }else{
       printf("Resultado Carta2 (%s) Venceu\n", estado2);
    }

     if(areakm1 > areakm2){
       printf("Resultado Carta1 (%s) Venceu\n", estado1);
     }else{
       printf("Resultado Carta2 (%s) Venceu\n", estado2);
     }
    
     if(pib1 > pib2){
       printf("Resultado Carta1 (%s) Venceu\n", estado1);
     }else{
       printf("Resultado Carta2 (%s) Venceu\n", estado2);
     }

     if(pontosturisticos1 > pontosturisticos2){
       printf("Resultado Carta1 (%s) Venceu\n", estado1);
     }else{
       printf("Resultado Carta2 (%s) Venceu\n", estado2);
     }

     if(pibpercapita1 > pibpercapita2){
      printf("Resultado Carta1 (%s) Venceu\n", estado1);
     }else{
      printf("Resultado Carta2 (%s) Venceu\n", estado2);
     }

     if(densidadepopulacional1 > densidadepopulacional2){
      printf("Resultado Carta1 (%s) Venceu\n", estado1);
     }else{
      printf("Resultado Carta2 (%s) Venceu\n", estado2);
     }

     if(Superpoder1 > Superpoder2){
      printf("Resultado Carta1 (%s) Venceu\n", estado1);
     }else{
      printf("Resultado Carta2 (%s) Venceu\n", estado2);
     }


    return 0;
}