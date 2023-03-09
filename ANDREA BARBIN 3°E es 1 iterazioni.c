//ANDREA BARBIN 3°E es 1 iterazioni 

/*Dato N un numero intero positivo, genera e visualizza il numero
successivo.*/

//INIZIO
#include <stdio.h>

int main(int argc, char *argv[]){
    
    //DICHIARAZIONE VARIABILI
    
    int numero=0, successivo;
    
   //FASE DI ELABORAZIONE DATI

   //CICLO DO WHILE PER ITERARE L'INPUT DEL NUMERO NEL CASO QUESTO SIA MINORE DI 0
    do {
    
        //FASE DI INPUT NUMERO
        if (numero<0){
            
            //SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL NUMERO INSERITO SIA MINORE DI 0
             printf("Errore, occorre inserire un numero positivo o nullo. Inserire nuovamente il numero:\n"); 
        }
        else {
             printf("Inserisci il numero di cui vuoi visualizzare il successivo.\n"); 
        }
        
        scanf("%i",&numero);
       
    } while (numero<0);
    
    //FASE DI OUTPUT
    printf("Il successivo dell'ultimo numero inserito è %i",numero+1); /*<-- CALCOLO SUCCESSIVO*/
    printf(".");

    
    return 0;
}

//FINE