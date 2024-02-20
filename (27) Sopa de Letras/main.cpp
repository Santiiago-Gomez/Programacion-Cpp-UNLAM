#include <bits/stdc++.h>

using namespace std;

bool buscar(vector <vector<char> > mat, string palabra)
{
    for (int i=0; i<mat.size(); i++)
    {
        for (int j=0; j<mat[i].size(); j++)
        {
            int contador = 0;
            for (int k=0; k<palabra.size(); k++) ///posiciones de la palabra
            {
                if (j+k < mat[i].size())
                {
                    if (palabra[k] == mat[i][j+k]) ///se mueve la posicion de la palabra con la de la matriz
                    {
                        ///se mueven juntas para comparar letra por letra
                        contador++;
                    }
                }
            }
            if (contador == palabra.size())
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string palabra;
    int N, M, K;
    cin >> N >> M >> K;
    vector <vector <char> > mat(N, vector<char> (M));
    vector <vector <char> > matrans(M, vector<char> (N));
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            cin >> mat[i][j];
            matrans[j][i] = mat[i][j];
        }
    }
    for (int i=0; i<K; i++)
    {
        cin >> palabra;
        if (buscar(mat, palabra) == true)
        {
            cout << "SI" << endl;
        }
        else if (buscar(matrans, palabra) == true)
        {
            cout << "SI" << endl;
        }
        else
        {
            reverse(palabra.begin(), palabra.end());
            if (buscar(mat, palabra) == true)
            {
                cout << "SI" << endl;
            }
            else if (buscar(matrans, palabra) == true)
            {
                cout << "SI" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
