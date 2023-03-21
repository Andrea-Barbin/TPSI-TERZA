// ANDREA BARBIN 3°E ES 7 iterazioni

/*Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente. */

// INIZIO
#include <stdio.h>

int main(int argc, char *argv[])
{

    // DICHIARAZIONE VARIABILI

    int numero = 2; /*Assegno alla variabile che conterrà il numero inserito
                    il valore 2 in modo tale che non venga stampata la segnalazione di errore al primo output.*/

    // FASE DI ELABORAZIONE DATI

    // CICLO DO WHILE PER ITERARE L'INPUT DEL NUMERO NEL CASO QUESTO SIA MINORE O UGUALE AD 1
    do
    {

        // FASE DI INPUT NUMERO
        if (numero <= 10)
        {

            // SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL NUMERO INSERITO SIA MINORE DI 0
            printf("Errore, occorre inserire un numero intero maggiore di 1. Inserire nuovamente il numero:\n");
        }
        else
        {
            printf("Inserisci il numero di cui vuoi visualizzare il precedente.\n");
        }

        scanf("%i", &numero);

    } while (numero <= 1);

    // FASE DI OUTPUT
    printf("Il precedente dell'ultimo numero inserito è %i", numero - 1); /*<-- CALCOLO PRECEDENTE*/
    printf(".");

    return 0;
}

// FINE