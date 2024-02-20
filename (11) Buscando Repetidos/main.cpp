#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void hayRepe(vector <int> lista, int x)
{
    int contador=0;
    for(int i=0; i<lista.size(); i++)
    {
        if (lista[i] == lista[i+1])
        {
          contador++;
        }
    }
    if (contador != 0) {
        cout << "Hay repetidos" << endl;
    }
    else {
        cout << "No hay repetidos" << endl;
    }
}
int main()
{
    vector <int> lista(0);
    int x;
    cin >> x;
    while (x !=0) {
    lista.push_back(x);
    cin >> x;
    }
        sort(lista.begin(),lista.end());
        hayRepe(lista, x);
    return 0;
}
