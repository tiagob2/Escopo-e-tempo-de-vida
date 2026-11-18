#include <stdio.h>
#include <stdlib.h>

int *cria_sequencia(int n){
     if (n <= 0){
       return NULL;
     }
     int *vetor = malloc(n * sizeof(int));
     if(vetor == NULL){
        return NULL;
     }   
     for(int i = 0; i < n; i++){
        vetor[i] = i + 1;
     }
     return vetor;
}
int main(void){
    int n;
    
    printf("Qual o valor de n: \n");
    scanf("%d", &n);
    
    int *seq = cria_sequencia(n);
    if(seq == NULL){
       return 1;
    }
    for(int i = 0; i < n; i++){
       printf("%d ", seq[i]);
    }
    free(seq);
    return 0;
}