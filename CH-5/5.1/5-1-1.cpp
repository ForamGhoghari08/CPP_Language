#include <iostream>
using namespace std;

class A {
public:
    void calc(int a, int b) {
        cout << "Division: " << a / b << endl;
    }
    
    void calc(int a, int b, int c) {
        cout << "Subtraction: " << a - b - c << endl;
    }
    
    void calc(int a, int b, int c, int d) {
        cout << "Multiplication: " << a * b * c * d << endl;
    }
    
    void calc(int a, int b, int c, int d, int e) {
        cout << "Addition: " << a + b + c + d + e << endl;
    }
};

int main() {
    A a1;
    
    a1.calc(10, 2);           
    a1.calc(10, 5, 3);        
    a1.calc(2, 3, 4, 5);      
    a1.calc(1, 2, 3, 4, 5);   
    
    return 0;
}

