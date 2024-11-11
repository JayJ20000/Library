#ifndef LIBRARY_H
#define LIBRARY_H

#include <list>
#include <string>
#include "Book.h"

using namespace std;


class Library {
private:
    list<Book> books;  // List of books in the library

public:
    // Inserts a book into the library in sorted order
    void insert_sorted(Book book);

    // Searches for books by a specific author and displays them
    void find_author(string author_name);

    // Searches for a book by its title and displays it
    void find_album(string title);

    // Deletes a book based on its author and title
    bool delete_book(string author_name, string title);

    // Loads books from a file and adds them to the library
    void load_books(string filename);

    // Saves all books in the library to a file
    void save_books(string filename);

    // Displays all books in the library
    void display_books();
};

#endif