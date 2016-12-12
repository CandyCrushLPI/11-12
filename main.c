#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include "cursor.h"
#define acima 72
#define abaixo 80
#define esc 27
#define enter 13
#define esquerda 75
#define direta 77

//Esses códigos abaixos são pelos pelo getch();
//e retornam um numero inteiro.
//Esse numero representa as teclas do teclado, (setas,enter,esc).

int seta1,seta2;
seta1=175, seta2=174;
void inicio1(void)
{
    gotoxy(50,50);
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",5,6,3,4);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³  \7                              ³\n");
    printf("\t\t\t   ³  %cNovo Jogo%c                   ³\n",seta1,seta2);
    printf("\t\t\t   ³   Nivel                        ³\n");
    printf("\t\t\t   ³   Ranking                      ³\n");
    printf("\t\t\t   ³   Opcoes                       ³\n");
    printf("\t\t\t   ³   Sair                         ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        system("cls");
    else if (ch==enter)
    {
        funcao_enter1 ();
        matrix();
    }
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio05();
    else if (ch==abaixo)
        inicio02();
    else
        inicio1();
}
inicio02()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",3,5,4,6);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³  \7                              ³\n");
    printf("\t\t\t   ³   Novo Jogo                    ³\n");
    printf("\t\t\t   ³  %cNivel%c                       ³\n",seta1,seta2);
    printf("\t\t\t   ³   Ranking                      ³\n");
    printf("\t\t\t   ³   Opcoes                       ³\n");
    printf("\t\t\t   ³   Sair                         ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        exit(0);
    else if (ch==enter)
        funcao_enter2();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio1();
    else if (ch==abaixo)
        inicio03();
    else
        inicio02();
}
inicio03()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",6,4,5,3);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³  \7                              ³\n");
    printf("\t\t\t   ³   Novo Jogo                    ³\n");
    printf("\t\t\t   ³   Nivel                        ³\n");
    printf("\t\t\t   ³  %cRanking%c                     ³\n",seta1,seta2);
    printf("\t\t\t   ³   Opcoes                       ³\n");
    printf("\t\t\t   ³   Sair                         ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        system("exit");
    else if (ch==enter)
        funcao_enter3();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio02();
    else if (ch==abaixo)
        inicio04();
    else
        inicio03();
}
inicio04()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",4,6,3,5);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³   \7                             ³\n");
    printf("\t\t\t   ³   Novo Jogo                    ³\n");
    printf("\t\t\t   ³   Nivel                        ³\n");
    printf("\t\t\t   ³   Ranking                      ³\n");
    printf("\t\t\t   ³  %cOpcoes%c                      ³\n",seta1,seta2);
    printf("\t\t\t   ³   Sair                         ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        system("exit");
    else if (ch==enter)
        funcao_enter4();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio03();
    else if (ch==abaixo)
        inicio05();
    else
        inicio04();
}
inicio05()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",4,5,3,6);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³  \7                              ³\n");
    printf("\t\t\t   ³   Novo Jogo                    ³\n");
    printf("\t\t\t   ³   Nivel                        ³\n");
    printf("\t\t\t   ³   Ranking                      ³\n");
    printf("\t\t\t   ³   Opcoes                       ³\n");
    printf("\t\t\t   ³  %cSair%c                        ³\n",seta1,seta2);
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        system("exit");
    else if (ch==enter)
        funcao_enter5();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio04();
    else if (ch==abaixo)
        inicio1();
    else
        inicio05();
}
funcao_enter1()
{

    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",5,3,6,4);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ³   LOADING GAME....             ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

    Sleep(600);
    system("cls");


}



