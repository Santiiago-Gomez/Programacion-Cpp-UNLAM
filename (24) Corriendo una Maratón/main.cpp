#include <bits/stdc++.h>

using namespace std;

struct corredor
{
    int numero, categoria;
};

int main()
{
    ifstream cin("maraton.in");
    ofstream cout("maraton.out");

    int N;
    cin >> N;
    vector <corredor> c(N);
    int conta = 0, contb = 0, contc = 0, contd = 0, conte = 0, contf = 0, contg = 0, conth = 0, conti = 0, contj = 0;
    for (int i=0; i<N; i++)
    {
        cin >> c[i].numero >> c[i].categoria;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 1)
        {
            conta++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(conta == 0)
    {
        cout << "1" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 2)
        {
            contb++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(contb == 0)
    {
        cout << "2" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 3)
        {
            contc++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(contc == 0)
    {
        cout << "3" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 4)
        {
            contd++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(contd == 0)
    {
        cout << "4" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 5)
        {
            conte++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(conte == 0)
    {
        cout << "5" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 6)
        {
            contf++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(contf == 0)
    {
        cout << "6" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 7)
        {
            contg++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(contg == 0)
    {
        cout << "7" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 8)
        {
            conth++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(conth == 0)
    {
        cout << "8" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 9)
        {
            conti++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(conti == 0)
    {
        cout << "9" << " " << "0";
        cout << endl;
    }
    for (int i=0; i<N; i++)
    {
        if(c[i].categoria == 10)
        {
            contj++;
            cout << c[i].categoria << " " << c[i].numero;
            cout << endl;
            break;
        }
    }
    if(contj == 0)
    {
        cout << "10" << " " << "0";
        cout << endl;
    }
    return 0;
}
