//PAG 240 ES 18 

void copiaContenuto (char *stringa1, char *stringa2) {
    while (*stringa1 != '\0') { 

        if (*stringa1 != ' ') { 
            *stringa2 = *stringa1;
            stringa2++; 
        }
        stringa1++; 
    }
    *stringa2 = '\0'; 
