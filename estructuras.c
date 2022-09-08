#include <stdio.h>
struct Point {
    int x;
    int y;
};

struct Rectangulo
{
    struct Point Pt1;
    struct Point Pt2;  
};
//determinar si los punteros ingresados por el usuario corresponden a:
//un punto, una recta, un cuadro o un rectángulo
//restar la x2 - y1 y y2 - x1

int main()
{
   struct Rectangulo Rec;
   printf("Ingrese el Punto 1: \n");
   scanf("%i%i",&Rec.Pt1.x,&Rec.Pt1.y);

   printf("La x del P1 es; %i\n",Rec.Pt1.x);
   printf("La y del P1 es; %i\n",Rec.Pt1.y);

   printf("Ingrese el Punto 2: \n");
   scanf("%i%i",&Rec.Pt2.x,&Rec.Pt2.y);

   printf("La x del P2 es; %i\n",Rec.Pt2.x);
   printf("La y del P2 es; %i\n",Rec.Pt2.y);

    if (Rec.Pt1.x == Rec.Pt2.x && Rec.Pt1.y == Rec.Pt2.y)
    {
         printf("Usted ha ingresado un punto");
    }
    else if (Rec.Pt1.x == Rec.Pt2.x || Rec.Pt2.y == Rec.Pt1.y)
    {
         printf("Usted ha ingresado una linea");
    }

 
    return 0;
}