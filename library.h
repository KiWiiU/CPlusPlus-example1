#ifndef LIBRARY_H
#define LIBRARY_H
// deffining the file to be accessed
#include <vector>
#include <iostream>
using namespace std;
#include "User.h"
#include "Book.h"

class library {
// this represents the library data
  private:
    vector<Book>books; // a vector to store all book objects
    vector<User>users; // a vector to store all user objects

  public:
    void addBook(Book); // adds a new book to the vector
    void addUser(User); // adds a new user to the vector
    void printBookList(); // prints list of books
    void printUserList(); // prints list of users
/*
    ~library() {
      cout << "\nThe library is destroyed\n";
    }
*/
    // EXTRA DOWN HERE
    void findBooks(string); // this takes the name of a book, and searches the book list to see if it can find a book with that name. If it does, it will print the index of the book in the vector
};
#endif