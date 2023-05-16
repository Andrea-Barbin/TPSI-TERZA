//PAG 241 ES 27
#include <stdio.h>
#include <string.h>

int main()
{
    int frasePalindroma = 0;
    char str[100];
    int lunghFrase = strlen(str);
    printf("Inserire una stringa\n");
    scanf("%s", str);
    frasePalindroma = verificaP(str, lunghFrase);

    if (frasePalindroma == 1)
    {
        	printf("La stringa \"%s\" è palindroma.\n\n", str);
    }
    else if (frasePalindroma == 0)
    {
       	 printf("La stringa \"%s\" NON è palindroma.\n\n", str);
    }
    
}

int verificaP(char *str, int lunghFrase)
{
    char *p = &str[strlen(str)] - 1;
   	 int palindroma = 0;

    for (int i = 0; i < strlen(str); i++)
    {
         if (*(str + i) == *(p - i))
         {
             palindroma = 1;
         }
        else
        {
            palindroma = 0;
        }
   }
    return palindroma;
}
