#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string title, string author_name, int pages, string isbn, float cover_price, int year) : title(title), author_name(author_name), pages(pages), isbn(isbn), cover_price(cover_price), year(year) {}

void Book::display_book(){
    cout << "Title: " << title << "\n"
         << "Author: " << author_name << "\n"
         << "Pages: " << pages << "\n"
         << "ISBN: " << isbn << "\n"
         << "Cover Price: $" << cover_price << "\n"
         << "Year: " << year << "\n";
}
 
// bool Book::operator<(const Book& other){
//     return title < other.title;
// }
