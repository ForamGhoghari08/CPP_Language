#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
    int E_id;
    char E_name[20];
    int E_age;
    char E_role[20];
    int E_salary;
    char E_city[20];
    char E_experience[20];
    char E_company_name[20];
};

int main()
{
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee E5;

    cout << "ENTER YOUR ID= ";
    cin >> E1.E_id;
    fflush(stdin);
    cout << "ENTER YOUR NAME= ";
    gets(E1.E_name);
    cout << "ENTER YOUR AGE= ";
    cin >> E1.E_age;
    fflush(stdin);
    cout << "ENTER YOUR ROLE= ";
    gets(E1.E_role);
    cout << "ENTER YOUR SALARY= ";
    cin >> E1.E_salary;
    fflush(stdin);
    cout << "ENTER YOUR CITY= ";
    gets(E1.E_city);
    cout << "ENTER YOUR EXPERIENCE= ";
    gets(E1.E_experience);
    cout << "ENTER YOUR COMPNY NAME= ";
    gets(E1.E_company_name);

    cout << "YOUR ID\t\t=" << E1.E_id << endl
         << "NAME\t\t=" << E1.E_name << endl
         << "AGE\t\t=" << E1.E_age << endl
         << "ROLE\t\t=" << E1.E_role << endl
         << "SALARY\t\t=" << E1.E_salary << endl
         << "CITY\t\t=" << E1.E_city << endl
         << "EXPERIENCE\t=" << E1.E_experience << endl
         << "COMPNY NAME\t=" << E1.E_company_name << endl;
}
