#include <stdio.h> // directivas
#include <stdlib.h>

float Promedio(int *);

int main(void){
    time_t t;
    float Res;
    int tam;

    srand((unsigned) time(&t));
    int array [50];

    for(int i=0;i<50;i++){
        array[i]=rand()%101;
        printf("%d\n",array[i]);


    }
    tam = sizeof(array)/sizeof(array[0]);
    Res = Promedio(array); //&array [0]
    printf("Promedio = %f\n",Res);

    //printf("array[0] = %d\n",array[0]);   //5
    //printf("array[49] = %d\n",array[49]); //54

    //printf("memoria de array[0] = %p\n",&array[0]);
    //printf("memoria de array[0] = %p\n",&array);
}

float Promedio(int *ptr){
    float Prom = 0;
    int i;

    for(i=0;i<50;i++){
        Prom += *ptr; //  Prom += *(ptr+i);
        ptr++;
        
    }
    

    Prom /= 50;

    return Prom;
}