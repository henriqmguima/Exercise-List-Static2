#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_estatica2.h"

#define MAX_ALUNOS 100

void inicializarLista(Lista *li) {
    li->tamanho = 0;
}

void inserirAluno(Lista *li, int matricula) {
    if (li->tamanho >= MAX_ALUNOS) {
        printf("Lista cheia, nao foi possivel inserir o aluno.\n");
        return;
    }
    li->alunos[li->tamanho].matricula = matricula;
    li->tamanho++;
}

void sort012(Lista *li, int N) {
    int freq[3] = {0}; // Inicializa a frequência de cada matrícula (0, 1, 2) como 0
	int i;
    // Conta a frequência de cada matrícula na lista
    for (i = 0; i < li->tamanho; i++) {
        freq[li->alunos[i].matricula]++;
    }

    int pos = 0; // Posição atual na lista
	int num;
    // Preenche a lista na ordem crescente de matrículas
    for (num = 0; num <= 2; num++) {
        while (freq[num] > 0) {
            li->alunos[pos].matricula = num;
            pos++;
            freq[num]--;
        }
    }
}

void exibirLista(Lista *li) {
	int i;
    printf("Lista ordenada:\n");
    for (i = 0; i < li->tamanho; i++) {
        printf("%d ", li->alunos[i].matricula);
    }
    printf("\n");
}
