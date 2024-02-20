#include <iostream>

using namespace std;

int main()
{
    int A, B, C; ///Declaro variables para los números
    cin >> A >> B >> C;
    if (A<B and A<C) ///Cominezo a preguntar cuál es el menor para ordenarlos OP1
        {
            if (B<C){
                cout << A << " " << B << " " << C << endl;
            }
            else {
                  cout << A << " " << C << " " << B << endl;
            }
        }
    if (B<A and B<C) ///OP2
        {
            if (A<C){
                  cout << B << " " << A << " " << C << endl;
            }
            else {
                 cout << B << " " << C << " " << A << endl;
            }
        }
    if (C<A and C<B) ///OP3
        {
            if (A<B){
                 cout << C << " " << A << " " << B << endl;
            }
            else {
                 cout << C << " " << B << " " << A << endl;;
            }

    }
    if (A==B and A==C) ///OP4 En caso de igualdad
    {
        if (B==C){
                cout << A << " " << B << " " << C << endl;
    }
    }
    return 0; ///Fin
}
