#include "task1.h"
#include "ctype.h"
#include <stdio.h>

void str_lower(char *orig, char *copy){
    int l = strlen(*orig);
    for (int i = 0; i < l; i ++){
        copy[i] = tolower(orig[i]);
    }

    copy[l] = '\0';
}

void str_lower_mutate(char *orig){
    int l = strlen(*orig);
    for (int i = 0; i < l; i ++){
        orig[i] = tolower(orig[i]);
    }
}