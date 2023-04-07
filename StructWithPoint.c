#include <stdio.h>
#include <string.h>

//struct BOOKS;
struct BOOKS
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct BOOKS book01;
    strcpy(book01.title, "C Programming");
    strcpy(book01.author, "Nuha Ali");
    strcpy(book01.subject, "C Programming Tutorial");
    book01.book_id = 6495407;

    struct BOOKS *bookpoint;
    bookpoint = &book01;

    printf("Book title : %s\n", bookpoint->title);

    return 0;
}

