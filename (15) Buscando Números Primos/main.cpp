#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int cont;
	int N;
    cin >> N;
    for (int i= 2 ; i <= N ; i=i+1)
    {
    	cont = 0;
    	for (int j=1; j<=N; j++)
    	{
    		if (i%j==0)
    		{
    			cont++;
			}
		}
		if (cont==2)
		{
			cout<< i << endl;
		}
    }
    return 0;
}
