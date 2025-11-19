#include <stdio.h>
#include <string.h>

void reverse(char*);

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    reverse(s);
    printf("Reversed: %s", s);
    return 0;
}

void reverse(char *s) {
    int i, j;
    char t;
    i = 0;
    j = strlen(s) - 1;

    while (i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}
