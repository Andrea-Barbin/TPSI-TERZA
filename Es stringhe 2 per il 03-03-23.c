//ANDREA BARBIN 3°E ES STRINGHE 2 PER IL 03-03-23

/*2) Leggi una stringa e verifica se contiene doppie.*/


#include <stdio.h>
#include <string.h>
#define maxChar 100


//INIZIO

//DICHIARAZIONE DELLE VARIABILI

int main(int argc, char *argv[]){

  char stringa[maxChar]; //Questo array serve per inserire ogni lettera (char) che andrà a costituire la parola che si desidera esaminare.
  int nDoppie=0, i, lungStr;

  //FASE DI INPUT STRINGA
  printf("Inserire la stringa che si desidera esaminare:\n");
  scanf("%s", stringa);

  //FASE DI ELABORAZIONE 
  
  /*CICLO FOR per incrementare il contatore i e verificare che ci siano doppie 
  grazie all'istruzione di selezione che verifica se il carattere puntato nell'array dal ciclo è uguale al suo successivo.*/
  
  lungStr = strlen(stringa);
  
  for(i=0; i<lungStr; i++){
      if(stringa[i] == stringa[i+1])
        nDoppie++; // Nel caso il precedente sia uguale è uguale a quello precedente i allora è presente una doppia
    }
    
//FASE DI OUTPUT
  if(nDoppie > 0){
      
      printf("Nella stringa sono presenti delle doppie."); 
  }
       
  else {
        
    printf("Nella stringa NON sono presenti caratteri doppi.");  
  }

  return 0;
  
  //FINE
}