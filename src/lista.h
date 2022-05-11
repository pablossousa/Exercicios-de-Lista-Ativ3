#ifndef LISTA_H 
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX1 100
#define MAXNOME1 4
#define MAXARQ1 50

typedef struct {
    char value[MAXNOME1];
} Item1;

typedef struct {
    Item1 vet[MAX1];
    int Primeiro;
    int Ultimo;
} Lista1;

void FLVazia(Lista1 *l);
void lerArquivo(Lista1 *l, Item1 *i);
void LImprime(Lista1 *l);
void LInsert(Lista1 *l, Item1 *i);


#define MAX2 100
#define MAXNOME2 4
#define MAXARQ2 50

typedef struct {
    char value[MAXNOME2];
} Item2;

typedef struct {
    Item2 vet[MAX2];
    int Primeiro;
    int Ultimo;
} Lista2;

void FLVazia2(Lista2 *l);
void lerArquivo2(Lista2 *l, Item2 *i);
void LImprime2(Lista2 *l);
void LInsert2(Lista2 *l, Item2 *i);


void Compara(Lista1 *l, Lista2 *l2);

#endif