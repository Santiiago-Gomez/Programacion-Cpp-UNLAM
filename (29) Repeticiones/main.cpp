#include <bits/stdc++.h>

using namespace std;

int main()
{
    int longia = 0, longic = 0, longig = 0, longit = 0;
    int conta = 0, contc = 0, contg = 0, contt = 0;
    string cadena;
    cin >> cadena;
    for (int i=0; i<cadena.size(); i++)
    {
        if (cadena[i] == 'A')
        {
        if (cadena[i] == cadena[i+1])
        {
            conta++;
            if (cadena[i] != 'A')
            {
                break;
            }
        }
        }
        if (conta>longia)
            {
                longia = conta+1;
            }
        if (cadena[i] == 'C' && cadena[i+1] == 'C')
        {
            contc++;
            if (cadena[i] != 'C')
            {
                break;
            }
        }
        if (contc>longic)
            {
                longic = contc+1;
            }
        if (cadena[i] == 'G' && cadena[i+1] == 'G')
        {
            contg++;
            if (cadena[i] != 'G')
            {
                break;
            }
        }
        if (contg>longig)
            {
                longig = contg+1;
            }
        if (cadena[i] == 'T' && cadena[i+1] == 'T')
        {
            contt++;
            if (cadena[i] != 'T')
            {
                break;
            }
        }
        if (contt>longit)
            {
                longit = contt+1;
            }
    }
    int first = max(longia, longic);
    int second = max(longig, longit);
    int fin = max(first, second);
    cout << fin << endl;
    return 0;
}
