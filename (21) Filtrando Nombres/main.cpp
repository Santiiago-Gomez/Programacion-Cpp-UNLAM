#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    string filtro;
    int N;
    cin >> N;
    vector <string> palabras(N);
    for (int i=0; i<N; i++)
    {
        cin >> palabras[i];
    }
    for (int i=0; i<N; i++)
    {
    for (int j=0; j<palabras[i].size(); j++)
    {
        if(palabras[i][j] < 'a')
        {
        palabras[i][j] = (char)(palabras[i][j]+32);
        }
    }
        if (palabras[i][0]==palabras[i][palabras[i].size()-1])
        {
            filtro = palabras[i];
            cout << filtro << endl;
        }
    }
    return 0;
}
