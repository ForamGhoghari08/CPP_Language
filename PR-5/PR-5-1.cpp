#include <iostream>
using namespace std;

class ExceptionHandling {
	private:
		int num;
public:
    void setData() {
    	 cout<<"Enter Number : ";
    	 cin>>num;
    	 
        try {
            if (num == 0) {
                throw "Zero Division Error: Cannot divide by zero!";
            } else if (num < 0) {
                throw -1;
            } else {
                cout << "Result : " << 100 / num << endl;
            }
        } catch (char errMsg[]) {
            cout << "Exception : " << errMsg << endl;
        } catch (int errCode) {
            cout << "Exception with code : " << errCode << endl;
        } catch (...) {
            cout << "an unknown exception." << endl;
        }
    }
};

int main() {
    ExceptionHandling e1;

    cout<<endl<<"Example 1 Divide by 0 :" << endl;
    e1.setData();

    cout<<endl<<"Example 2 Negative Number :" << endl;
    e1.setData();

    cout<<endl<<"Example 3 Valid Number :" << endl;
    e1.setData();

}
