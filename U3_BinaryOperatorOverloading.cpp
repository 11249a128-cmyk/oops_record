Aim:
   // To demonstrate the use of friend functions across two classes //

Algorithm: 
        Step 1 : Create classes Account and Loan.
        Step 2 : Declare a friend function checkEligibility() in both classes.
        Step 3 : Input balance and loan amount.
        Step 4 : Use the friend function to check eligibility and display result.

Program :
        #include <iostream>
        using namespace std;
        class Complex {
         float real, imag;
        public:
         void getData() {
         cout << "Enter real and imaginary parts: ";
         cin >> real >> imag;
         }
         Complex operator+(Complex c) {
         Complex temp;
         temp.real = real + c.real;
         temp.imag = imag + c.imag;
         return temp;
         }
         void display() {
         cout << real << " + " << imag << "i" << endl;
         }
        };
        int main() {
         Complex c1, c2, c3;
         c1.getData();
         c2.getData();
         c3 = c1 + c2;
         cout << "Sum = ";
         c3.display();
         return 0;
        }
