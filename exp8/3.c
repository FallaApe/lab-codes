#include <stdio.h>

struct books {
    int book_id;
    char title[50];
    char author[50];
    int price;
};

void output(struct books b);   

void main() {
    struct books b;

    printf("Enter book ID: ");
    scanf("%d", &b.book_id);
    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Enter book author: ");
    scanf("%s", b.author);
    printf("Enter book price: ");
    scanf("%d", &b.price);

    output(b);   
}

void output(struct books b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Book Title: %s\n", b.title);
    printf("Book Author: %s\n", b.author);
    printf("Book Price: %d\n", b.price);
}
