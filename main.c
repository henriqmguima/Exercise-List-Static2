#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_estatica2.h"

int main() {
    int N, matricula, i;
	Lista turma;
    inicializarLista(&turma);

    printf("Digite o numero total de alunos na turma (N): ");
    scanf("%d", &N);

    printf("Digite as matriculas dos alunos (0, 1 ou 2):\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &matricula);
        inserirAluno(&turma, matricula);
    }

    sort012(&turma, N);
    exibirLista(&turma);

    return 0;
}

