#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {

public:
    std::string title;       
    std::string author_name; 
    int pages;          
    std::string isbn;        
    float cover_price;  
    int year;           

    // Constructor to initialize a book objejct
    Book(std::string title, std::string author_name, int pages, std::string isbn, float cover_price, int year);

    // Operator to allow comparison 
    bool operator<(const Book& other); 

    // Function to display the details of the book
    void display_book(); 
};

#endif 