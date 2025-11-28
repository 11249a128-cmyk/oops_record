Aim:
   // To demonstrate constructor/destructor order in inheritance //

Algorithm:
        Step 1 : Define Book base and LibraryBook derived class.
        Step 2 : Add constructors and destructors printing messages.

Program:
        #include <iostream>
        using namespace std;
        class Book {
        public:
        Book() { cout << "Base class Book constructor\n"; }
        ~Book() { cout << "Base class Book destructor\n"; }
        };
        class LibraryBook : public Book {
        public:
        LibraryBook() { cout << "Derived class LibraryBook constructor\n"; }
        ~LibraryBook() { cout << "Derived class LibraryBook destructor\n"; }
        };
        int main() {
        LibraryBook lb;
        }
