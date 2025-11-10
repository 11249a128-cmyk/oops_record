🕧Aim :
      // To create a class that represents books and displays their details//  

🕧Algorithm :
             Step 1 : Start the program
             Step 2 : Define a class Book with title, author, and price
             Step 3 : Define display() to print details
             Step 4 : In main(), create two objects
             Step 5 : Assign values to each object
             Step 6 : Display using display()
             Step 7 : Stop the program

🕧Program:
          #include <iostream>
          using namespace std;
          class Book 
          {
          public:
          string title;
          string author;
          float price;
          void display()
          {
          cout << "Title: " << title
          << ", Author: " << author
          << ", Price: Rs." << price << endl;
          }
          };
          int main() 
          {
          Book b1, b2;
          b1.title = "C++ Programming"; b1.author = "Bjarne Stroustrup"; b1.price = 750.50;
          b2.title = "Data Structures"; b2.author = "Mark Allen Weiss"; b2.price = 600.75;
          b1.display();
          b2.display();
          return 0;
          }
