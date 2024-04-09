#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    Distance(int ft = 0, int in = 0) : feet(ft), inch(in) {}

    Distance add(const Distance& D) const {
        Distance result;
        result.feet = feet + D.feet;
        result.inch = inch + D.inch;

        if (result.inch >= 12) {
            result.feet += result.inch / 12;
            result.inch %= 12;
        }

        return result;
    }

    void display() const {
        cout << feet << " feet " << inch << " inch" << endl;
    }

    void setInput() {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inch: ";
        cin >> inch;
    }
};

int main() {
    
    Distance input1, input2;

    cout << "Distance 1:" << endl;
    input1.setInput();

    cout << "\nDistance 2:" << endl;
    input2.setInput();

    
    Distance result = input1.add(input2);

   
    cout << "\nOutput:" << endl;
    result.display();

    return 0;
}

