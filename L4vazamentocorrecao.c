#include <stdio.h>
#include <stdlib.h>

void aloca(void) {
    int *bloco = malloc(1000 * sizeof(int));
    if (bloco == NULL) {
        return NULL;
    }

    bloco[0] = 1;

    free(bloco);
}

int main(void) {
    aloca();
    return 0;
}
