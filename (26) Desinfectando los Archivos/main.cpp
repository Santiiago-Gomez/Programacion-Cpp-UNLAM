#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream cin("antivirus.in");
    ofstream cout("antivirus.out");

    int N;
    char primletra, segletra;
    cin >> N >> primletra >> segletra;
    string infectado;
    cin >> infectado;
    int contador = 0;
    for (int i=1; i<N-1; i++)
    {
        if (infectado[i] == segletra)
        {
            if (infectado[i-1] == primletra && infectado[i+1] == primletra)
            {
                contador++;
                infectado[i] = '-';
            }
        }
    }
    cout << N-contador << endl;
    for (int i=0; i<N; i++)
    {
        if (infectado[i] != '-')
        {
            cout << infectado[i];
        }
    }
    cout << endl;
    return 0;
}
