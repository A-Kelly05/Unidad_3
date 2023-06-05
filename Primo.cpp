#include <iostream>

using namespace std;

int main()
{
    int Num, primo = 0;
    cout << "Dime un numero el que tu desees y yo te dire si es o no primo\n";
    cout << "Dime el numero:";
    cin >> Num;
    for (int i = 1; i <= Num; i++)
    {
        if (Num % i == 0)
        {
            primo++;
        }
    }
    if (primo == 2)
    {
        cout << "El # " << Num << " es primo\n";
    }
    else
    {
        cout << "El # " << Num << " no es primo\n";
    }
    return 0;
}