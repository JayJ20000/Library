#include "Book.h"
#include <iostream>
using namespace std;

// Constructor for the Book class that initializes all member variables
Book::Book(string title, string author_name, int pages, string isbn, float cover_price, int year) : title(title), author_name(author_name), pages(pages), isbn(isbn), cover_price(cover_price), year(year) {}

// Function to display the details of the book
void Book::display_book() {
    cout << "Title: " << title << "\n"            
         << "Author: " << author_name << "\n"     
         << "Pages: " << pages << "\n"            
         << "ISBN: " << isbn << "\n"              
         << "Cover Price: $" << cover_price << "\n" 
         << "Year: " << year << "\n";          
}

// operator to allow sorting by title in ascending order
bool Book::operator<(const Book& other) {
    return title < other.title;
}
