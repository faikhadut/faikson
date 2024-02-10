
#include <stdio.h>

int main() {
    
    int n;
    printf("herzlich Willkommen!\n\nGeben Sie die Anzahl Ihrer Noten ein:\n");
    scanf("%i",&n);
    printf("Sie haben %i eingegeben\n",n);                 //Anzahl von Noten.
    
    
    float A[n];
    for (int i=0;i<n; i++){
    printf("Geben Sie Ihre %i. Note ein\n ",i+1);
        scanf("%f",&A[i]);                                //Einzelne Noten in Array speichern. 
}


float B=0;
for (int i=0; i<n; i++){
    B=B+A[i];                                            //Einzelne Noten addieren
}


//printf("%f",B);   (Kontrolle ob B≠0 ist)
float C=B/n;                                            //Summe von Noten / Anzahl der Noten
printf("Ihr Durchschnitt:%f\n\n",C);

if (C<50){
    printf("\tJunge was soll das lern doch!!");      //some fun
}
    else {
        printf("\tWeiter so...");
    }
    return 30;
}
