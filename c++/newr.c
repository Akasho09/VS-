#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    char specialChar;
    int spaceCount = 0, tabCount = 0, sentenceCount = 0, vowelCount = 0, paragraphCount = 0;

    // Prompt the user to enter the special character for ending the input
    printf("Enter the special character to end input: ");
    scanf(" %c", &specialChar);

    printf("Enter the text (use '%c' to end input):\n", specialChar);

    // Read and display the text until the special character is encountered
    char currentChar;
    while (1) {
        scanf("%c", &currentChar);

        if (currentChar == specialChar) {
            break;
        }

        // Display the character
        printf("%c", currentChar);

        // Count spaces, tabs, sentences, vowels, and paragraphs
        if (currentChar == ' ') {
            spaceCount++;
        } else if (currentChar == '\t') {
            tabCount++;
        } else if (currentChar == '.' || currentChar == '?' || currentChar == '!') {
            sentenceCount++;
        } else if (currentChar == '\n') {
            paragraphCount++;
        }

        // Check for vowels
        if (isalpha(currentChar)) {
            char lowercaseChar = tolower(currentChar);
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
                vowelCount++;
            }
        }
    }

    // Replace multiple spaces with a single space
    printf("\nAfter replacing multiple spaces with single space:\n");

    // Read the text again, this time replacing multiple spaces
    int consecutiveSpaces = 0;
    while (1) {
        scanf("%c", &currentChar);

        if (currentChar == specialChar) {
            break;
        }

        if (currentChar == ' ') {
            consecutiveSpaces++;
        } else {
            if (consecutiveSpaces > 1) {
                printf(" ");
            }
            printf("%c", currentChar);
            consecutiveSpaces = 0;
        }
    }

    // Print the results
    printf("\n\nResults:\n");
    printf("Number of spaces: %d\n", spaceCount);
    printf("Number of tabs: %d\n", tabCount);
    printf("Number of sentences: %d\n", sentenceCount);
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of paragraphs: %d\n", paragraphCount);

    return 0;
}
