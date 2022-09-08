#include <stdio.h>
int main ()
{
int num;
printf("Ingrese un entero positivo:\n");
scanf("%d",&num);

for(int i=0;i<=num;i++)
{
    if(i%5 == 0)
    {
        printf("Fizz\n");
    }
    else
    {
        if (i%3 == 0)
        {
         printf("Buzz\n");
        }
        else {
    printf("%d\n",i);
   } 
        
    }
    
}


}