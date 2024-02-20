#include <iostream>

using namespace std;

int main()
{
     int l, b, h;
    string nombre;
    cin >> nombre;
    if (nombre == "cuadrado")
    {
        cin >> l;
        if (l>=1 and l<=150)
        {
            cout << l*l << endl;
        }
        else
        {
            cout << "El numero que ingresaste no es valido" << endl;
        }
    }
    else
    {
        if (nombre == "rectangulo")
        {
            cin >> b >> h;
             if (b>=1 and b<=150 and h>=1 and h<=150)
             {
                    cout << b*h << endl;
             }
             else
             {
                    cout << "El numero que ingresaste no es valido" << endl;
             }
        }
    else {
        if (nombre == "cubo")
            {
                cin >> l;
                 if (l>=1 and l<=150)
                 {
                    cout << (l*l)*6 << endl;
                 }
                else
                {
                     cout << "El numero que ingresaste no es valido" << endl;
                }
            }
    else {
        if (nombre == "caja")
            {
                cin >> l >> b >> h;
                if (l>=1 and l<=150 and b>=1 and b<=150 and h>=1 and h<=150)
                {
                   cout << (2*l*b)+(2*l*h)+(2*b*h) << endl;
                }
                else
                {
                   cout << "El numero que ingresaste no es valido" << endl;
                }
            }
    }
    }
    }
    return 0;
}
