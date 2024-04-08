#include <stdio.h>

int main() 
{
long int P; 
long int V;
    printf("enter Value and Percentage:\n");
    
printf("Value:");
scanf("%ld", &V);
printf("Percentage:");
scanf("%ld", &P);
long int e=0;
e = P * V / 100;
printf("result: %ld",e);

   return 0;
}
