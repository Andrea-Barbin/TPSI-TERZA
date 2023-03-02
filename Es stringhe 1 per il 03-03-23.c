//ANDREA BARBIN 3°E ES STRINGHE 1 PER IL 03-03-23

/*1) Leggi una stringa e un carattere e, se il carattere è presente nella stringa, 
conta quante volte quel carattere è contenuto nella stringa.*/


#include <stdio.h>
#define maxChar 100

//INIZIO
int main(int argc, char *argv[])
{
    
    //DICHIARAZIONE VARIABILI
    char stringa[maxChar];//Questo array serve per inserire ogni lettera (char) che andrà a costituire la parola che si desidera esaminare.
    char carattere[maxChar];
    int presente=0, i=0;
    
    //FASE DI INPUT STRINGA
    printf("Inserire la stringa che si desidera esaminare:\n");
    scanf("%s",stringa);
    
    //INPUT CARATTERE DA CERCARE
    printf("Inserire il carattere che si desidera cercare:\n");
    scanf("%s",carattere);

    //CICLO DO WHILE per verificare se inserire una lettera finchè non si inserisce uno spazio vuoto. questo permette di verificare quando finisce la parola e quindi la stringa.
    
    do
    {
       
        
        //VERIFICO CHE IL CARATTERE INSERITO SIA PRESENTE NELLA STRINGA, IN CASO SI AUMENTA IL CONTATORE
        if (carattere[0] == stringa[i])
        {
            presente++;
        }
        
        i++;
        
    } while (i<=maxChar);
    
    //FASE DI OUTPUT
    printf("Le volte in cui Il carattere inserito appare nella stringa sono:%i \n ", presente);

    return 0;
}

//FINE