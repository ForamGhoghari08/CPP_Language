#include <iostream>
#include <string.h>
using namespace std;

class car
{
public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    int car_release_year;
};

int main()
{
    car C1;
    car C2;
    car C3;
    car C4;
    car C5;

    cout << "ENTER CAR ID= ";
    cin >> C1.car_id;
    fflush(stdin);
    cout << "ENTER CAR COMPANY NAME= ";
    gets(C1.car_company_name);
    cout << "ENTER CAR COLOUR= ";
    cin >> C1.car_color;
    cout << "ENTER CAR MODAL= ";
    cin >> C1.car_model;
    cout << "ENTER CAR RELEASE YEAR= ";
    cin >> C1.car_release_year;

    cout << endl
         << " |CAR ID\t\t|=" << C1.car_id                  << "|" << endl
         << " |CAR COMPANY NAME\t|=" << C1.car_company_name<< "|" << endl
         << " |CAR COLOUR\t\t|=" << C1.car_color           << "|" << endl
         << " |CAR MODAL\t\t|=" << C1.car_model            << "|" << endl
         << " |RELEAS YEAR\t\t|=" << C1.car_release_year   << "|" << endl;
}
