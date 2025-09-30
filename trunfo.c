    #include <stdio.h>

    int main (){
        //escolha dos 2 atributos pra ver quem soma mais pontos
    int pontos1 = 0, pontos2 = 0;
    
    int atributo1,atributo2;
    //se quer comparar 1 atributo ou 2 atributos
    int comparacao;
    //escolha para qual atributo você vai querer comparar
    int escolha;
    //primeira carta
    char estado[20];
    char codigo_da_carta[4];
    char nome_da_cidade[50];
    unsigned long int populacao;
    float areakm2; //A área da cidade em quilômetros quadrados
    float PIB;
    int pontos;//A quantidade de pontos turísticos na cidade
    float Densidade_Populacional;
    float PIB_per_Capita;
    float Super_poder;

    //segunda carta
    char estado_2[20];
    char codigo_da_carta_2[4];
    char nome_da_cidade_2[50];
    unsigned long int populacao_2;
    float areakm2_2;//A quantidade de pontos turísticos na cidade
    float PIB_2;
    int pontos_2;//A quantidade de pontos turísticos na cidade
    float Densidade_Populacional_2;
    float PIB_per_Capita_2;
    float Super_poder_2;

    //primeira carta
    printf("insira os dados da carta 1-");

    printf("digite o Estado escolhido:\n");
    scanf("%s",estado);

    printf("digite o código da carta ex:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",codigo_da_carta);

    printf("digite o nome da cidade:\n");
    scanf("%s",nome_da_cidade);

    printf("digite a população da cidade:\n");
    scanf("%lu",&populacao);

    printf("digite a area total em km2:\n");
    scanf("%f",&areakm2);

    printf("digite o PIB da cidade:\n");
    scanf("%f",&PIB);

    printf("digite quantos pontos turísticos tem na cidade:\n");
    scanf("%d",&pontos);
    printf("\n\n\n\n\n\n\n\n\n\n\n");

    //segunda carta
    printf("insira os dados da carta 2-\n");

    printf("digite o Estado escolhido:\n");
    scanf("%s",estado_2);

    printf("digite o código da carta ex:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s",codigo_da_carta_2);

    printf("digite o nome da cidade:\n");
    scanf("%s",nome_da_cidade_2);

    printf("digite a população da cidade:\n");
    scanf("%lu", &populacao_2);

    printf("digite a area total em km2:\n");
    scanf("%f",&areakm2_2);

    printf("digite o PIB da cidade:\n");
    scanf("%f",&PIB_2);

    printf("digite quantos pontos turísticos tem na cidade:\n");
    scanf("%d",&pontos_2);
    printf("\n\n\n\n\n\n");

    //Calculando Densidade Populacional e PIB per Capita

    Densidade_Populacional= (float) populacao / areakm2;
    PIB_per_Capita=(float)PIB / populacao;

    Densidade_Populacional_2=(float) populacao_2 / areakm2_2;
    PIB_per_Capita_2=(float)PIB_2 / populacao_2;

    Super_poder = populacao + areakm2 + PIB + pontos + PIB_per_Capita + areakm2/(float)populacao;
    Super_poder_2 = populacao_2 + areakm2_2 + PIB_2 + pontos_2 + PIB_per_Capita_2 + areakm2_2/(float)populacao_2;
// comparação se quer 1 ou 2 atributos
    printf("digite 1 caso queira comparar apenas um atributo ou digite 2 caso queira comparar 2 atributos\n");
    scanf("%d", &comparacao);

    //exibindo na tela a 1 carta
    printf("Carta 1:\n");
    printf("Estado: %s \n",estado);
    printf("Código: %s \n",codigo_da_carta);
    printf("Nome da Cidade: %s\n",nome_da_cidade);
    printf("População: %lu\n",populacao);
    printf("Área: %.2f km²\n",areakm2);
    printf("PIB: %.2f bilhões de reais\n",PIB);
    printf("Número de Pontos Turísticos: %d\n",pontos);
    printf("Densidade Populacional: %.2f hab/km²\n",Densidade_Populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);
    printf("\n");
    //exibindo na tela a 2 carta
    printf("Carta 2:\n");
    printf("Estado: %s \n",estado_2);
    printf("Código: %s \n",codigo_da_carta_2);
    printf("Nome da Cidade: %s\n",nome_da_cidade_2);
    printf("População: %lu\n",populacao_2);
    printf("Área: %.2f km²\n",areakm2_2);
    printf("PIB: %.2f  bilhões de reais\n",PIB_2);
    printf("Número de Pontos Turísticos: %d\n",pontos_2);
    printf("Densidade Populacional: %.2f hab/km²\n",Densidade_Populacional_2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_2);
    printf("\n\n\n\n\n\n");

   switch (comparacao)
   {
   case 1:
    
    
    //vencedores com logica
    printf("*** Comparação de cartas ***\n");
    printf("digite 1 caso queira comparar população, 2 para areakm2, 3 para PIB, 4 para pontos turísticos, 5 para Densidade populacional, 6 para PIB per Capita, 7 para Super poder:\n");
    scanf("%d", &escolha);
    printf("\n");
    //população
   switch (escolha)
   {
   case 1:
    printf("Carta 1 população: %lu pessoas.\n",populacao);
    printf("Carta 2 população: %lu pessoas.\n",populacao_2);
    if(populacao>populacao_2) {
    printf("carta 1 venceu em maior população.\n");
    }else if(populacao==populacao_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior população.\n");
    }
    printf("\n");
    break;

    //areakm2
    case 2 :
    printf("Carta 1 areakm2: %.2fkm2\n",areakm2);
    printf("Carta 2 areakm2: %.2fkm2\n",areakm2_2);
    if(areakm2>areakm2_2) {
    printf("carta 1 venceu em maior areakm2.\n");
    }else if(areakm2==areakm2_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior areakm2.\n");
    }
    printf("\n");
    break;

    //PIB
    case 3:
    printf("Carta 1 PIB: %.2f\n",PIB);
    printf("Carta 2 PIB: %.2f\n",PIB_2);
    if(PIB>PIB_2) {
    printf("carta 1 venceu em maior PIB.\n");
    }else if(PIB==PIB_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior PIB.\n");
    }
    printf("\n");
    break;

    //pontos turísticos
    case 4:
    printf("Carta 1 pontos turísticos: %d\n",pontos);
    printf("Carta 2 pontos turísticos: %d\n",pontos_2);
    if(pontos>pontos_2) {
    printf("carta 1 venceu em maior número de pontos turísticos.\n");
    }else if(pontos==pontos_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior número de pontos turísticos.\n");
    }
    printf("\n");
    break;

    //Densidade Populacional
    case 5:
    printf("Carta 1 Densidade Populacional: %.2f\n",Densidade_Populacional);
    printf("Carta 2 Densidade Populacional: %.2f\n",Densidade_Populacional_2);
    if(Densidade_Populacional<Densidade_Populacional_2) {
    printf("carta 1 venceu em menor número de Densidade Populacional.\n");
    }else if(Densidade_Populacional_2==Densidade_Populacional){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em menor número de Densidade Populacional.\n");
    }
    printf("\n");
    break;

    //PIB_per_Capita
    case 6:
    printf("Carta 1 PIB per Capita: %.2f\n",PIB_per_Capita);
    printf("Carta 2 PIB per Capita: %.2f\n",PIB_per_Capita_2);
    if(PIB_per_Capita>PIB_per_Capita_2) {
    printf("carta 1 venceu em maior número de PIB per Capita.\n");
    }else if(PIB_per_Capita==PIB_per_Capita_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em maior número de PIB per Capita.\n");
    }
    printf("\n");
    break;

    //Super poder
    case 7:
    printf("Carta 1 Super poder: %.2f\n",Super_poder);
    printf("Carta 2 Super poder: %.2f\n",Super_poder_2);
    if(Super_poder>Super_poder_2) {
    printf("carta 1 venceu em Super poderes.\n");
    }else if(Super_poder==Super_poder_2){
        printf("ninguem venceu.\n");
    }else{
        printf("carta 2 venceu em Super poderes.\n");
    }
    printf("\n");
    break;

default:
printf("***número escolhido inválido***\n");
    break;
   }
   
    break;

    case 2:
    printf("**não escolha o mesmo atributo para comparar**\n");
    printf("escolha seu primeiro atributo: digite 1 caso queira comparar população, 2 para areakm2, 3 para PIB, 4 para pontos turísticos, 5 para Densidade populacional, 6 para PIB per Capita, 7 para Super poder:\n");
    scanf("%d",&atributo1);
    printf("escolha seu segundo atributo: digite 1 caso queira comparar população, 2 para areakm2, 3 para PIB, 4 para pontos turísticos, 5 para Densidade populacional, 6 para PIB per Capita, 7 para Super poder:\n");
    scanf("%d",&atributo2);
    if (atributo1 == atributo2)
    {
        printf("não escolha o mesmo atributo para comparar\n");
    } else if (atributo1 > 7 || atributo2 > 7 ){
    printf("escolha um número de 1 a 7");
    } else if(atributo1 < 1 || atributo2 < 1){
        printf("escolha um número de 1 a 7");
    }else{

        //comparando o primeiro atributo de cada carta
    switch(atributo1){
     case 1:
    if(populacao > populacao_2) pontos1++;
    else if(populacao < populacao_2) pontos2++;
            break;
    case 2:
 if(areakm2 > areakm2_2) pontos1++;
     else if(areakm2 < areakm2_2) pontos2++;
         break;
     case 3:
 if(PIB > PIB_2) pontos1++;
     else if(PIB < PIB_2) pontos2++;
         break;
    case 4:
    if(pontos > pontos_2) pontos1++;
     else if(pontos < pontos_2) pontos2++;
          break;
    case 5:
  if(Densidade_Populacional < Densidade_Populacional_2) pontos1++;
      else if(Densidade_Populacional > Densidade_Populacional_2) pontos2++;
         break;
    case 6:
 if(PIB_per_Capita > PIB_per_Capita_2) pontos1++;
     else if(PIB_per_Capita < PIB_per_Capita_2) pontos2++;
         break;
    case 7:
 if(Super_poder > Super_poder_2) pontos1++;
     else if(Super_poder < Super_poder_2) pontos2++;
         break;
    }

//comparando o segundo atributo de cada carta
 switch(atributo2){
        case 1:
    if(populacao > populacao_2) pontos1++;
         else if(populacao < populacao_2) pontos2++;
            break;
        case 2:
    if(areakm2 > areakm2_2) pontos1++;
         else if(areakm2 < areakm2_2) pontos2++;
            break;
        case 3:
     if(PIB > PIB_2) pontos1++;
        else if(PIB < PIB_2) pontos2++;
            break;
        case 4:
    if(pontos > pontos_2) pontos1++;
        else if(pontos < pontos_2) pontos2++;
         break;
        case 5:
     if(Densidade_Populacional < Densidade_Populacional_2) pontos1++;
        else if(Densidade_Populacional > Densidade_Populacional_2) pontos2++;
            break;
        case 6:
    if(PIB_per_Capita > PIB_per_Capita_2) pontos1++;
        else if(PIB_per_Capita < PIB_per_Capita_2) pontos2++;
            break;
         case 7:
    if(Super_poder > Super_poder_2) pontos1++;
        else if(Super_poder < Super_poder_2) pontos2++;
            break;
    }
    printf("\n");
    //nome da cidade
    printf("***Comparação entre as cartas:***\n");
     printf("Carta 1: %s\n", nome_da_cidade);
     printf("Carta 2: %s\n", nome_da_cidade_2);

    //pontos dos atributos
    printf("***Resultado da comparação doa dois atributos:***\n");
    printf("Carta 1 ganhou %d atributo(s)\n", pontos1);
    printf("Carta 2 ganhou %d atributo(s)\n", pontos2);
printf("\n");
    //atributos escolhidos
    printf("Atributo 1 escolhido: \n");
switch(atributo1){
    case 1: printf("População\n");
    break;
    case 2: printf("Área (km²)\n");
    break;
    case 3: printf("PIB\n");
    break;
    case 4: printf("Pontos Turísticos\n");
    break;
    case 5: printf("Densidade Populacional\n");
     break;
    case 6: printf("PIB per Capita\n");
    break;
    case 7: printf("Super poder\n");
    break;
}

printf("Atributo 2 escolhido: \n");
switch(atributo2){
    case 1: printf("População\n");
    break;
    case 2: printf("Área (km²)\n"); 
    break;
    case 3: printf("PIB\n");
    break;
    case 4: printf("Pontos Turísticos\n");
    break;
    case 5: printf("Densidade Populacional\n"); 
    break;
    case 6: printf("PIB per Capita\n");
    break;
    case 7: printf("Super poder\n");
    break;
}
printf("\n");
    //resultado
 if(pontos1 > pontos2) printf("-Carta 1 venceu!-\n");
    else if(pontos2 > pontos1) printf("-Carta 2 venceu!-\n");
    else printf("-Empate!-\n");

}
    break;

   default: printf("digite apenas 1 ou 2\n");
    break;
   }
    return 0;
    }
  