#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-={}[]|\\:;\"'<>,.?/";
    int password_length = 12; // change this as needed
    char password[password_length];
    srand(time(NULL));

    for (int i = 0; i < password_length; i++) {
        int random_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[random_index];
    }

    printf("Generated Password: %s\n", password);

    return 0;
}
