#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    string title;
    string author_name;
    int pages;
    string isbn;
    float cover_price;
    int year;

    Book(string title, string author_name, int pages, string isbn, float cover_price, int year);
    void display_book(); 
    // bool operator<(const Book& other); 
};

#endif
