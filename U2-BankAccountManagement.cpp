🕧Aim :
     // To implement constructor overloading and static member variables in C++ using a bank account //

🕧Algorithm :
              Step 1 :  Start the program
              Step 2 :  Define class BankAccount with members: accNo, name, balance, and static count
              Step 3 : Create a default constructor and a parameterized constructor
              Step 4 : Create a static member function to show account count
              Step 5 : Define functions deposit() and withdraw()
              Step 6 : Create multiple objects to test constructors and count
              Step 7 : Display outputs
              Step 8 : Stop the program

🕧Program :
            #include <iostream>
            using namespace std;
            class BankAccount 
            {
            int accNo;
            string name;
            float balance;
            static int count;
            public:
            BankAccount() { accNo=0; name=""; balance=0; count++; }
            BankAccount(int a, string n, float b) 
            {
            accNo=a; name=n; balance=b; count++;
            }
            b1.display();
            void deposit(float amt) { balance += amt; }
            void withdraw(float amt) { balance -= amt; }
            
            void display() 
            {
            cout<<"Acc No: "<<accNo<<", Name: "<<name
            <<", Balance: "<<balance<<endl;
            }
            
            static void showCount() 
            {
            cout<<"Total Accounts: "<<count<<endl;
            }
            };
            int BankAccount::count=0;
            
            int main() 
            {
            BankAccount b1, b2(1001,"Arjun",25000.75), b3(1002,"Meena",40000.50);
            b1.deposit(5000);
            b2.withdraw(2000);
            b2.display();
            b3.display();
            BankAccount::showCount();
            return 0;
            }
