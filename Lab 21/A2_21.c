#include <stdio.h>

// Define the structure
struct Book {
    char title[100];
    char author[50];
    char publication[50];
    float price;
};

int main() {
    struct Book books[3];
    int i=0;
    // Read data for 3 books
    for (i = 0; i < 3; i++) {
        printf("Enter details for Book %d\n", i + 1);
        printf("Title: ");
        gets(books[i].title);
        printf("Author: ");
        gets(books[i].author);
        printf("Publication: ");
        gets(books[i].publication);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display data
    printf("\nBook Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publication: %s\n", books[i].publication);
        printf("Price: %.2f\n\n", books[i].price);
    }

    return 0;
}
