🕧 Aim :
      // To implement a class Account that stores customer account details //

🕧 Algorithm :
              Step  1 : Start the program
              Step  2 : Define a class Account with accNo, name, and balance
              Step  3 : Define a function display() to show account details
              Step  4 : In main(), create two Account objects
              Step  5 : Assign values to data members
              Step  6 : Display the details
              Step  7 : Stop the program

🕧 Program :
          #include <iostream>
          using namespace std;
          class Account {
          public:
          int accNo;
          string name;
          float balance;
          void display() {
          cout << "Account No: " << accNo
          << ", Name: " << name
          << ", Balance: " << balance << endl;
          }
          };
          int main() {
          Account a1, a2;
          
          a1.accNo = 1001; a1.name = "Ramesh"; a1.balance = 25000.50;
          a2.accNo = 1002; a2.name = "Sita"; a2.balance = 40000.75;
          a1.display();
          a2.display();
          return 0;
          }
