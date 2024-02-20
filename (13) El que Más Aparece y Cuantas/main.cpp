#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int total;
    int cantrep=0;
    int contador;
    int N;
    cin >> N;
    vector <int> lista(N);
    for (int i=0; i<N; i++)
    {
        cin >> lista[i];
    }
    for (int j=0; j<N; j++)
    {
        int num = lista[j];
        contador=0;
        for (int i=0; i<N; i++)
        {
            if (num==lista[i])
            {
                contador++;
            }
        }
        if (contador>cantrep)
        {
            cantrep=contador;
            total=num;
        }
    }
    cout << total << " " << cantrep << endl;
    return 0;
}
