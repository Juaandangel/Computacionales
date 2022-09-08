#include <stdio.h>
#include <stdint.h>

void swap(int *,int *);

int main(void){
    int x, y;
    x = 1;
    y = 2;
    printf("x = %d\n",x);
    printf("x = %d\n",y);
    swap(&x,&y); //ampersand
    printf("x = %d\n",x);
    printf("x = %d\n",y);
    return 0;
}
void swap(int *d1, int *d2){
int temp;
temp = *d1;
*d1 = *d2;
*d2 = temp;
}