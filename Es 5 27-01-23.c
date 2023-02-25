//ANDREA BARBIN 3°E ES 5 27-01-23

/*Progettare un algoritmo che effettui le seguenti operazioni: 
• continui a leggere da tastiera una serie di terne di valori interi A, B e C finchè non vengono inseriti dei valori 
tali per cui A + B < C 

• conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla

• prima di terminare, visualizzi il valore dei valori conteggiati*/

//INIZIO

#include <stdio.h>
  int main (int argc, char *argv[])
{
  //DICHIARAZIONE VARIABILI
  int a, b, c, diffAB, diffABPari = 0, diffABDispari = 0, diffABNulla = 0;

  //CICLO DO WHILE PER L'INPUT
  do
    {

      //FASE DI INPUT TERNA
      printf ("TERNA DI NUMERI\n");
      printf ("Inserisci il primo numero della terna:\n");
      scanf ("%i", &a);
      printf ("Inserisci il secondo numero della terna:\n");
      scanf ("%i", &b);
      printf ("Inserisci il terzo numero della terna:\n");
      scanf ("%i", &c);
     
      //CALCOLO DIFFERENZA
      diffAB = a - b;
      printf ("La differenza tra A e B è: %i \n",diffAB);
      printf ("\n");
      //ISTRUZIONE DI SELEZIONE PER INCREMENTARE CORRETTAMENTE I CONTATORI

          //DIFF PARI
          if (diffAB % 2 == 0)
    	{
    	  diffABPari++;
    	}
    
          //DIFF DISPARI
          else if (diffAB % 2 == 1)
    	{
    	  diffABDispari++;
    	}
    
          /*DIFF NULLA, occorre mettere if e non if else perchè se la differenza è pari può essere anche uguale a 0, 
          pertanto in tal caso occorre incrementare sia diffABNulla che diffABPari.*/ 
        if (diffAB == 0)
    	{
    	  diffABNulla++;
    	}
    

    }
  while (a + b < c);

//FASE DI OUTPUT
  printf
    ("Il numero delle volte in cui la differenza tra i primi due numeri risultata pari è: %i \n", diffABPari);
  printf
    ("Il numero delle volte in cui la differenza tra i primi due numeri risultata dispari è: %i \n", diffABDispari);
  printf
    ("Il numero delle volte in cui la differenza tra i primi due numeri risultata nulla è: %i \n", diffABNulla);
    
  return 0;
}

//FINE