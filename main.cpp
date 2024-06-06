// Francesca Bruno 2B
// May 1st
// OOP 1
// EXTRA: Adding a library function that searches for a book in the vector by name, and displays the index of that book in the vector.
// EXTRA 2: Making an option to print both lists for user convinence
#include <iostream>
#include "Book.h"
#include "User.h"
#include "library.h"
using namespace std;

int main() {
  // adding the user to the userbase
  string t, t2, t3, t4;
  int T, T2, T3, T4, c;
  bool m = true;
  library l;
  cout << "Welcome to the Ultimate Library System!\nLet me add you into the userbase. Enter your name, and then enter a unique username for your ID\n";
  cin >> t;
  cin >> t2;
  User U = User(t, t2);
  l.addUser(U);

  // Adding a book so we can use the rest of the functions
  cout << "\nGreat! Now we should probably add a book to this library...\nEnter the title, author, isbn, and then the number of copies in that order.\n";
  cin >> t;
  cin >> t2;
  cin >> t3;
  cin >> T;
  Book b = Book(t, t2, t3, T);
  l.addBook(b);

  // using some of the functions
  while (m) {
    cout <<"\nWhat functions do you want to use? Enter the cooresponding number to select\n1) Borrow the book\n2) Return the book\n3) See the book's info\n4) print the User's info\n5) Print the book list\n6) Print the User list\n7) Add a new book\n8) Add a new user\nOther #) View all info";
    cin >> c;
    switch(c){
      case 1:
        U.UborrowBook(b);
        break;
      case 2:
        U.returnBook(b);
        break;
      case 3:
        b.printBookInfo();
        break;
      case 4:
        U.printUserInfo();
        break;
      case 5:
        l.printBookList();
        break;
      case 6:
        l.printUserList();
        break;
      case 7:
        cout << "\nGreat! Now we should probably add a book to this library...\nEnter the title, author, isbn, and then the number of copies in that order.\n";
        cin >> t;
        cin >> t2;
        cin >> t3;
        cin >> T;
        b.BookSetters(t, t2, t3, T);
        l.addBook(b);
        break;
      case 8:
        cout << "Welcome to the Ultimate Library System!\nLet me add you into the userbase. Enter your name, and then enter a unique username for your ID\n";
        cin >> t;
        cin >> t2;
        U.UserSet(t, t2);
        l.addUser(U);
        break;
      default:
        // EXTRA: adding something that prints both lists for user convinience
        l.printBookList();
        cout << "\nBooks up, Users down\n";
        l.printUserList();
        break;
    }
    cout << "\nWould you like to go through the menu again?\ntype YES to continue. anything else will be considered a NO\n";
    cin >> t;
    if (t == "YES"){
      m = true;
    } else {
      m = false;
    }
  }
}