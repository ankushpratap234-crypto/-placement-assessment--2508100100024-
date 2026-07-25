// longest substring without repeating character
#include <stdio.h>
#include <string.h>

int lengthoflongestsubstring(char* s) {
    int Index[255];
    int i;
    for (i = 0; i < 255; i++)
        Index[i] = -1;

    int maxlen = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (Index[(unsigned char)s[i]] >= start) {
            start = Index[(unsigned char)s[i]] + 1;
        }
        Index[(unsigned char)s[i]] = i;
        int len = i - start + 1;
        if (len > maxlen) maxlen = len;
    }

    return maxlen;
}

int main() {
    char s[] = "abcabcbbd";
    printf("%d\n", lengthoflongestsubstring(s)); 
    return 0;
}