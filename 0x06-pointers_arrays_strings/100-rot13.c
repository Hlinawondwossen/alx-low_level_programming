#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rot13(char *str) {
    char *result = (char *)malloc(strlen(str) + 1);
    if (result == NULL) {
        printf("Memory allocation failed.");
        return NULL;
    }

    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++, j++) {
        char c = str[i];

        if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
            result[j] = c + 13;
        else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
            result[j] = c - 13;
        else
            result[j] = c;
    }

    result[j] = '\0';
    return result;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove trailing newline

    char *encoded = rot13(input);
    printf("Encoded string: %s\n", encoded);
    free(encoded);

    return 0;
}
