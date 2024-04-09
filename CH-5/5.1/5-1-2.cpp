#include<iostream>
using namespace std;

class Cricket{
	    public:
		void getTotalOvers(int overs){
			cout<<"You get "<<overs<<" Overs in This Format "<<endl;
		}
};
class T20Match : public Cricket{
	    public:
		void setValue(){
			cout<<"In T20I ";
		}
};
class TestMatch : public Cricket{
	    public:
		void setValue2(){
			cout<<"In Test ";
		}
};
int main(){
	T20Match t;
	TestMatch t2;
	t.setValue();
	t.Cricket::getTotalOvers(20);
	t2.setValue2();
	t2.Cricket::getTotalOvers(90);
	return 0;
}

