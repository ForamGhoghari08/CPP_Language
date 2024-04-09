#include<iostream>
#include<string.h>

using namespace std;

class Student
{
    private:
        int id;
 	    char name[100];
 		int age;
 		char telecome_brand_name[100];
		int mobile_number;
		char simcard_validity[100];
		char city[100];

	public :
		void setdata()
		{
			cout<<"Enter your id :- ";
			cin>>id;
			cout<<"Enter your name :- ";
			cin>>name;
			cout<<"Enter your age :- ";
			cin>>age;
			cout<<"Enter your telecome brand name :- ";
			cin>>telecome_brand_name;
			cout<<"Enter your mobile number :- ";
			cin>>mobile_number;
			cout<<"Enter your city :-";
			cin>>city;
			cout<<"Enter your simcard validity :- ";
			cin>>simcard_validity;
			cout<<"-----------------------"<<endl;
		}

		void getdata()
		{
			cout<<"ID :- "<<id<<endl<<"NAME :- "<<name<<endl<<"AGE :- "<<age<<endl<<"telecome brand name :- "<<telecome_brand_name<<endl<<"mobile number :- "<<mobile_number<<endl<<"CITY :- "<<city<<endl<<"simcard validity :- "<<simcard_validity<<endl;	
		}
};

int main()
{
    Student s1,s2,s3,s4,s5;

	s1.setdata();
	s1.getdata();
    s2.setdata();
	s2.getdata();
	s3.setdata();
	s3.getdata();
	s4.setdata();
	s4.getdata();
	s5.setdata();
	s5.getdata();
    
    return 0;
}
