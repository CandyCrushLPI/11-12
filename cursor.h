#ifndef CURSOR_H_INCLUDED
#define CURSOR_H_INCLUDED
typedef struct
{
    char nome[25];
    int pontos;
} ranking;
void mostrar();
void abre_arquivo(void);
void inserir();
int dados(int i);
int cursor(int x, int y);
#endif // CURSOR_H_INCLUDED
