// Francesca Bruno 2B
// May 1st
// OOP 1
// EXTRA: Adding a library function that searches for a book in the vector by name, and displays the index of that book in the vector.
#include "Book.h"
#include "User.h"
#include "library.h"

// book
Book::Book(){
  // declares default values
  title = " ";
  author = " ";
  isbn = " ";
  num_copies = 2;
  num_borrowed = 0;
}

Book::Book(string t, string a, string i, int copies) {
  // declares real values already stored in variables
  title = t;
  author = a;
  isbn = i;
  num_copies = copies;
  num_borrowed = 0;
}

void Book::BookSetters(string t, string a, string i, int copies){
  // sets variables
  title = t;
  author = a;
  isbn = i;
  num_copies = copies;
  num_borrowed = 0;
}

void Book::borrowBook(){
  num_copies--;
  num_borrowed++;
}

void Book::returnBook(){
  num_copies++;
  num_borrowed--;
}

void Book::printBookInfo(){
  cout << "title: " << title << "\nauthor: " << author << "\nisbn: " << isbn << "\nnumber of copies: " << num_copies << "\nnumber borrowed: " << num_borrowed << "\n";
}

// the getters
string Book::getAuthor(){
  return author;
}

string Book::getTitle(){
  return title;
}

 string Book::getIsbn(){
   return isbn;
 }

 int Book::getNum_copies(){
   return num_copies;
 }

 int Book::getNum_borrowed(){
   return num_borrowed;
 }

// getting the getters
string Book::getAuthorGetters(Book b){
  return b.getAuthor();
}

string Book::getTitleGetters(Book b){
  return b.getTitle();
}

string Book::getIsbnGetters(Book b){
  return b.getIsbn();
}

int Book::getNum_borrowedGetters(Book b){
  return b.getNum_borrowed();
}

int Book::getNum_copiesGetters(Book b){
  return b.getNum_copies();
}



// user
User::User() {
  name = " ";
  id = " ";
  num_books_borrowed = 0;
}

User::User(string n, string i) {
  name = n;
  id = i;
  num_books_borrowed = 0;
}

void User::UserSet(string n, string i) {
  name = n;
  id = i;
  num_books_borrowed = 0;
}

void User::UborrowBook(Book& l) {
  num_books_borrowed++;
  l.borrowBook();
}

void User::returnBook(Book& l) {
  num_books_borrowed--;
  l.returnBook();
}

void User::printUserInfo(){
  cout << "name: " << name << "\nID: " << id << "\nNumber of books borrowed: " << num_books_borrowed << "\n";
}

// more getters
string User::getName(){
  return name;
}

string User::getID(){
  return id;
}

int User::getNum_Borrowed(){
  return num_books_borrowed;
}

// getters for getters
string User::getNameGetter(User u){
  return u.getName();
}

string User::getIDGetter(User u){
  return u.getID();
}

int User::getNum_BorrowedGetter(User u){
  return u.getNum_Borrowed();
}

// library
void library::addBook(Book Boook){
  books.push_back(Boook);
}

void library::addUser(User Jonathan){
  users.push_back(Jonathan);
}

void library::printBookList(){
  for (int i = 0; i < books.size(); i++) {
    cout << "\nTitle: " << books[i].getTitleGetters(books[i]) << "\nAuthor: " << books[i].getAuthorGetters(books[i]) << "\nISBN: " << books[i].getIsbnGetters(books[i]) << "\n# of copies: " << books[i].getNum_copiesGetters(books[i]) << "\n# borrowed: " << books[i].getNum_borrowedGetters(books[i]) << "\n";
    // this prints out every book in the vector in the library. This is very complicated so I will break it down. Example:
    // l.books[i].getTitleGetters(l.books[i])
    // l.books[i] gets the book at the index of the vector in the library
    // ...getTitleGetters(l.books[i]) gets the title of the book
    // all of this returns a string being the title of the book in the vector in the library. All the others work the same but they aquire different variables.
    
  }
}

void library::printUserList(){
  for (int i = 0; i < users.size(); i++) {
    cout << "\nname: " << users[i].getNameGetter(users[i]) << ". social security number: " << users[i].getIDGetter(users[i]) << "\n";
  }
}

// EXTRA: Adding a library function that searches for a book in the vector by name, and displays the index of that book in the vector.
void library::findBooks(string name){
  // uses linear search to find a book with the same title. prints out the index of that book in the list.
  for (int i = 0; i < books.size(); i++) {
    if (name == books[i].getTitleGetters(books[i])) {
      cout << name << " is at the " << i << "th index of the book list!\n";
    }
  }
}