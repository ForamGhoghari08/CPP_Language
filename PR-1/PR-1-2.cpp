#include <iostream>
using namespace std;

class TimeConverter {
public:
    void convert(int seconds) {
        int hours;
		int minutes; 
		int remainingSeconds;

        hours = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        remainingSeconds = seconds % 60;

        cout << "Output: " << hours << ":" << minutes << ":" << remainingSeconds << endl;
    }
};

int main() {
    TimeConverter t;

    
    int inputSeconds;
    cout << "Enter seconds: ";
    cin >> inputSeconds;

    
    t.convert(inputSeconds);

    return 0;
}

