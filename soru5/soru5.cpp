

#include <stdio.h>
#include <string.h>

void removeDuplicates(char* str) {
    int i = 0;
    int j = 1;
    int len = strlen(str);
    while (j < len) {
        if (str[i] == str[j]) {
            j++;
        }
        else {
            i++;
            str[i] = str[j];
            j++;
        }
    }
    str[i + 1] = '\0';
}

int main() {
    char str[] = "DBAABDAB";
    removeDuplicates(str);
    printf("%s", str);
    return 0;
}

