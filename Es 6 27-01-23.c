//ANDREA BARBIN 3°E ES 6 27-01-23

/*Progettare un algoritmo che effettui le seguenti operazioni : 
• lega da tastiera una coppia di valori interi A e B con A < B ;  
• continui a leggere da tastiera una serie di valori interi, 
terminando quando il valore letto è al di fuori dell'intervallo [A, B];  
conteggi la media dei valori letti ;  prima di terminare, stampi il valore calcolato.*/


//INIZIO 
#include<stdio.h>

int main(int argc, char *argv[]){
    
//DICHIARAZIONE DELLE VARIABILI
int a,b,numero, i=0, numInseriti=0, somma=0;
float media;

//FASE DI ELABORAZIONE DATI
//CICLO DO WHILE PER ITERARE GLI INPUT FINO A QUANDO IL NUMERO INSERITO E' COMPRESO NELL'INTERVALLO [a,b]
do {
    
    //CICLO DO WHILE PER INSERIRE NUOVAMENTE LA COPPIA NEL CASO IN CUI A>B O A=B
  do {
      
      //FASE DI INPUT
        printf("Inserire la coppia di numeri A e B, B deve essere maggiore di A. \n");
        printf("Inserire il numero A:\n");
        scanf("%i",&a);
        printf("Inserire il numero B:\n");  
        scanf("%i",&b);
        if (a>b||a==b){
            printf("B deve essere maggiore di A, è necessario inserire nuovamente la coppia di numeri. \n");
        }
        
        
    }while (a>b||a==b);
        
        printf("Inserire un numero per verificare che appartenga all'intervallo [a,b]:\n");
        scanf("%i",&numero);
        
        i++;
        
        /*La variabile numInseriti indica i numeri che sono sono stati inseriti complessivamente escludendo 
        il reinserimento della coppia A e B nel caso non sia rispettata la suddetta condizione. 
        E' necessario sommare ad un contatore i il prodotto  2*i perchè, dopo aver inserito i valori della coppia A e B 
        avremmo 2 numeri e non 1, più il numero inserito successivamente. Quindi alla prima iterazione del ciclo 
        do while complessivo avremo 3 numeri inseriti.*/
        
        numInseriti=(2*i)+i;
        somma=somma+a+b+numero;
        
        media=somma/numInseriti;
} while (numero>a&&numero<b||numero==a||numero==b);

//FASE DI OUTPUT
printf("numInseriti è pari a  %i \n",numInseriti);
 printf("La media dei numeri letti è pari a: %f \n",media);
 
 return 0;
}
//FINE