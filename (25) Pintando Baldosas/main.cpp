#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream cin("baldosas.in");
    ofstream cout("baldosas.out");

    int lug,lugori;
    string cantidad;
    cin >> cantidad;
    vector <char> baldosas(cantidad.size());
    int i;

    for(i=0; i<cantidad.size(); i++)
    {
        baldosas[i]=cantidad[i];
        if(baldosas[i]!='*')
        {
            lugori=i;
        }
    }
    lug=lugori;
    for(i=0; i<(baldosas.size()-lugori); i++)
    {
        if(baldosas[lug]=='A')
        {
            baldosas[lug+1]='R';
        }
        if(baldosas[lug]=='R')
        {
            baldosas[lug+1]='V';
        }
        if(baldosas[lug]=='V')
        {
            baldosas[lug+1]='A';
        }
        lug++;
    }
    lug=lugori;
    for(i=0; i<lugori; i++)
    {
        if(baldosas[lug]=='A')
        {
            baldosas[lug-1]='V';
        }
        if(baldosas[lug]=='R')
        {
            baldosas[lug-1]='A';
        }
        if(baldosas[lug]=='V')
        {
            baldosas[lug-1]='R';
        }
        lug--;
    }
    for(i=0; i<baldosas.size(); i++)
    {
        cout << baldosas[i];
    }
    return 0;
}
