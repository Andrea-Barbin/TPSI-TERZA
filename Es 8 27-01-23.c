//ANDREA BARBIN 3°E ES 8 27-01-23

/*Progettare un algoritmo che risolva il seguente problema.  
Si desidera calcolare la somma delle radici quadrate di N valori numerici inseriti dall'utente, 
con N inseriti in input.  L'algoritmo deve stampare la somma calcolata.  
L'algoritmo deve terminare con un messaggio di errore quando viene inserito un numero che non permette 
di effettuare il calcolo (nel dominio dei numeri reali).*/


//INIZIO 
#include<stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    
//DICHIARAZIONE DELLE VARIABILI
int numero, nValori, i=0;
float somma=0, radice;
bool errore=false;

do {
    printf("Quanti numeri si desidera esaminare?\n");
    scanf("%i",&nValori); 
    if (nValori<=0){
        printf("Inserire una quantità di valori valida.\n");
    }
} while (nValori<=0);




//FASE DI ELABORAZIONE DATI
//CICLO DO WHILE PER ITERARE L' INPUT FINO A QUANDO LA QUANTITA' DI NUMERI INSERITI E' PARI AL NUMERO DI VALORI CHE SI DESIDERA ESAMINARE
do{
    //FASE DI INPUT
     printf("Inserire un numero:\n");
     scanf("%i",&numero); 
     
     //SEGNALE DI ERRORE ED INTERRUZIONE DEL CICLO E DEL PROGRAMMA NEL CASO LA RADICE DELL'ULTIMO NUMERO INSERITO NON APPARTENGA AL DOMINIO R
     if (numero<0){
       printf("Non è possibile calcolare la somma delle radici perchè l'ultimo numero inserito è minore di 0.\n");  
     errore=true;
     break;
     }
     somma=somma+sqrt(numero);
     i++;
     
} while(i<nValori);

//FASE DI OUTPUT

if (errore==false){
    printf("La somma delle radici dei numeri letti è pari a: %f \n",somma);
}

 
 return 0;
}
//FINE