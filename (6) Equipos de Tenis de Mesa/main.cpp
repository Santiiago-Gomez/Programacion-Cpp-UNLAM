#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int A,B,C,D;
    int total;
    int aux;
    cin >> A >> B >> C >> D;

    if(A>B){
     aux=A;
     A=B;
     B=aux;
 }
 if(A>C){
    aux=A;
    A=C;
    C=aux;
 }
 if(A>D){
    aux=A;
    A=D;
    D=aux;
 }
 if(B>C){
    aux=B;
    B=C;
    C=aux;
 }
 if(B>D){
    aux=B;
    B=D;
    D=aux;
 }
 if(C>D){
    aux=C;
    C=D;
    D=aux;
 }

 total=(A+D)-(B+C);

 cout << abs(total) <<endl;
    return 0;
}
