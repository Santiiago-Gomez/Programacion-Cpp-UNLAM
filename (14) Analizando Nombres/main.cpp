#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    char a[51][16];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    int maxi = strlen(a[0]);
    int indice, cv = 0, indice2;
    for(int i = 0; i < N; i++){
        int cve = 0;
        for(int j = i; j < N; j++){
            if(!strcmp(a[i],a[j])) cve++;
        }
        if(cv < cve){
            cv = cve;
            indice2 = i;
        }
        if(maxi < strlen(a[i])){
            maxi = strlen(a[i]);
            indice = i;
        }
    }
    cout << a[indice] << endl;
    cout << a[indice2] << endl;
    return 0;
}
