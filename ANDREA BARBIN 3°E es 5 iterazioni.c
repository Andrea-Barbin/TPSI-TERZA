//ANDREA BARBIN 3°E es 5 iterazioni

/*Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine crescente i numeri interi compresi
nell'intervallo chiuso [N1,N2]. */

//INIZIO
#include <stdio.h>



int main(int argc, char *argv[])
{
    //DICHIARAZIONE VARIABILI
    int a=1, b=2; 
    
    /*Assegno all'estremo minore dell'intervallo il valore 1 e a quello maggiore il valore 2 affinche' non venga stampata la segalazione 
    di errore prima del  primo input. I due numeri devono essere infatti a<b ed entrambi positivi.*/

   //CICLO DO WHILE PER ITERARE L'INSERIMENTO DELLA COPPIA DI NUMERI NEL CASO SIANO UGUALI OPPURE IL PRIMO SIA MAGGIORE DEL SECONDO
   do {
       
       //SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL PRIMO NUMERO SIA UGUALE O MAGGIORE DEL SECONDO
       if (a>b||a==b){
         printf("----------------------------------------------\n"); 
         printf("Errore, il primo numero deve essere minore del secondo. Inserire nuovamente la coppia di valori.\n"); 
         printf("----------------------------------------------\n"); 
       }
       
           //CICLO DO WHILE PER ITERARE L'INPUT DEL PRIMO NUMERO NEL CASO QUESTO SIA MINORE O UGUALE A 0
           //FASE DI INPUT PRIMO NUMERO
            do {
            
                //FASE DI INPUT NUMERO
                if (a<=0){
                    
                    //SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL NUMERO INSERITO SIA MINORE O UGUALE A 0
                     printf("Errore, occorre inserire un numero positivo. Inserire nuovamente il numero:\n"); 
                }
                
                else {
                     printf("Inserisci il primo numero dell'intervallo chiuso [a;b]. Entrambi devono essere positivi.\n"); 
                }
                
        
                scanf("%i",&a);
                
               
            } while (a<=0);
            
             printf("----------------------------------------------\n"); 
                
            //FASE DI INPUT SECONDO NUMERO
            //CICLO DO WHILE PER ITERARE L'INPUT DEL SECONDO  NUMERO NEL CASO QUESTO SIA MINORE O UGUALE A 0
             do {
            
                //FASE DI INPUT NUMERO
                if (b<=0){
                    
                    //SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL NUMERO INSERITO SIA MINORE O UGUALE A 0
                     printf("Errore, occorre inserire un numero positivo. Inserire nuovamente il numero:\n"); 
                }
                else {
                     printf("Inserisci il secondo numero dell'intervallo chiuso [a;b]. Entrambi devono essere positivi.\n"); 
                }
                
        
                scanf("%i",&b);
                
               
            } while (b<=0);
            
    
   } while (a>b||a==b);
   
   
    //FASE DI OUTPUT
    printf("----------------------------------------------\n"); 
    
    //CICLO FOR PER VISUALIZZARE I NUMERI INTERI POSITIVI COMPRESI NELL'INTERVALLO CHIUSO [a;b]
    printf("I numeri interi positivi compresi nell'intervallo chiuso [a;b] sono:\n"); 
    
    for (int i = a;i<=b;i++ ){

         printf("%i \n",i);

    }
    
    return 0;
}
//FINE