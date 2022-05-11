#include "lista.h"

int main() {

    Lista1 L1;
    Item1 I1;

    FLVazia(&L1);
    lerArquivo(&L1, &I1);


    Lista2 L2;
    Item2 I2;

    FLVazia2(&L2);
    lerArquivo2(&L2, &I2);


    Compara(&L1, &L2);
}