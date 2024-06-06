// Francesca Bruno 2B
// May 1st
// OOP 1
// EXTRA: Adding a library function that searches for a book in the vector by name, and displays the index of that book in the vector.
#ifndef BOOK_H
#define BOOK_H
// deffining the file to be accessed
#include <vector>
#include <iostream>
using namespace std;

class Book {
// this is the book which has the title, author, isbn, number of copies currentley avaliable, and the number of copies that are being borrowed.
  private:
    string title, author, isbn;
    int num_copies, num_borrowed;
  // these are the getters
    string getTitle();
    string getAuthor();
    string getIsbn();
    int getNum_copies();
    int getNum_borrowed();

  public:
    Book(); // sets default values
// this is a default constructor. It is called this because it has no parameters.
    Book(string, string, string, int); 
    void BookSetters(string, string, string, int); // setter
/*
    ~Book() {
      cout << "\nThe book is destroyed\n";
    }
*/
// these getters get the getters that get the values
    string getTitleGetters(Book);
    string getAuthorGetters(Book);
    string getIsbnGetters(Book);
    int getNum_copiesGetters(Book);
    int getNum_borrowedGetters(Book);
// this is a destructor. This destroys the object and notifies the user
    void borrowBook(); // increases number borrowed, and decreases number of copies
    void returnBook(); // does the opposite of borrowBook()
    void printBookInfo(); // prints the book's info
};

#endif