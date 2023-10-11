#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char username[40];
    char password[20];

    printf("Enter Your username: ");
    scanf("%s", username);

    printf("Enter Your password: ");
    scanf("%s", password);

    if (strcmp(username, "basant") == 0 && strcmp(password, "1234") == 0) {
        printf("Success Login\n");
    } else {
        printf("Failure Login\n");
    }

    return 0;
}