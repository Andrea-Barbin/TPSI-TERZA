//ANDREA BARBIN 3°E ES 9 27-01-23

/*Progettare un algoritmo che risolva il seguente problema.  
Si richiede all'utente di inserire una serie di terne di dati numerici (A, B, C).  
Il programma deve terminare quando uno dei valori inseriti è minore di zero.  
Si scartino le terne nelle quali i valori non sono in ordine strettamente crescente, 
ovvero quelle terne per cui non valga A < B < C. Su tutte le terne non scartate si calcoli 
il massimo e il minimo dei valori inseriti.  
Si stampino a video tali valori massimi e minimi prima di terminare il programma.*/


//INIZIO 
#include<stdio.h>

int main(int argc, char *argv[]){
    
//DICHIARAZIONE DELLE VARIABILI
int a,b,c, max=0, min=0, nTerna=0;

//CICLO DO WHILE PER ITERARE L' INPUT FINO A QUANDO UNO DEI NUMERI INSERITI SIA MINORE DI 0
do {
    nTerna++;
    
    //FASE DI INPUT
    printf("Inserire la terna numero %i \n", nTerna);
    printf("Inserire il numero A:\n");
    scanf("%i",&a);
    printf("Inserire il numero B:\n");  
    scanf("%i",&b);
    printf("Inserire il numero C:\n");  
    scanf("%i",&c);
    
    //FASE DI ELABORAZIONE DATI
    if (a<b&&b<c){
        max=c;
        min=a;
        
        //FASE DI OUTPUT
        printf("Il numero massimo è %i \n",max);
        printf("Il numero minimo è %i \n",min);
        
    }
    else{
        printf("Terna scartata perchè i numeri non sono in ordine strettamente crescente.\n");
    }
} while (a>=0&&b>=0&&c>=0);

 return 0;
}
//FINE