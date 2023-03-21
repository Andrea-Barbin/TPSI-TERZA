// ANDREA BARBIN 3°E es 10 iterazioni

/*Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri interi.*/

// INIZIO
#include <stdio.h>

int main(int argc, char *argv[])
{
    // DICHIARAZIONE VARIABILI
    int numero = 1, somma = 0; // ASSEGNO IL VALORE 1 AL NUMERO PER EVITARE UNA SEGNALAZIONE DI ERRORE AL PRIMO INPUT

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
            printf("Inserisci un numero intero positivo.\n");
        }

        scanf("%i", &numero);

    } while (numero <= 0);

    printf("------------------------------------------------------\n");
    // CICLO FOR PER CALCOLARE LA SOMMA DEI NUMERI INTERI POSITIVI <= DI N

    printf("I numeri interi positivi minori o uguali del numero inserito sono:\n");
    for (int i = 0; i <= numero; i++)
    {
        printf("%i \n", i);
        somma += i;
    }

    // FASE DI OUTPUT

    printf("------------------------------------------------------\n");
    printf("La somma dei numeri interi positivi minori o uguali all'ultimo numero inserito è pari a : %i \n", somma);
    return 0;
}
// FINE
