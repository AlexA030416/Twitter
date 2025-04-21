#include <stdio.h>
#include <string.h>

#define MAX_POST_LENGTH 500 // Define the maximum acceptable length for posted text

int main() {
    char input[10000]; // Array to store the user input
    printf("Enter your text:\n");
    fgets(input, sizeof(input), stdin); // Read user input

    // Remove the trailing newline character from the input
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Check the length of the input
    if (strlen(input) <= MAX_POST_LENGTH) {
        printf("Outcome: Posted\n");
    } else {
        printf("Outcome: Rejected\n");
    }

    return 0;
}
