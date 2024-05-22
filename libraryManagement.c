#include <stdio.h>
#include <string.h>

void addBook();
void displayBookInfo();
void searchBook();
void exitLibrary();

int main() {
    printf("-----------Main Menu----------\n\n");
    printf("1. Add Books\n");
    printf("2. Display book information\n");
    printf("3. Search Books ( Book Status )\n");
    printf("4. Exit\n\n");

    int choice;
    printf("Enter : ");
    scanf("%d", &choice);
    printf("\n\n");

    switch (choice) {
        case 1:
            addBook();
            break;
        case 2:
            displayBookInfo();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            exitLibrary();
            break;
        default:
            printf("Invalid choice! Please try again.\n");
    }
    return 0;
}

void addBook() {
    printf("You can add book information\n\n");
    printf("Choose the category : \n\n");
    printf("1. Computer\n");
    printf("2. Electronics\n");
    printf("3. Mechanical\n\n");

    int category;
    printf("Choose a category : ");
    scanf("%d", &category);
    printf("\n\n");

    char *categories[] = {"Computer", "Electronics", "Mechanical"};
    char *books[][3] = {
        {"Introduction to C", "Introduction to Python", "Introduction to R Programming"},
        {"Practical Electronics for Inventors", "The Art of Electronics", "FUNDAMENTALS OF DIGITAL CIRCUITS"},
        {"Introduction to Autocad", "Fundamentals of Thermodynamics", "Mechanical Engineering : Conventional and Objective Type"}
    };

    if (category >= 1 && category <= 3) {
        printf("You have chosen %s category\n\n", categories[category - 1]);
        for (int i = 0; i < 3; i++) {
            printf("%d. %s\n", i + 1, books[category - 1][i]);
        }

        int bookChoice;
        printf("\nChoose a book : ");
        scanf("%d", &bookChoice);
        printf("\n\n");

        if (bookChoice >= 1 && bookChoice <= 3) {
            printf("You have chosen %s book\n\n", books[category - 1][bookChoice - 1]);

            char bookName[50];
            char authorName[50];
            int pages, price;

            printf("Book Name : ");
            scanf("%s", bookName);
            printf("\n\n");

            printf("Author Name : ");
            scanf("%s", authorName);
            printf("\n\n");

            printf("Pages : ");
            scanf("%d", &pages);
            printf("\n\n");

            printf("Price : ");
            scanf("%d", &price);
            printf("\n\n");
        } else {
            printf("Invalid book choice!\n");
        }
    } else {
        printf("Invalid category choice!\n");
    }
}

void displayBookInfo() {
    // Placeholder for displaying book information
    printf("Displaying book information is not yet implemented.\n");
}

void searchBook() {
    printf("You can search the book ( Book Status )\n\n");
    printf("Press the code: 123 for Introduction to C\n");
    printf("Press the code: 456 for Introduction to Python\n");
    printf("Press the code: 789 for Introduction to R Programming\n");
    printf("Press the code: 523 for Practical Electronics for Inventors\n");
    printf("Press the code: 759 for The Art of Electronics\n");
    printf("Press the code: 157 for FUNDAMENTALS OF DIGITAL CIRCUITS\n");
    printf("Press the code: 359 for Introduction to Autocad\n");
    printf("Press the code: 153 for Fundamentals of Thermodynamics\n");
    printf("Press the code: 104 for Mechanical Engineering : Conventional and Objective Type\n\n");

    int code;
    printf("Enter the book to search ( USE THE CODE ): ");
    scanf("%d", &code);
    printf("\n");

    switch (code) {
        case 123:
            printf("Book Name : Introduction to C\nBook Status : 2 Copies left\n");
            break;
        case 456:
            printf("Book Name : Introduction to Python\nBook Status : 10 Copies left\n");
            break;
        case 789:
            printf("Book Name : Introduction to R Programming\nBook Status : 1 Copy left\n");
            break;
        case 523:
            printf("Book Name : Practical Electronics for Inventors\nBook Status : 20 Copies left\n");
            break;
        case 759:
            printf("Book Name : The Art of Electronics\nBook Status : 30 Copies left\n");
            break;
        case 157:
            printf("Book Name : FUNDAMENTALS OF DIGITAL CIRCUITS\nBook Status : 18 Copies left\n");
            break;
        case 359:
            printf("Book Name : Introduction to Autocad\nBook Status : Out Of Stock\n");
            break;
        case 153:
            printf("Book Name : Fundamentals of Thermodynamics\nBook Status : 5 Copies left\n");
            break;
        case 104:
            printf("Book Name : Mechanical Engineering : Conventional and Objective Type\nBook Status : 4 Copies left\n");
            break;
        default:
            printf("Invalid code! Please try again.\n");
    }
}

void exitLibrary() {
    printf("The library management is closed\n\n");
    printf("Have a nice day\n");
}