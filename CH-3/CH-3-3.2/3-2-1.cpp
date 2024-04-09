#include<iostream>
using namespace std;

class hotel
{
	private :
		int id;
	 	char name[100];
		char type[100];
		int rating;
	 	static char location[100];
		int establish_year;
		int staff_quantity;
		int room_quantity;
	
	public :
		void setdata()
		{
			cout<<"enter your hotel ID:";
			cin>>id;
			cout<<"enter your hotel TYPE :";
			cin>>type;
			cout<<"enter your hotel name :";
			cin>>name;
			cout<<"enter your  hotel rating :";
			cin>>rating;
			cout<<"enter your establish year :";
			cin>>establish_year;
			cout<<"enter your staff quantity :";
			cin>>staff_quantity;
			cout<<"enter your room quantity :";
			cin>>room_quantity;
			cout<<"-----------------------"<<endl;
	}
	
		void getdata()
		{
			cout<<"hotel id :"<<id<<endl;
			cout<<"hotel type :"<<type<<endl;
			cout<<"hotel name :"<<name<<endl;
			cout<<"hotel location :"<<location<<endl;
			cout<<"hotel rating :"<<rating<<endl;
			cout<<"hotel establish year :"<<establish_year<<endl;
			cout<<"hotel staff quantity :"<<staff_quantity<<endl;
			cout<<"hotel room quanlity :"<<room_quantity<<endl;
			cout<<"-----------------------"<<endl;
		}


};

char hotel :: location[100] = "gujarat";
	
int main()
{
	int i,n;
	cout<<"enter the N :";
	cin>>n;
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setdata();
	}
	for(i=0;i<n;i++)
	{
		h[i].getdata();
	}
	
	return 0;
	
}
