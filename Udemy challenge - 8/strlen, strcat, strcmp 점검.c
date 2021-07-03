#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool equalStrings(const char s1[], const char s2[]) {
    int i = 0;
    bool inEquals = false;
    while (s1[i] == s2[i] && s1[i] != NULL && s2[i] != NULL) {
        i++;
    }
    if (s1[i] == NULL && s2[i] == NULL) {
        inEquals = true;
    }
    else {
        inEquals = false;
    }
    return inEquals;
}

int main() {
    const char word1[] = "jason";
    const char word2[] = "ok";
    const char word3[] = "whatever";
    char result[50];

    printf("String Length of three words : word1:%d, word2:%d, word3:%d\n", stringLength(word1), stringLength(word2), stringLength(word3));
    
    concat(result, word2, word3);
    printf("result = %s\n", result);
    concat(result, word1, word2);
    printf("result = %s\n", result);
  
    printf("Strcmp 같은면 1, 다르면 0 반환: (jason, jason) = %d, (jasons, jason) = %d", equalStrings("jason","jason"), equalStrings("jasons","jason"));

}

