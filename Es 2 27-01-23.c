// ANDREA BARBIN 3°E ES 2 27-01-23
/*Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
0 (zero)
• per ogni coppia di numeri letti:
◦ calcoli il prodotto dei due numeri e ne stampi il valore
◦ sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
• all’uscita del ciclo, stampi il valore della somma*/

#include <stdio.h>
void main()
{
    int numero1, numero2, prodotto, somma = 0;
    do
    {
        printf("Inserire il primo numero: \n");
        scanf("%d", &numero1);
        printf("Inserire il  secondo numero: \n");
        scanf("%d", &numero2);
        prodotto = numero1 * numero2;
        somma = somma + prodotto;
        printf("Il prodotto dei due numeri è pari a: %d\n", prodotto);
    } while (numero1 != 0 && numero2 != 0);
    printf("La somma finale e' di: %d\n", somma);
}