#include <stdio.h>

int proximo_id(void){
    static int x = 0;
    x++;
    printf("%d ", x);
}
int main(void){
   proximo_id();
   proximo_id();
   proximo_id();
   proximo_id();
   proximo_id();
   
   return 0;
}