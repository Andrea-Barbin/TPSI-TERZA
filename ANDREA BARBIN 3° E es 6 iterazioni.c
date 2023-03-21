// ANDREA BARBIN 3°E ES 6 iterazioni

/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri compresi maggiori uguali di -N e minori uguali di N.*/

// INIZIO
#include <stdio.h>

int main(int argc, char *argv[])
{
    // DICHIARAZIONE VARIABILI
    int n = 1;

    /*Assegno alla variabile che anrà a contenere il numero da inserire il valore 1 affinche' non venga stampata la segalazione
    di errore prima del  primo input.*/

    // CICLO DO WHILE PER ITERARE L'INPUT DEL NUMERO NEL CASO QUESTO SIA MINORE O UGUALE A 0
    // FASE DI INPUT NUMERO
    do
    {

        // FASE DI INPUT NUMERO
        if (n <= 0)
        {

            // SEGNALAZIONE DI ERRORE NEL CASO IN CUI IL NUMERO INSERITO SIA MINORE O UGUALE A 0
            printf("Errore, occorre inserire un numero positivo. Inserire nuovamente il numero:\n");
        }

        else
        {
            printf("Inserisci un numero intero positivo.\n");
        }

        scanf("%i", &n);

    } while (n <= 0);

    // FASE DI OUTPUT
    printf("----------------------------------------------\n");

    // CICLO FOR PER VISUALIZZARE I NUMERI INTERI POSITIVI COMPRESI NELL'INTERVALLO CHIUSO [a;b]
    printf("I numeri interi positivi compresi nell'intervallo chiuso [-n;n] sono:\n");

    for (int i = -n; i <= n; i++)
    {

        printf("%i \n", i);
    }

    return 0;
}
// FINE