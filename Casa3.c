#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ANO_ATUAL 2022

typedef enum
{
    BRANCA,
    AMARELA,
    VERDE,
    BEGE,
    VERMELHA,
    AZUL
} Cor;


typedef struct
{
    int ano;
    int nif;
    char estado[200];
    Cor cor;
} Casa;

typedef struct
{
    Casa carteira[20];
    int numcasas;
} Carteira;

int mudaCor(Casa *c, Cor novaCor)
{   
    int res=0;
    int checknif;
    printf(" Insira o NIF para alterar o cor: \n");
    scanf("%d", &checknif);

    printf("nif=%d\n", c->nif);
    printf("nif introduzido=%d\n", checknif);
    if ((c->nif) == checknif)
    {
        c->cor = novaCor;
        res=1;
    }
    return res;
}

int calculaIdade(Casa c)
{
    int idade = 0;

    idade = ANO_ATUAL - c.ano;


return (idade);
}

void mostraCor (Cor nomeCor){
    switch (nomeCor){
        case BRANCA:
            printf ("BRANCA");
            break;
        case AMARELA:
            printf ("AMARELA");
            break;
        case VERDE:
            printf ("VERDE");
            break;
        case BEGE:
            printf ("BEGE");
            break;
        case VERMELHA:
            printf ("VERMELHA");
            break;
        case AZUL:
            printf ("AZUL");
            break;
        default:
            printf ("Cor desconhecida");
            
    }
}
int main()
{
    Carteira c1;
     int i;
     int cor;
     Cor novaCor;
    c1.carteira[0].cor = BRANCA;
    c1.carteira[0].ano = 2021;
    c1.carteira[0].nif = 123;
    strcpy(c1.carteira[0].estado, "NOVA");

    c1.carteira[1].cor = BRANCA;
    c1.carteira[1].ano = 2000;
    c1.carteira[1].nif = 223;
    strcpy( c1.carteira[1].estado, "REMOBELADA");

    c1.carteira[2].cor = AMARELA; 
    c1.carteira[2].ano = 2021;
    c1.carteira[2].nif = 245;
    strcpy(c1.carteira[2].estado, "NOVA");

    c1.carteira[3].cor = AMARELA;
    c1.carteira[3].ano = 2013;
    c1.carteira[3].nif = 129;
    strcpy(c1.carteira[3].estado, "USADA");

    c1.carteira[4].cor = VERDE; 
    c1.carteira[4].ano = 2021;
    c1.carteira[4].nif = 199;
    strcpy( c1.carteira[4].estado, " NOVA");


    c1.numcasas = 5;
   printf("Lista de casas %d\n", c1.numcasas);  
   printf("\n");

   for (int i = 0; i < 5; i++)
   {
       printf("Informaçao da casa:  %d\n", i+1);
       printf("O Nif do proprietario:  %d \n", c1.carteira[i].nif);
       printf ("O ano do costrocao:  %d\n", c1.carteira[i].ano);
       printf("cor: ");
       mostraCor(c1.carteira[i].cor);
       printf("\n");
       printf("O estado da casa: %s\n", c1.carteira[i].estado);
       printf("\n \n \n");

       printf("A primeira casa tem a cor:");
       mostraCor(c1.carteira[0].cor);
       printf("\n");
       printf("Escolha o novo cor para casa numer 1(1-Branca, 2-Amarela, 3-Verde, 4- Bege, 5- Vermelha, 6-Azul): ");
       scanf("%d", &cor);

       switch(cor)
       {
        case 1:
            novaCor= BRANCA;
            break;
        case 2:
             novaCor= AMARELA;
            break;
        case 3:
            novaCor= VERDE;
            break;
        case 4:
            novaCor= BEGE;
            break;
        case 5:
            novaCor= VERMELHA;
            break;
        case 6:
            novaCor= AZUL;
            break;
        default:
            break;
            
    }
    mudaCor(&(c1.carteira[0]), novaCor);
    printf("\n");
    printf("A primeira casa sera: \n");
    mostraCor(c1.carteira[0].cor);
    printf("\n");

    int checknif;
    printf("Introduza o Nif do proprietario: ");
    scanf("%d", &checknif);

    for(int i =0; i<5; i++)
    {
     if(c1.carteira[i].nif==checknif)
      {
       printf("A idade da casa: %d", calculaIdade(c1.carteira[i]));
      }

  }
 return(0);
} 
}
