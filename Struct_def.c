#include <stdio.h>
#include <string.h>

/*
struct B_STRUCT;
struct A_STRUCT
{
    struct B_STRUCT *bpoit;
};

struct B_STRUCT
{
    struct A_STRUCT *bpoit;
};
*/
struct BOOKS;
void printbook(struct BOOKS book);

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
    printbook(book01);
    return 0;
}

void printbook(struct BOOKS book)
{
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
}