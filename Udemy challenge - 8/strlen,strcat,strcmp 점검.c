#include<stdio.h>
#include<stdlib.h>


int stringLength(const char string[]) {
    int i = 0;
    while (string[i] != NULL) {
        i++;
    }
    return i;
}
void concat(char result[], const char str1[], const char str2[]) {
    int i, j;
    for (i = 0; str1[i] != NULL; i++) {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != NULL; j++) {
        result[i + j] = str2[j];
    }
    result[i + j] = NULL;
}

int equalStrings(const char s1[], const char s2[]) {
    int i = 0;
    
    while (s1[i] == s2[i] && s1[i] != NULL && s2[i] != NULL) {
        i++;
    }
    if (s1[i] == NULL && s2[i] == NULL) {
        printf("Equal\n");
    }
    else {
        printf("Not Equal\n");
    }
    
}

int main() {
    const char word1[] = "jason";
    const char word2[] = "ok";
    const char word3[] = "whatever";
    char result[50];

    printf("String Length of three words : word1:%d, word2:%d, word3:%d\n", stringLength(word1), stringLength(word2), stringLength(word3));
    concat(result, word2, word3);
    concat(result, word1, word2);
    printf("\n");
    printf("Strcmp: word1,word2 = %d, word2,word3 = %d", equalStrings("jason","jason"), equalStrings("jasons","jason"));

}

