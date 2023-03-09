//ANDREA BARBIN 3°E es 4 iterazioni

/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i numeri pari
minori o uguali a N.*/

//INIZIO
#include <stdio.h>



int main(int argc, char *argv[])
{
    //DICHIARAZIONE VARIABILI
    int numero=1; //ASSEGNO IL VALORE 1 AL NUMERO PER EVITARE UNA SEGNALAZIONE DI ERRORE AL PRIMO INPUT 
    
   
   //CICLO DO WHILE PER ITERARE L'INPUT DEL NUMERO NEL CASO QUESTO SIA MINORE O UGUALE A 0
   
   //FASE DI ELABORAZIONE DATI
    do {
    
        //FASE DI INPUT NUMERO
        if (numero<=0){
            
            //SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL NUMERO INSERITO SIA MINORE O UGUALE A 0
             printf("Errore, occorre inserire un numero positivo. Inserire nuovamente il numero:\n"); 
        }
        else {
             printf("Inserisci il numero di cui vuoi visualizzare i precedenti.\n"); 
        }
        

        scanf("%i",&numero);
        
       
    } while (numero<=0);
    
    //FASE DI OUTPUT
    
    //CICLO FOR PER VISUALIZZARE I NUMERI PARI INTERI POSITIVI MINORI O UGUALI A N
    printf("I numeri pari interi positivi minori o uguali dell'ultimo numero inserito sono:\n"); 
    for (int i = 1;i<=numero;i++ ){
        
        /*Utilizzo l'operatore matematico mod per vedere se il valore assunto dal contatore i e' pari o dispari. 
        Nel caso %i sia uguale a 0, grazie all'if l'algoritmo stampa i numeri pari + e <= n in ordine crescente, 
        basandosi sul ciclo for.*/
        
        if (i%2==0){
         printf("%i \n",i);
        }
       
    }
    
    return 0;
}
//FINE