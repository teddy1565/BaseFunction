#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
取得不定長度的輸入字串然後修剪多餘的空間
*/
char *getInput(int length) {
    char *tmp = (char*) malloc(sizeof(char)*(length+1));
    char *result;
    scanf("%s", tmp);
    int leng = 0;
    for (int i=0;tmp[i]!='\n' && tmp[i]!='\0';i++) {
        leng++;
    }
    result = (char*) malloc(sizeof(char)*(leng+1));
    strcpy(result, tmp);
    free(tmp);
    return result;
}