#include<iostream>
using namespace std;

class num
{
	protected :
		int ab;
	public :
		num()
		{
			cout << "Enter A : ";
			cin >> ab;
		}
};

class square  : public num
{
	public :
		void getsquare()
		{
			cout << "A : " << ab*ab;
		}
};
class cube  : public num
{
	public :
		void getcube()
		{
			cout << "A : " << ab*ab*ab;
		}
};

int main()
{
	cube c;
	c.getcube();
	cout << endl;
	square s;
	s.getsquare();
}
