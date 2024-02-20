#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    char A[15];
    char B[10];
    cin >> A >> B;
    if (strcmp(A, "Piedra")==0 and strcmp(B, "Tijera")==0)
    {
        cout << "Ana" << endl;
    }
    if (strcmp(A, "Tijera")==0 and strcmp(B, "Papel")==0)
    {
        cout << "Ana" << endl;
    }
    if (strcmp(A, "Papel")==0 and strcmp(B, "Piedra")==0)
    {
        cout << "Ana" << endl;
    }
    if (strcmp(A, "Tijera")==0 and strcmp(B, "Piedra")==0)
    {
        cout << "Bartolo" << endl;
    }
    if (strcmp(A, "Papel")==0 and strcmp(B, "Tijera")==0)
    {
        cout << "Bartolo" << endl;
    }
    if (strcmp(A, "Piedra")==0 and strcmp(B, "Papel")==0)
    {
        cout << "Bartolo" << endl;
    }
    if (strcmp(A, "Piedra")==0 and strcmp(B, "Piedra")==0)
    {
        cout << "Empate" << endl;
    }
    if (strcmp(A, "Papel")==0 and strcmp(B, "Papel")==0)
    {
        cout << "Empate" << endl;
    }
    if (strcmp(A, "Tijera")==0 and strcmp(B, "Tijera")==0)
    {
        cout << "Empate" << endl;
    }
    return 0;
}
