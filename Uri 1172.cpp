#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x[10], n, i;
    for(i=0; i<10; i++)
    {
        cin>>n;
        if(n>0)x[i]=n;
        else x[i]=1;
    }

    for(i=0; i<10; i++)
        printf("X[%d] = %d\n", i, x[i]);
    return 0;
}
