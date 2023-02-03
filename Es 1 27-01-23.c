// ANDREA BARBIN 3°E ES 1 27-01-23
/*Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.*/

#include <stdio.h>
void main()
{
    float componente1, componente2, quoziente;
   

    do
    {
        printf("Inserisci i due valori:\n");
        scanf("%f", &componente1);
        scanf("%f", &componente2);

        if (componente1 < componente2){
            quoziente = componente1 / componente2 ;
        }
            
        else {
            quoziente = componente2/ componente1;
        }
            

        printf("Il rapporto dei due numeri è pari a : %f \n", quoziente, ".");
    } while (componente1 != 0 && componente2 != 0);
}