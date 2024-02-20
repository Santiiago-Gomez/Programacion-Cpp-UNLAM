#include <iostream>
#include <vector>

using namespace std;

int main()
{
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
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<N; j++)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
