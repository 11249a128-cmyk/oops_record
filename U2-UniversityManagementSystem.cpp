🕧Aim :
      // To demonstrate constructors, destructors, and nested objects in C++ //

🕧Algorithm :
            Step 1 : Start the program
            Step 2 : Define class Department with data members and constructor
            Step 3 : Define class University that contains a Department object
            Step 4 : Initialize data using constructors
            Step 5 : Display data
            Step 6 : Use destructor to indicate object destruction
            Step 7 : Stop the program

🕧Program :
          #include <iostream>
          using namespace std;
          
          class Department 
          {
          public:
          string deptName;
          Department(string d) 
          {
          deptName = d;
          cout<<"Department "<<deptName<<" created."<<endl;
          }
          ~Department() 
          {
          cout<<"Department "<<deptName<<" destroyed."<<endl;
          }
          };
          class University
          {
          string uniName;
          Department dept;
          public:
          University(string u, string d) : uniName(u), dept(d)
          {
          cout<<"University "<<uniName<<" initialized."<<endl;
          }
          void display()
          {
          cout<<"University: "<<uniName<<", Department: "<<dept.deptName<<endl;
          }
          ~University() 
          {
          cout<<"University "<<uniName<<" closed."<<endl;
          }
          };
          int main() 
          {
          University u1("SCSVMV University","Computer Science");
          u1.display();
          return 0;
          }
