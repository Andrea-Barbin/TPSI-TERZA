// ANDREA BARBIN 3°E es 8 iterazioni

/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.*/

// INIZIO
#include <stdio.h>

int main(int argc, char *argv[])
{
    // DICHIARAZIONE VARIABILI
    int numero = 1; // ASSEGNO IL VALORE 1 AL NUMERO PER EVITARE UNA SEGNALAZIONE DI ERRORE AL PRIMO INPUT

    // CICLO DO WHILE PER ITERARE L'INPUT DEL NUMERO NEL CASO QUESTO SIA MINORE O UGUALE A 0

    // FASE DI ELABORAZIONE DATI
    do
    {

        // FASE DI INPUT NUMERO
        if (numero <= 0)
        {

            // SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL NUMERO INSERITO SIA MINORE O UGUALE A 0
            printf("Errore, occorre inserire un numero positivo. Inserire nuovamente il numero:\n");
        }
        else
        {
            printf("Inserisci il numero di cui vuoi visualizzare i precedenti.\n");
        }

        scanf("%i", &numero);

    } while (numero <= 0);
    printf("------------------------------------------------------\n");
    // FASE DI OUTPUT

    // CICLO FOR PER VISUALIZZARE I PRIMI N NUMERI INTERI POSITIVI IN ORDINE DECRESCENTE
    printf("I numeri interi positivi minori o uguali del numero inserito sono:\n");
    for (int i = numero; i > 0; i--)
    {
        printf("%i \n", i);
    }

    return 0;
}
// FINE