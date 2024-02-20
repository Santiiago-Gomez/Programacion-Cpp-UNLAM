#include <bits/stdc++.h>

using namespace std;

int ascii (char x)
{
    int res;
    if(x=='0')
    {
        res=0;
    }
    if(x=='1')
    {
        res=1;
    }
    if(x=='2')
    {
        res=2;
    }
    if(x=='3')
    {
        res=3;
    }
    if(x=='4')
    {
        res=4;
    }
    if(x=='5')
    {
        res=5;
    }
    if(x=='6')
    {
        res=6;
    }
    if(x=='7')
    {
        res=7;
    }
    if(x=='8')
    {
        res=8;
    }
    if(x=='9')
    {
        res=9;
    }
    return res;
}

void comprime(string x)
{
    int i,j,repe=0;
    vector <char> palabra(x.size());

    for(i=0; i<x.size(); i++)
    {
        palabra[i]=x[i];
    }
    for(i=0; i<palabra.size(); i++)
    {
        if(palabra[i]==palabra[i+1])
        {
            repe++;
        }
        if(palabra[i]!=palabra[i+1])
        {
            if(repe==0)
            {
                cout << palabra[i];
            }
            else
            {
                if(repe >= 4)
                {
                    cout << "(" << palabra[i] << repe+1 << ")";
                }
                else
                {
                    for(j=0; j<repe+1; j++)
                    {
                        cout << palabra[i];
                    }
                }
            }
            repe=0;
        }
    }
}

void descomprime(string x)
{
    int i,j,repe;
    vector <char> palabra(x.size());
    char aa;

    for(i=0; i<x.size(); i++)
    {
        palabra[i]=x[i];
    }
    for(i=0; i<palabra.size(); i++)
    {
        if(palabra[i]=='(')
        {
            j=0;
            while(palabra[i+j]!=')')
            {
                j++;
            }
            aa=palabra[i+1];
            switch(j)
            {
            case 3:
                repe=ascii(palabra[i+2]);
                break;
            case 4:
                repe=ascii(palabra[i+2])*10 + ascii(palabra[i+3]);
                break;
            case 5:
                repe=ascii(palabra[i+2])*100 + ascii(palabra[i+3])*10 + ascii(palabra[i+4]);
                break;
            }
            i+=j;
            for(j=0; j<repe; j++)
            {
                cout << aa;
            }
        }
        if(palabra[i]!=')')
        {
            cout << palabra[i];
        }
    }
}

int main()
{
    freopen("imagenes.in","r",stdin);
    freopen("imagenes.out","w",stdout);

    string imagen,imagcom;
    cin >> imagen;
    cin >> imagcom;

    comprime(imagen);
    cout << endl;
    descomprime(imagcom);

    return 0;
}
