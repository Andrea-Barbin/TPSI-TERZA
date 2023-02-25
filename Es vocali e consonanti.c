//ANDREA BARBIN 3°E ES PAROLA 

/*Scrivere un programa in C che dopo aver inserito una stringa (lunga a piacere) da tastiera conti quante vocali e
consonanti contiene.*/

#include <stdio.h>
#define maxChar 100

//INIZIO
int main(int argc, char *argv[])
{
    
    //DICHIARAZIONE VARIABILI
    char letteraInserita[maxChar]; //Questo array serve per inserire ogni lettera (char) che andrà a costituire la parola che si desidera esaminare.
    int i=0, nVocali = 0, nConsonanti = 0;
    
    //FASE DI INPUT STRINGA
    printf("Inserire la stringa stringa che si desidera esaminare: ");
    scanf("%s", letteraInserita);


    //CICLO DO WHILE per continuare ad inserire una lettera finchè non si inserisce uno spazio vuoto. questo permette di verificare quando finisce la parola e quindi la stringa.
    do
    {
        i++;
        
        //VERIFICO CHE LA LETTERA INSERITA SIA UGUALE A UNA DELLE VOCALI. Se inseriamo una lettera maiuscola il comando tolower la trasforma in minuscola.
        if (letteraInserita[i] == 'a' || tolower(letteraInserita[i]) == 'a' ||
            letteraInserita[i] == 'e' || tolower(letteraInserita[i]) == 'e' ||
            letteraInserita[i] == 'i' || tolower(letteraInserita[i]) == 'i' ||
            letteraInserita[i] == 'o' || tolower(letteraInserita[i]) == 'o' ||
            letteraInserita[i] == 'u' || tolower(letteraInserita[i]) == 'u')
           
        {
            nVocali++;
        }
        else {
            nConsonanti++;
        }
    } while (letteraInserita[i] != '\0');
    
    //FASE DI OUTPUT
    printf("Le consonanti presenti nella parola inserita sono %d \n", nConsonanti);
    printf("Le vocali presenti nella parola inserita sono %d \n", nVocali);

    return 0;
}

//FINE