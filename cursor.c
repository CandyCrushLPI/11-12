#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>
#include "cursor.h"
#define enter 13
#define esc 27
#define riba 72
#define baixo 80
#define esquerda 75
#define direita 77
#define SIZE 8

int pontuacao=0;
void mudacor(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
void gotoxy(x,y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD)
    {
        x,y
    });
}

void exibirMatriz(int v[SIZE][SIZE]){
    int i,j;
    mudacor(15);
    for(i=0;i < 8;i++){
        for(j=0;j<8;j++){

            gotoxy(32+(3*i),5+(2*j));
            printf("%c", v[i][j]);
        }
    }
}

int gerarRand()
    {
        int num=0;
        num=rand();
        if(num>=49 && num<=52) return num;
        else
            return gerarRand();
    }

int * posicao(int linha, int coluna, int matriz[SIZE][SIZE]){
    char escolha;
    escolha = getch();
    switch(escolha){
        case riba:
            if(linha > 0){
                return &matriz[linha][coluna-1];
            }
            break;
        case baixo:
            if(linha < 8){
                return &matriz[linha][coluna+1];
            }
            break;
        case esquerda:
            if(coluna > 0){
                return &matriz[linha-1][coluna];
            }
            break;
        case direita:
            if(coluna < 8){
                return &matriz[linha+1][coluna];
            }
            break;
        default:
            return NULL;

    }
    return NULL;
}

void gerarMatriz(int matriz[SIZE][SIZE]){
    int i,j;
    srand(time(NULL));
    for(i = 0;i < SIZE;i++){
        for(j = 0; j < SIZE; j++){
            matriz[i][j] = gerarRand();
        }
    }
}

void trocarItem(int **atual, int **prox){
    int * aux;
    aux = *atual;
    *atual = *prox;
    *prox = aux;
}

void fezJogo(int *matriz[SIZE][SIZE],int *pontuar)
{
    int i, j;

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if((matriz[i][j] == matriz[i][j+1]) && (matriz[i][j] == matriz[i][j+2]) &&
                    (matriz[i][j+1]==matriz[i][j+2]) && (matriz[i][j] == matriz[i][j+3]) && matriz[i][j+1]==matriz[i][j+3]
                    && matriz[i][j+2]==matriz[i][j+3])
            {
                matriz[i][j] = gerarRand();
                matriz[i][j+1] = gerarRand();
                matriz[i][j+2] = gerarRand();
                matriz[i][j+3] = gerarRand();
                if(*pontuar == 1) pontuacao+=400;
            }
        }
    }
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if((matriz[i][j] == matriz[i+1][j]) && (matriz[i][j] == matriz[i+2][j]) && (matriz[i+1][j]==matriz[i+2][j]))
            {
                matriz[i][j] = gerarRand();
                matriz[i+1][j] = gerarRand();
                matriz[i+2][j] = gerarRand();
                if(*pontuar == 1)pontuacao+=100;
            }
        }
    }
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if((matriz[i][j] == matriz[i][j+1]) && (matriz[i][j] == matriz[i][j+2]) && (matriz[i][j+1]==matriz[i][j+2]))
            {
                matriz[i][j] = gerarRand();
                matriz[i][j+1] = gerarRand();
                matriz[i][j+2] = gerarRand();
                if(*pontuar == 1)pontuacao+=100;
            }
        }
    }

}

void ganhou(int *ch){
    printf("\n\n\n\n\n\n");
    system("COLOR 04");
    printf("    **              **                                  **                **                       \n");
    Sleep(200);
    system("COLOR 07");
    printf("      **          **     ****       **         **       **                **  ***  ***         **  \n");
    printf("        **      **     **    **     **         **       **                **  ***  ****        **  \n");
    Sleep(200);
    system("COLOR 04");
    printf("          **  **     **        **   **         **       **                **  ***  ** **       **  \n");
    printf("            **      **          **  **         **       **                **  ***  **  **      **  \n");
    Sleep(200);
    system("COLOR 07");
    printf("            **      **          **  **         **       **                **  ***  **   **     **  \n");
    printf("            **      **          **  **         **       **                **  ***  **    **    **  \n");
    Sleep(200);
    system("COLOR 04");
    printf("            **      **          **  **         **       **       **       **  ***  **     **   **  \n");
    printf("            **      **          **  **         **        **     ****     **   ***  **      ** ***  \n");
    Sleep(200);
    system("COLOR 07");
    printf("            **       **        **   **         **         **   **  **   **    ***  **       *****  \n");
    printf("            **         **    **       **     **            ** **    ** **     ***  **        ****  \n");
    Sleep(200);
    system("COLOR 04");
    printf("            **           ****           *****               ***      ***      ***  **         ***  \n");
    system("COLOR 07");
    int i;
    do{
        system("COLOR 04");
        Sleep(200);
        system("COLOR 07");
        Sleep(200);
    }while(*ch != esc);

}


int matrix(){
    int matriz[SIZE][SIZE];
    int x = 0,y = 0;
    int * atual, *proximo;
    char aux;
    int jogadas=15;
    int troca = 1;
    int pontuar = 0;
    int *pont = 0;
    gerarMatriz(matriz);



    do{

        exibirMatriz(matriz);
        printf("\n\n\t\t\t\tJogadas:%d",jogadas);
        printf("\tPontuacao:%d",pontuacao);
        gotoxy(32+(3*x),5+(2*y));
        fezJogo(&matriz, &pont);
        aux = getch();

        switch(aux){
            case riba:
                if(y > 0){
                    y--;
                    if(troca < 0){
                        proximo = &matriz[x][y];
                        trocarItem(atual,proximo);
                        pont = 1;
                        fezJogo(&matriz, &pont);
                        troca *= -1;
                        jogadas--;
                    }
                }
                break;
            case baixo:
                if(y < 7){
                    y++;
                    if(troca < 0){
                        proximo = &matriz[x][y];
                        trocarItem(atual,proximo);
                        pont = 1;
                        fezJogo(&matriz, &pont);
                        troca *= -1;
                        jogadas--;
                    }
                }
                break;
            case esquerda:
                if(x > 0){
                    x--;
                    if(troca < 0){
                        proximo = &matriz[x][y];
                        trocarItem(atual,proximo);
                        pont = 1;
                        fezJogo(&matriz, &pont);
                        troca *= -1;
                        jogadas--;
                    }
                }
                break;
            case direita:
                if(x < 7){
                    x++;
                    if(troca < 0){
                        proximo = &matriz[x][y];
                        trocarItem(atual,proximo);
                        pont = 1;
                        fezJogo(&matriz, &pont);
                        troca *= -1;
                        jogadas--;
                    }
                }
                break;
            case enter:
                atual = &matriz[x][y];
                mudacor(12);
                printf("%c", *atual);
                aux = getch();
                troca *= -1;
                break;
        }
        }while(aux != 0 && jogadas>0 && aux !=esc && pontuacao<2000);

        if(pontuacao >= 2000){
           ganhou(&aux);
        }
}
