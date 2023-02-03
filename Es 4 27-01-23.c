// ANDREA BARBIN 3°E ES 4 27-01-23

/* Progettare un algoritmo che effettui la lettura da tastiera di una serie
di coppie di valori numerici reali (sia positivi che negativi che zero).
Per ciascuna coppia, l'algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello
minore dei due. Il programma termina quando vengono inseriti dei valori
che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indica la
ragione per cui non è stato possibile svolgere il calcolo. */



#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, quoziente;
    do
    {
        printf("Inserisci il primo numero:\n");
        scanf("%f", &a);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &b);
        if (a < b)
            quoziente = a / b;
        else
            quoziente = b / a;
        if (quoziente > 0)
        {
            quoziente = sqrt(quoziente);
            printf("La radice quadrata del rapporto è: %f\n", quoziente);
        }
        else
            printf("Non è possibile calcolare la radice di un numero se esso è minore di 0.");
    } while (a > 0 && b > 0);
}