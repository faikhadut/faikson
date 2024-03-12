#include <stdio.h>

int main() {
    int option;

    while (1) {
        printf("=======================\n");
        printf("Choose your action:\n");
        printf("List Developers [1]\n");
        printf("Print Group Logo [2]\n");
        printf("Print Group [3]\n");
        printf("Exit [4]\n");
        printf("=======================\n");
        
        printf("Please choose an option (1-4):\n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Listing Developers...\n");
                // Code for listing developers
                break;
            case 2:
                printf("Printing Group Logo...\n");
                // Code for printing group logo
                break;
            case 3:
                printf("Printing Group...\n");
                // Code for printing group
                break;
            case 4:
                printf("Exiting...\n");
                return 0; // Exit the program
            default:
                printf("Invalid option. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
















#include <stdio.h>

// Define a structure for developer
struct Developer {
    char name[50];
    char alias[20];
};

// Function to print the name and alias of two developers
void printDevelopers() {
    // Create instances of the structure for two developers
    struct Developer developer1 = {"John Doe", "JD"};
    struct Developer developer2 = {"Jane Smith", "JS"};

    // Print the name and alias of the first developer
    printf("Developer 1:\n");
    printf("Name: %s\n", developer1.name);
    printf("Alias: %s\n\n", developer1.alias);

    // Print the name and alias of the second developer
    printf("Developer 2:\n");
    printf("Name: %s\n", developer2.name);
    printf("Alias: %s\n\n", developer2.alias);
}

int main() {
    // Call the function to print the developers
    printDevelopers();

    return 0;
}
