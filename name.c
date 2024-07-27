#include <stdio.h>

int main() {
    char name[30]; // Create an array to store the name
    printf("Enter your name: "); // Prompt the user to input their name
    scanf("%s", name); // Get and save the name
    printf("Your name is %s.\n", name); // Print the name
    return 0;
}