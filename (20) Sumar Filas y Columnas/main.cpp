#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int filas, columnas;
    int N, M;
    cin >> N >> M;
    int mat[N][M];
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i=0; i<N; i++)
    {
        filas = 0;
        for (int j=0; j<M; j++)
        {
            filas = filas+mat[i][j];
        }
        cout << filas << " ";
    }
    cout << endl;
    for (int j=0; j<M; j++)
    {
        columnas = 0;
        for (int i=0; i<N; i++)
        {
            columnas = columnas+mat[i][j];
        }
        cout << columnas << " ";
    }
    cout << endl;
    return 0;
}
