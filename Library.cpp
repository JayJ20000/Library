#include "Library.h"
#include <iostream>
#include <fstream>

using namespace std;

// Inserts a book into the list and sorts the list
void Library::insert_sorted(Book book) {
    books.push_back(book);  // Add book to the end of the list
    books.sort(); 
}

// Finds and displays books by the author
void Library::find_author(string author_name) {
    bool found = false;  // Check if any book by the author is found
    for (list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
        if (it->author_name == author_name) {  // Check if book's author matches
            it->display_book();  
            found = true;
        }
    }
    if (!found) {  // If no book by the author was found, display a message
        cout << "No books found by " << author_name << ".\n";
    }
}

// Finds and displays a book with the specified title
void Library::find_album(string title) {
    bool found = false;
    for (list<Book>::iterator it = books.begin(); it != books.end(); ++it) { // Iterate through the books
        if (it->title == title) {  // Check if book's title matches
            it->display_book();
            found = true;
        }
    }
    if (!found) { 
        cout << "No books found with the title " << title << ".\n";
    }
}

// Deletes a book with the specified author and title
bool Library::delete_book(string author_name, string title) {
    for (list<Book>::iterator it = books.begin(); it != books.end(); ++it) {  // Iterate through the books
        if (it->author_name == author_name && it->title == title) {  // Check if book's author and title match
            books.erase(it);  // Remove the book from the list
            cout << "Book '" << title << "' by " << author_name << " has been removed.\n";
            return true; 
        }
    }
    // If no book with the specified author and title was found, display a message
    cout << "Book '" << title << "' by " << author_name << " not found.\n";
    return false; 
}

// Loads books from a file and inserts them into the library
void Library::load_books(string filename) {
    ifstream file(filename);  // Open file for reading
    if (!file.is_open()) { 
        cout << "Failed to open file: " << filename << "\n";
        return;
    }

    string title, author, isbn;
    int pages, year;
    float price;

    // Read book details line by line and insert each book into the library
    while (getline(file, title) && getline(file, author)) {
        file >> pages;
        file.ignore(); 
        getline(file, isbn);
        file >> price;
        file >> year;
        file.ignore();  // Ignore the newline character after input
        
        // Create a new Book object and insert it into the sorted list
        Book newBook(title, author, pages, isbn, price, year);
        insert_sorted(newBook);
    }

    file.close();  // Close the file after reading
}

// Saves all books in the library to a file
void Library::save_books(string filename) {
    ofstream file(filename);  // Open file for writing
    if (!file.is_open()) {  // Check if file opening failed
        cout << "Failed to open file: " << filename << "\n";
        return;
    }

    // Write each book's details to the file
    for (list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
        file << it->title << "\n"
             << it->author_name << "\n"
             << it->pages << "\n"
             << it->isbn << "\n"
             << it->cover_price << "\n"
             << it->year << "\n";
    }

    file.close();
    cout << "Books have been saved to " << filename << "\n";
}

// Displays all books in the library
void Library::display_books() {
    if (books.empty()) {
        cout << "Library is empty.\n";
        return;
    }

    // Display each book in the library
    for (list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
        it->display_book();
        cout << "---------------------------\n";
    }
}
