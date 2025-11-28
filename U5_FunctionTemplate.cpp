Aim:
  // To learn function templates and template instantiation //

Algorithm:
        Step 1 : Create template T findMax(T a, T b).
        Step 2 : Use it with different types.

Program:
        #include <iostream>
        #include <string>
        using namespace std;
        template <typename T>
        T findMax(T a, T b) {
        return (a > b) ? a : b;
        }
        int main() {
        cout << "Max(int): " << findMax<int>(10, 20) << endl;
        cout << "Max(double): " << findMax(3.14, 2.72) << endl; // template argument
        deduction
        cout << "Max(string): " << findMax(string("apple"), string("banana")) << endl;
        return 0;
        }
