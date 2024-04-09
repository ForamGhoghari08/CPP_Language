#include<iostream>
using namespace std;

class Shape{
	protected :
		int  width,height;
	public :
		Shape()
		{
			cout << "Enter width :";
			cin >> width;
			cout << "Enter height :";
			cin >> height;
		}
};
class triangle : public Shape {

	public :
		void area()
		{
			cout<<"Triangle area : "<< (width*height)/2<<endl;
		}
				
};


class Rectangle : public Shape {
	public :
		void area()
		{
			cout<<"Rectangle area : " <<width*height<<endl;
		}	
};

 main()
{
	Rectangle r2;
	r2.area();
	triangle t1;
	t1.area();
}
