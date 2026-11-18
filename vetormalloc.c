#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    
    printf("Quantas notas: ");
    scanf("%d", &n);
    
    double *notas = malloc(n * sizeof(double));
    if(notas == NULL){
       printf("Problema na alocacao de memória!");
       return 1;
       }
    double soma = 0;   
    for(int i = 0; i < n; i++){
       scanf("%lf", &notas[i]);
       soma += notas[i];
    } 
    double media = soma / n;
    printf("Media: %.2f\n", media);
    free(notas);
    return 0;
}