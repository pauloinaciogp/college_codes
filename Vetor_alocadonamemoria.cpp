#include <stdio.h>
#include <cstdlib>
using namespace std;

float* alocaMemoria (int n);
void imprimeVetor(float *vetor, int n);
void liberaMemoria (float *vetor);

int main(){
    int n;
    // n meu tamanho do vetor 
    printf("Adicione o tamanho do seu vetor: ");
    scanf("%d", &n);

    float *p;
    p=alocaMemoria(n);
    
    printf("Adicione os valores do seu vetor: \n");
    for (int i=0; i<n; i++){
        printf("Posição %d: ", i+1);
        scanf("%f", &p[i]);
    }

    imprimeVetor(p, n);

    printf("\n");

    liberaMemoria(p);

    return 0;    
}

float* alocaMemoria (int n){
    float *p;
    p=(float*)malloc(n*sizeof(float));
    return p;
}

void imprimeVetor(float *vetor, int n){
    printf("Imprimindo seu vetor>>\n");

    for (int i=0; i<n; i++){
        printf("%.2f ", *vetor);
        vetor++;
    }
}

void liberaMemoria (float *vetor){
    free(vetor);
}



