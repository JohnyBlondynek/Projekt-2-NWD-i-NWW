#include <iostream>
#include "windows.h" 
using namespace std;
int NWD(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}
int main()
{
    bool program=true;
    while (program==true) {
        int NWDczyNWW;
        cout << "Program do obliczania NWD i NWW"<<endl;
        cout << "1:NWD" << endl;
        cout << "2:NWW" << endl;
        cout << "3:Autorzy" << endl;
        cout << "4:Wyjscie" << endl;
        cin >> NWDczyNWW;
        if (NWDczyNWW == 1) {
            int a, b;
            cout << "Podaj dwie liczby: " << endl;
            cin >> a >> b;
            cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;
            Sleep(2000);
            system("cls");
        }
        else if (NWDczyNWW == 2) {
            int c, d;
            cout << "Podaj dwie liczby: ";
            cin >> c >> d;
            cout << "NWW(" << c << ", " << d << ") = " << c / NWD(c, d) * d << endl;
            Sleep(2000);
            system("cls");
        }
        else if (NWDczyNWW == 3) {
            cout << "Maxwell Broll" << endl;
            cout << "Luka Stojanović" << endl;
            Sleep(2000);
            system("cls");
        }
        else if (NWDczyNWW == 4)program = false;
        else
        {
            cout << "Zła wartość!" << endl;
            Sleep(2000);
            system("cls");
        }
    }
    cout << "Miłego Dnia :)" << endl;
}