#include <bits/stdc++.h>

using namespace std;

bool buscar(vector <char> letras, string palabra)
{
    for (int i=0; i<letras.size(); i++)
    {
        int contador = 0;
        for (int j=0; j<palabra.size(); j++)
        {
            if (palabra[j]==letras[i+j])
            {
                contador++;
            }
        }
        if (contador == palabra.size())
        {
            return true;
        }
    }
    return false;
}

bool invers(vector <char> letras, string palabra)
{
    reverse(palabra.begin(), palabra.end());
    for (int i=0; i<letras.size(); i++)
    {
        int contador = 0;
        for (int j=0; j<palabra.size(); j++)
        {
            if (palabra[j]==letras[i+j])
            {
                contador++;
            }
        }
        if (contador == palabra.size())
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ifstream cin("mensajes.in");
    ofstream cout("mensajes.out");

    int N;
    cin >> N;
    vector <char> letras(N);
    string palabra;
    for (int i=0; i<N; i++)
    {
        cin >> letras[i];
    }
    cin >> palabra;
    if (buscar (letras, palabra) == true)
    {
        cout << "SI" << endl;
        cout << "I" << endl;
    }
    else if (invers (letras, palabra) == true)
    {
        cout << "SI" << endl;
        cout << "D" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
