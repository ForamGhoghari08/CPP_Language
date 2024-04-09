#include <iostream>
using namespace std;

class Vote{
	private :
		int age;
public:
    void setData() {
    	cout << "Enter your age: ";
    	cin >> age;

        if (age < 18) {
            throw 0; 
        } else {
            cout << "You are eligible to vote!" << endl;
        }
    }
};

int main() {
    Vote v1;
    
    try {
        v1.setData();
    } catch (int error) {
        if (error == 0) {
            cout << "You are not eligible to vote as you are under 18 years old." << endl;
        } else {
            cout << "Errer" << endl;
        }
    }
}
