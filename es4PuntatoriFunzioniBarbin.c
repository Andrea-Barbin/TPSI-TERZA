// ANDREA BARBIN 3° ES 4 PUNTATORI E FUNZIONI

/*Dato un array di dimensione massima pari a SHRT_MAX,
inserire in input un numero arbitrario di interi positivi.
L'inserimento termina quando viene inserito il valore -1.

Si mostri quindi un menu cosi strutturato:
    premere 1 per mostrare il contenuto dell'array
    premere 2 per inserire un elemento in coda
    premere 3 per modificare un elemento, se presente
    premere 4 per eliminare un elemento, se presente
    premere 5 per ricercare un elemento
    premere 6 per inserire un elemento in una certa posizione
    premere 7 per mostrare il contenuto dell'array all'inverso
    premere 8 per mostrare il valore massimo dell'array
    premere 0 per terminare

dopo ogni operazione il menu deve essere nuovamente mostrato.

osservazione:
SHRT_MAX è dichiarata in limits.h

Vincolo:
è obbligatorio strutturare il programma in funzioni*/

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int lughArr=SHRT_MAX;
    int array[lughArr];
    int n, *p = array, opt, nIns = 0;
    int inserimentoCoda; // VARIABILI PER LA 2° OPZIONE

    int nDaModificare, posModifica, sostituzione; // VARIABILI PER LA 3° OPZIONE
    bool presente = false;

    int eliminazione;           // VARIABILI PER LA 4° OPZIONE
    int nDaTrovare, posTrovato; // VARIABILI PER LA 5° OPZIONE
    int posIns, nuovoN;         // VARIABILI PER LA 6° OPZIONE
    int max = 0;                // VARIABILI PER L'8° OPZIONE

    do
    {

        printf("Inserire un numero casuale, se è diverso da -1, sarà possibile inserirne un altro.\n");
        scanf("%i", &array[nIns]);
        nIns++;

    } while (n > -1);

    do
    {
        printf("==============================MENU================================\n");
        printf("premere 1 per mostrare il contenuto dell'array\n");
        printf("premere 2 per inserire un elemento in coda\n");
        printf("premere 3 per modificare un elemento, se presente\n");
        printf("premere 4 per eliminare un elemento, se presente\n");
        printf("premere 5 per ricercare un elemento\n");
        printf("premere 6 per inserire un elemento in una certa posizione\n");
        printf("premere 7 per mostrare il contenuto dell'array all'inverso\n");
        printf("premere 8 per mostrare il valore massimo dell'array\n");
        printf("premere 0 per terminare\n");

        scanf("%i", &opt);

        switch (opt)
        {
        case 1:
            *p=*p+nIns;
            stampaArr(array, p);
            break;
        

        case 2:
            printf("Inserire un numero in coda.\n");

            scanf("%i", &inserimentoCoda);
            *p = *p + nIns;
            // array=insCoda(array, nIns);
            p = insCoda(array, nIns);

            break;
        case 3:
            printf("Inserire il numero da modificare.\n");
            scanf("%i", &nDaModificare);

            for (int i = 0; i < nIns && !presente; i++)
            {

                if (nDaModificare == array[i])
                {
                    presente = true;
                    posModifica = i;
                }
            }

            if (presente)
            {
                printf("Inserire il numero con cui deve essere sostituito il %i", array[posModifica]);
                scanf("%i", &sostituzione);
            }

            modificaN(array, nIns, posModifica);
            break;

        case 4:

            prinf("Inserire il il numero da calcellare.\n");
            scanf("%i", &eliminazione);
            eliminaElemento(array, eliminazione, nIns);
            break;

        case 5:

            printf("Inserire il numero da trovare.\n");
            scanf("%i", &nDaTrovare);
            posTrovato = trovaN(array, nIns, nDaTrovare);
            break;

        case 6:

            printf("Inserire la posizione in cui si vuole inserire l'elemento.\n");
            scanf("%i", &posIns);
            printf("Inserire il numero nuovo che non era presente.\n");
            scanf("%i", &nuovoN);
            array[posIns] = aggiungiN(array, posIns, nuovoN);
            break;

        case 7:

            
            inverti(array, nIns);
            break;

        case 8:

            max = Max(array, nIns);
            printf("Il numero massimo contenuto nell'array è %i", max);
            break;

        default:

            printf("Uscita dal menu' in corso...\n");
        }
    } while (opt > 0 && opt < 9);

    return 0;
}

// IMPLEMENTAZIONE OPZIONE 1
void stampaArr(int array[], int p)
{

    for (int i = 0; i < p; i++)
    {
        printf("%i", array[i]);
    }

    //return 0;
}


// IMPLEMENTAZIONE OPZIONE 2
int insCoda(int inserimentoCoda, int *p)
{
    int insAllaFine;
    *p = inserimentoCoda;
    insAllaFine = *p;

    return insAllaFine;
}

// IMPLEMENTAZZIONE OPZIONE 3
void modificaN(int array[], int sostituzione, int posModifica)
{

    array[posModifica] = sostituzione;
    return 0;
}

// IMPLEMENTAZIONE OPZIONE 4
void eliminaElemento(int array[], int nIns, int eliminazione)
{

    int ultimoElemento = nIns;

    for (int i = 0; i <= ultimoElemento; i++)
    {
        if (array[i] == eliminazione)
        {
            if (i != ultimoElemento)
            {
                for (int j = i; j < ultimoElemento; j++)
                {
                    array[j] = array[j + 1];
                }
            }
            ultimoElemento--;
        }
    }

    return 0;
}

// IMPLEMENTAZIONE OPZIONE 5
int trovaN(int array[], int nDaTrovare, int nIns)
{
    int posN;

    for (int i = 0; i < nIns; i++)
    {

        if (nDaTrovare == array[i])
        {
            posN = i;
        }
    }
    return posN;
}

// IMPLEMENTAZIONE OPZIONE 6

int aggiungiN(int array[], int nuovoN, int posIns)
{
    array[posIns] = nuovoN;

    return array[posIns];
}

// IMPLEMENTAZIONE OPZIONE 7

void inverti(int array[], int nIns)
{
    int arrInvertito[nIns];
    int i, j;

    for (i = 0, j = nIns; i < nIns; i++, j--)
    {
        arrInvertito[i] = array[j];
    }

    for (i = 0; i < nIns; i++)
    {

        array[i] = arrInvertito[i];
    }

    return 0;
}

// IMPLEMENTAZIONE OPZIONE 8
int Max(int array[], int nIns)
{
    int massimo = 0;

    for (int i = 0; i < nIns; i++)
    {
        if (array[i] > massimo)
        {
            massimo = array[i];
        }
    }
    return massimo;
}