funcao_enter2()
{
    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",6,4,3,5);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ%cSELECIONE O NIVEL%cÄÄÄÄÄÄÄ¿\n",4,5);
    printf("\t\t\t   ³ \7                                ³\n");
    printf("\t\t\t   ³   %cEasy                         ³\n", seta1);
    printf("\t\t\t   ³    Normal                       ³\n");
    printf("\t\t\t   ³    Hard                         ³\n");
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        inicio02();
    else if (ch==abaixo)
        funcao_enter2b();
    else if (ch==acima)
        funcao_enter2c();
    else funcao_enter2();

}
funcao_enter3()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",5,3,6,4);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄÄ    RANKING    ÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ³    %cMelhores pontuadores%c       ³\n",4,4);
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ³     Player %c1%c:  500.000        ³\n", seta1,seta2);
    printf("\t\t\t   ³     Player %c2%c:  300.000        ³\n", seta1,seta2);
    printf("\t\t\t   ³     Player %c3%c:  100.000        ³\n", seta1,seta2);
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        inicio03();
    else
        funcao_enter3();
}
funcao_enter4()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",4,3,6,5);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ CONFIGURACOES ÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³ \7                               ³\n");
    printf("\t\t\t   ³             %cSOM%c              ³\n",6,6);
    printf("\t\t\t   ³ %cHabilitar%c     Desabilitar    ³\n",seta1,seta2);
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        inicio04();
    else if (ch==direta)
        funcao_enter4b();
    else if (ch==esquerda)
        funcao_enter4b ();
    else if (ch==enter)
        inicio04();
    else funcao_enter4();
}
funcao_enter5()
{
    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",6,4,5,3);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄÄÄÄÄ %cEXIT%c ÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n",5,5);
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ³ %cEnter%c para Finalizar o jogo   ³\n",seta1,seta2);
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ³ %cEsc%c para Voltar ao Menu       ³\n");
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        inicio05();
    else if (ch==enter)
        exit(0);
    else funcao_enter5();
}
funcao_enter2b()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",3,4,5,6);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ%cSELECIONE O NIVEL%cÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³                                 ³\n",5,5);
    printf("\t\t\t   ³    Easy                         ³\n");
    printf("\t\t\t   ³   %cNormal                       ³\n", seta1, seta2);
    printf("\t\t\t   ³    Hard                         ³\n");
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        inicio02();
    else if (ch==acima)
        funcao_enter2();
    else if (ch==abaixo)
        funcao_enter2c();
    else funcao_enter2b ();
}
funcao_enter2c()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",6,5,4,3);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ%cSELECIONE O NIVEL%cÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³                                 ³\n",5,5);
    printf("\t\t\t   ³    Easy                         ³\n");
    printf("\t\t\t   ³    Normal                       ³\n");
    printf("\t\t\t   ³   %cHard                         ³\n", seta1,seta2);
    printf("\t\t\t   ³                                 ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        inicio02();
    else if (ch==acima)
        funcao_enter2b();
    else if (ch==abaixo)
        funcao_enter2();
    else funcao_enter2c();
}
funcao_enter4b()
{
    system("cls");
    printf("\n\n\t\t\t             %c%cNAIPE CRUSH%c%c",6,5,3,4);
    printf("\n\n\n\n\t\t\t   ÚÄÄÄÄÄÄÄ CONFIGURACOES ÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ³             %cSOM%c              ³\n", 6,6);
    printf("\t\t\t   ³   Habilitar   %cDesabilitar%c    ³\n",seta1,seta2);
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ³                                ³\n");
    printf("\t\t\t   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    int ch;
    ch=getch();
    if (ch==esc)
        inicio04();
    else if (ch==direta)
        funcao_enter4();
    else if (ch==esquerda)
        funcao_enter4();
    else if (ch==enter)
        inicio04();
    else funcao_enter4b();
}




main ()
{

        char Espada=6,Paus=5,Copas=3,Ouros=4;
        system("COLOR 07");
        printf("\n\n\n\n");
        printf("\t\t%c%c%c      %c%c  %c%c%c%c%c  %c%c %c%c%c%c%c%c  %c%c%c%c%c%c\n",Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada);
        Sleep(200);
        system("COLOR 04");
        printf("\t\t%c%c %c     %c%c %c%c   %c%c %c%c %c%c   %c%c %c%c    \n",Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas);
        Sleep(200);
        system("COLOR 07");
        printf("\t\t%c%c  %c    %c%c %c%c   %c%c %c%c %c%c   %c%c %c%c%c%c  \n",Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus);
        Sleep(200);
        system("COLOR 04");
        printf("\t\t%c%c   %c   %c%c %c%c%c%c%c%c%c %c%c %c%c%c%c%c%c  %c%c    \n",Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros);
        Sleep(200);
        system("COLOR 07");
        printf("\t\t%c%c    %c  %c%c %c%c   %c%c %c%c %c%c      %c%c    \n",Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada);
        Sleep(200);
        system("COLOR 04");
        printf("\t\t%c%c     %c %c%c %c%c   %c%c %c%c %c%c      %c%c%c%c%c%c\n\n\n",Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas);
        Sleep(200);
        system("COLOR 07");
        printf("  ");
        Sleep(200);
        system("COLOR 04");
        printf("\t\t          %c%c%c%c%c  %c%c%c%c%c%c    %c%c   %c%c   %c%c%c%c%c  %c%c  %c%c\n",Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros);
        Sleep(200);
        system("COLOR 07");
        printf("\t\t 	 %c%c      %c%c   %c%c   %c%c   %c%c  %c%c      %c%c  %c%c\n",Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada);
        Sleep(200);
        system("COLOR 04");
        printf("\t\t	 %c%c      %c%c   %c%c   %c%c   %c%c   %c%c%c    %c%c%c%c%c%c\n",Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas,Copas);
        Sleep(200);
        system("COLOR 07");
        printf("\t\t         %c%c      %c%c%c%c%c     %c%c   %c%c     %c%c   %c%c  %c%c\n",Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus,Paus);
        Sleep(200);
        system("COLOR 04");
        printf("\t\t         %c%c      %c%c   %c%c   %c%c   %c%c      %c%c  %c%c  %c%c\n",Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros,Ouros);
        Sleep(200);
        system("COLOR 07");
        printf("\t\t          %c%c%c%c%c  %c%c    %c%c  %c%c%c%c%c%c%c  %c%c%c%c%c%c  %c%c  %c%c\n\n\n",Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada,Espada);
        Sleep(1000);


    system("COLOR 07");

    inicio1();

}

