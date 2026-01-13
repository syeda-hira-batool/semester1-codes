#include <stdio.h>
#include <string.h>

int main() {
    char password[100];  
    int length;

    printf("Enter your password (numbers and symbols only, no alphabets): ");
    scanf("%99[^\n]", password);

    length = strlen(password); 

    printf("\nYour entered password is: %s\n", password);
    printf("Password length: %d characters\n", length);

    return 0;
}
// This program reads a password containing numbers and symbols (excluding alphabets) using a negated scanset in scanf and then displays the password along with its length.