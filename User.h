#ifndef USER_H
#define USER_H
// deffining the file to be accessed
#include <vector>
#include <iostream>
using namespace std;

class User {
// this is for storing user data, such as name, id, and the number of books they are borrowing
  private:
    string name, id;
    int num_books_borrowed;
// getters
    string getName();
    string getID();
    int getNum_Borrowed();

  public:
    User(); // default values
    User(string, string); // real values
    void UserSet(string, string); // setter
    void UborrowBook(Book&); // increases number of books borrowed
    void returnBook(Book&); // decreases number of books borrowed
    void printUserInfo(); // prints user info
/*
    ~User() {
      cout << "\nThe user is destroyed\n";
    }
*/
// get getters
    string getNameGetter(User);
    string getIDGetter(User);
    int getNum_BorrowedGetter(User);
};
#endif