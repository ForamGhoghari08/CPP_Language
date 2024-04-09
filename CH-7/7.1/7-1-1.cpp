/*Write a Program to implement exception handling mechanism for different types of scenarios:
- a number cannot be divided by zero
- a person cannot be able to vote if his/her age is less than 18
- a password cannot be validated if it doesn’t contains an uppercase letter */

#include <iostream>
using namespace std;

class Eh {
    int c;

	public:
    	Eh() {
        	cout << "[1] Div by zero" << endl;
        	cout << "[2] Check voting eligibility (age must be 18 or older)" << endl;
        	cout << "[3] Validate password (must contain an uppercase letter)" << endl;
        	cout << ">>>Enter your choice: ";
        	cin >> this->c;

        	Handle();
   	 }

    	void Handle() {
        	switch (this->c) {
            	case 1:
                	DivByZero();
                	break;

            	case 2:
                	VotingEligibility();
                	break;

            	case 3:
                	ValidatePassword();
                	break;

            	default:
                	cout << "Invalid Input !!" << endl;
                	break;
       		}
    	}

	private:
    	void DivByZero() {
        	int a, b;
        	string errMsg = "Error: Div by zero not allowed";

        	cout << "Enter A: ";
        	cin >> a;
        	cout << "Enter B: ";
        	cin >> b;

        	try {
            	if (b != 0)
                	cout << "Result: " << a / b << endl;
            	else
                	throw errMsg;
        	} catch (string errMsg) {
          	  cout << errMsg << endl;
       	}
    }	

    	void VotingEligibility() {
        	int age;

        	cout << "Enter your Age: ";
        	cin >> age;

        	try {
            	if (age >= 18)
                	cout << "You are eligible to vote !!" << endl;
           		else
                	throw false;
        	} catch (bool isEligible) {
            	cout << "You are not eligible to vote !!" << endl;
        	}
   		}

    	void ValidatePassword() {
        	char pw[20];
        	int len = 0;
        	cout << "Enter your password: ";
        	cin >> pw;

        	while (pw[len] != '\0') {
            	len++;
       		}

        	bool hasUpper = false;
        	for (int i = 0; i <= len; i++) {
            	if (isupper(pw[i])) {
                	hasUpper = true;
                	break;
            	}
        	}

        	if(hasUpper==true){
            	cout << "Your password is valid" << endl;
            }
            else{
            	cout << "Your password is not valid. It must contain an uppercase letter." << endl;
            }
    }
};

int main() {
    Eh obj1;
}

