#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Est{
   char Nom[30];
   char Ape[30];
   float Notas[7];
   uint8_t Asist[48];
};

void Generador(struct Est *pAlum);
void Imprimir(struct Est *pAlum);


int main(){
    srand(time(NULL));
    struct Est Alumnos[30];
    int Edad;
    uint8_t op,cont=0, n;
// while
    printf("1. Ingresar alumno\n2. Imprimir Alumno\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1: if(cont >= 0 && cont < 30){
        Generador(&Alumnos[cont]);
             cont++;
    }
    
        break;
     case 2: printf("Ingrese el número del estudiante\n");
             scanf("%d",&n);
             if(n<=cont)
             {
                Imprimir(&Alumnos[n]);
             }
             else

              printf("Estudiante no ingresado\n");
             break;

    default:  printf("Opción no válida\n");
        break;
    }
    

    Generador(&Alumnos[0]);
    Imprimir(&Alumnos[0]);
    
    
   

    
    return 0;
}


void Generador(struct Est *pAlum)
{
    char Nombre[30], Apellido[30];
    float N;
    int A;
    printf("Ingrese nombre del estudiante:\n");
    scanf("%s", Nombre);
    printf("Ingrese apellido del estudiante:\n");
    scanf("%s", Apellido);

    strcpy(pAlum->Nom,Nombre);
    strcpy(pAlum->Ape,Apellido);


    for(uint8_t i=0;i<7;i++){

        N = (rand()%51)/10.0; //# aleatorios entre 0 y 50 dividido entre 10.0 para generar decimales pq rand genera enteros
        pAlum->Notas[i]=N;
        
        
    }

    //llenar 48 asistencias
    for(uint8_t i=0;i<47;i++){
        A = (rand()%2);
        pAlum->Asist[i]=A;
        
    }

    void Imprimir(struct Est *pAlum)
    {
     printf("Nombre: %s %s\n", pAlum->Nom,pAlum->Ape);

    for(uint8_t i=0;i<7;i++){
        printf("Notas: %d: %f\n", i+1,pAlum->Notas[i]); // %d: %f variables a reeplazar 
    }
    
    for(uint8_t i=0;i<47;i++){
        printf("Asistencia: %d: %i ", i+1,pAlum->Asist[i]);
    }
    };

    

};
