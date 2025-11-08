🕧 Aim :
        // To write a C++ program to represent laptop details using classes and objects //

🕧 Algorithm :
            step 1 : Start the program.
            step 2 : Define a class Laptop with data members brand, processor, and ram.
            step 3 : Define the member function display() to print laptop details.
            step 4 : In main(), create two objects l1 and l2.
            step 5 : Assign values to the data members.
            step 6 : Call display() for each object.
            step 7 : Stop the program.

🕧 Program : 
            #include<iostream>
            using namespace std;
            
            class laptop {
            public:
                string brand;
                string processor;
                int ram;
            
                void display() {
                    cout << "Brand: " << brand
                         << ", Processor: " << processor
                         << ", RAM: " << ram << "GB" << endl;
                }
            };
            
            int main() {
                laptop l1, l2;
            
                l1.brand = "Dell";
                l1.processor = "Intel i5";
                l1.ram = 8;
            
                l2.brand = "HP";
                l2.processor = "AMD Ryzen 5";
                l2.ram = 16;
            
                l1.display();
                l2.display();
            
                return 0;
            }
