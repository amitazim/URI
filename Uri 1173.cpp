#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N[10], i, n;
    cin>>n;
    for(i=0; i<10; i++)
    {
        N[i] = n;
        printf("N[%d] = %d\n", i, n);
        n *= 2;
    }
    return 0;
}
