#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
    setlocale(0, "");
    int mar = 0, apr = 0, may = 0, qua = 0;
    cout << "ЗП за март\n";
    for (int a = 1, b = 0; a <= 3; a++)
    {
        cout << "Введите ЗП сотрудника " << a << " ";
        cin >> b;
        mar += b;
    }
    cout << "ЗП за апрель\n";
    for (int a = 1, b = 0; a <= 3; a++)
    {
        cout << "Введите ЗП сотрудника " << a << " ";
        cin >> b;
        apr += b;
    }
    cout << "ЗП за май\n";
    for (int a = 1, b = 0; a <= 3; a++)
    {
        cout << "Введите ЗП сотрудника " << a << " ";
        cin >> b;
        may += b;
    }
    qua = mar + apr + may;
    cout << "\nОбщая ЗП за квартал " << qua;
    cout << endl;

    system("pause");
}