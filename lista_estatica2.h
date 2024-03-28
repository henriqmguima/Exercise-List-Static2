#ifndef LISTA_ESTATICA_H_INCLUDED
#define LISTA_ESTATICA_H_INCLUDED
#define MAX_ALUNOS 100

typedef struct {
    int matricula;
} Aluno;

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int tamanho;
} Lista;

void inicializarLista(Lista *li);
void inserirAluno(Lista *li, int matricula);
void sort012(Lista *li, int N);
void exibirLista(Lista *li);

#endif /* STRUCT_H_INCLUDED */
