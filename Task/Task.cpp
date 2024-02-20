#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int ves, rasst_ab, rasst_bc, fuel = 300, fuel2;
    int rashod;

    cout << "Введите вес груза в самолете ";
    cin >> ves;

    if (ves > 2000)
    {
        cout << "Самолет никуда не летит!\n";
    }
    else
    {
        if (ves <= 500)
        {
            rashod = 1;
        }
        else if ((ves > 500) && (ves <= 1000))
        {
            rashod = 4;
        }
        else if ((ves > 1000) && (ves <= 1500))
        {
            rashod = 7;
        }
        else if ((ves > 1500) && (ves <= 2000))
        {
            rashod = 9;
        }
        cout << "Введите расстояние от пункта А до пункта Б ";
        cin >> rasst_ab;
        if (rashod * rasst_ab > 300)
        {
            cout << "Самолет никуда не летит!\n";
        }
        else
        {
            cout << "Введите расстояние от пункта Б до пункта С ";
            cin >> rasst_bc;
            if (rashod * rasst_bc > 300)
            {
                cout << "Самолет никуда не летит!\n";
            }
            else
            {
                fuel -= rashod * rasst_ab;
                fuel2 = rashod * rasst_bc;
                cout << "Для перелета из пункта А в пукнт С необходимо долить в пункте Б " << fuel2 - fuel << " литров топлива\n";
            }
        }

    }
    cout << "Конец программы!";
    return 0;
}
