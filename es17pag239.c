//ES 17 PAG 239

#include <stdio.h>

int trovaDim2 (int *array1, int dimArr1, int *array2) {
    int dimArr2 = 0;
    for (int i = 0; i < dimArr1; i++) {
        if (*(array1 + i) > 0) {
            *(array2 + dimArr2) = *(array1 + i);
            dimArr2++;
        }
    }
    return dimArr2;
}

int main() {
    int array1 [] = {-2, 3, -5, 7, 0, 2};
    int dimArr1 = 6;
    int array2[dimArr1];
    int dimArr2= trovaDim2 (array1, dimArr1, array2);
    printf("La dimensione del PRIMO vettore è : %d\n", dimArr1);
    printf("La dimensione del SECONDO vettore è: %d\n", dimArr2);
    printf("I valori contenuti nel secondo vettore sono: ");
    for (int i = 0; i < dimArr2; i++) {
        printf("%d ", *(array2 + i));
    }
    return 0;
}
