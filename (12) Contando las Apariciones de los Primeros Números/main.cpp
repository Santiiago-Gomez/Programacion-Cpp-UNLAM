#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> lista (0);
    int x;
    int N;
    int uno=0, dos=0, tres=0, cuat=0, cinc=0, seis=0, siet=0, och=0, nuev=0, diez=0;
    cin >> N;
    for (int i=0; i<N; i++)
    {
    lista.push_back(N);
    cin >> lista[i];
    }
    sort(lista.begin(),lista.end());
    for ( int i=0; i<lista.size(); i++)
    {
        if (lista[i] == 1)
        {
            uno = uno+1;
        }
        if (lista[i] == 2)
        {
            dos = dos+1;
        }
        if (lista[i] == 3)
        {
            tres = tres+1;
        }
        if (lista[i] == 4)
        {
            cuat = cuat+1;
        }
        if (lista[i] == 5)
        {
            cinc = cinc+1;
        }
        if (lista[i] == 6)
        {
            seis = seis+1;
        }
        if (lista[i] == 7)
        {
            siet = siet+1;
        }
        if (lista[i] == 8)
        {
            och = och+1;
        }
        if (lista[i] == 9)
        {
            nuev = nuev+1;
        }
        if (lista[i] == 10)
        {
            diez = diez+1;
        }
    }
    cout << uno << endl;
    cout << dos << endl;
    cout << tres << endl;
    cout << cuat << endl;
    cout << cinc << endl;
    cout << seis << endl;
    cout << siet << endl;
    cout << och << endl;
    cout << nuev << endl;
    cout << diez << endl;
    return 0;
}
