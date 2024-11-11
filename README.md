Overview
    This project is a management system. The project allows you to store, display, search, and delete books in a library. It supports reading and writing book information from and to a file. Books are stored in a sorted collection, and users can search for books by author or title. The system can also delete books based on author and title.

Features
    Insert Books: Add new books to the library in sorted order based on their title.
    Search by Author: Find and display all books written by a particular author.
    Search by Title: Find and display a book by its title.
    Delete Books: Remove a book from the library using both the author’s name and the title.
    Load Books: Load a list of books from a file.
    Save Books: Save the current list of books to a file.
    Display Books: Display all the books currently in the library.

Classes
    Book
        The Book class represents a single book that contains:

        title: The title of the book.
        author_name: The author of the book.
        pages: The number of pages in the book.
        isbn: The ISBN of the book.
        cover_price: The price of the book.
        year: The publication year of the book.

    Library
        The Library class represents the collection of books in the library that contains:

        insert_sorted(): Adds a new book to the library in sorted order.
        find_author(): Searches for books by a specific author.
        find_album(): Searches for a book by its title.
        delete_book(): Removes a book from the library by author name and title.
        load_books(): Loads books from a file into the library.
        save_books(): Saves the books in the library to a file.
        display_books(): Displays all books in the library.

How to compile and run
    Run "make"
    Then run the executable with "./library"

Challenges
    The main problem was getting it to run. The makefile was not making an executable so the program can be ran.
    Dealing with the attributes of the books when adding or deleting a book from a file
    Designing the main menu in the main file to be readable and working. Ran into many problems with getting the files to be read and printed out correctly
    Making sure the program can accept and ouptut error messages when the wrong file or data being read
    Handling memory! Allocating and deallocating pointers were a hassle to handle 