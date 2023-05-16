//PAG 241 ES 27
#include <stdio.h>
#include <string.h>

void copiaContenuto (char *str1, char *str2, int lungh1, int lungh2) {
    
    int lunghTot=lungh1+lungh2;
    
    int j=0, i;

    for (i=lungh2;i<lunghTot;i++){
        
        *(str2+i)=*(str1+j);
        j++;
    }
    
    *(str2+i) = '\0';  
}

int main() {
    char str1[100], str2[100];
    int lungh1, lungh2;
    
    printf("Inserisci la prima stringa: ");
    scanf("%s", str1);
    lungh1=strlen(str1);
    
    printf("Inserisci la seconda stringa: ");
    scanf("%s", str2);
    lungh2=strlen(str2);
    
    printf("La prima stringa è \"%s\", la seconda è \"%s\". \n",str1,str2);
    copiaContenuto (str1,str2, lungh1,lungh2);
    printf("La loro concatenazione risulta \"%s\". \n", str2);
    return 0;
}