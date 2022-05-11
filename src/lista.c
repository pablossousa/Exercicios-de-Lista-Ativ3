#include "lista.h"

void FLVazia(Lista1 *l) {
    l->Primeiro = 0;
    l->Ultimo = 0;
}

void lerArquivo(Lista1 *l, Item1 *i) {

    FILE *arq;

    int aux = 0;

    char nome[MAXNOME1];
    char nomeArquivo[MAXARQ1];

    printf("\nInforme o nome do arquivo 1 (com a extensão): ");
    fgets(nomeArquivo, MAXARQ1, stdin);
    aux = strlen(nomeArquivo)-1;
    nomeArquivo[aux] = '\0';

    arq = fopen(nomeArquivo, "r+");

    if (arq != NULL) {
            while (fgets(nome, MAXNOME1, arq) != NULL) {
                strcpy(i->value, nome);
                LInsert(l, i);
            }
            LImprime(l);
            fclose(arq);
        } else {
            printf("\nOcorreu um erro. Verifique se o nome do arquivo está correto.\n");
        }
}

void LInsert(Lista1 *l, Item1 *i) {
    if (l->Ultimo >= MAX1) {
        printf("Lista cheia!\n");
    }
    else {
        strcpy(l->vet[l->Ultimo].value, i->value);
        l->Ultimo++;
    }
}

void LImprime(Lista1 *l) {
    if (l->Primeiro == l->Ultimo) {
        printf("Lista vazia!\n");
        return;
    }
    for (int i=0; i<l->Ultimo; i++) {
        printf("Cadeia: %s\n", l->vet[i].value);
    }
}




void FLVazia2(Lista2 *l) {
    l->Primeiro = 0;
    l->Ultimo = 0;
}

void lerArquivo2(Lista2 *l, Item2 *i) {

    FILE *arq;

    int aux = 0;

    char nome[MAXNOME2];
    char nomeArquivo[MAXARQ2];

    printf("\nInforme o nome do arquivo 2 (com a extensão): ");
    fgets(nomeArquivo, MAXARQ2, stdin);
    aux = strlen(nomeArquivo)-1;
    nomeArquivo[aux] = '\0';

    arq = fopen(nomeArquivo, "r+");

    if (arq != NULL) {
            while (fgets(nome, MAXNOME2, arq) != NULL) {
                strcpy(i->value, nome);
                LInsert2(l, i);
            }
            LImprime2(l);
            fclose(arq);
        } else {
            printf("\nOcorreu um erro. Verifique se o nome do arquivo está correto.\n");
        }
}

void LInsert2(Lista2 *l, Item2 *i) {
    if (l->Ultimo >= MAX2) {
        printf("Lista cheia!\n");
    }
    else {
        strcpy(l->vet[l->Ultimo].value, i->value);
        l->Ultimo++;
    }
}

void LImprime2(Lista2 *l) {
    if (l->Primeiro == l->Ultimo) {
        printf("Lista vazia!\n");
        return;
    }
    for (int i=0; i<l->Ultimo; i++) {
        printf("Cadeia: %s\n", l->vet[i].value);
    }
}



void Compara(Lista1 *l, Lista2 *l2) {

    printf("\nMaiores cadeias idênticas: \n");
    printf("ARQUIVO 1\tARQUIVO 2: \n");
    for (int i = 0; i < l->Ultimo; i++) {

        for (int j = i; j < l2->Ultimo; j++) {

            if (strcmp(l->vet[i].value, l2->vet[j].value) == 0) {
                printf("\n%s\t\t%s", l->vet[i].value, l2->vet[j].value);
            }

        }

    }
    printf("\n");

}