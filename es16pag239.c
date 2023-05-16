//ES 16 PAG 239

#include <stdio.h>
#include <string.h>

int main()
{
    char stringa[100];
    int lunghStr;
    printf("Inserire la stringa\n");
    scanf("%s",stringa);
    lunghStr=strlen(stringa);
   
    togliPrimo(stringa, lunghStr);
    printf("La dopo aver cancellato il primo carattere è \"%s\". \n",stringa);
    
}

void togliPrimo(char* stringa, int lunghStr){
   
   for (int i=0; i<lunghStr;i++){
       *(stringa+i)=*(stringa+i+1);
   }
   return 0;
}
