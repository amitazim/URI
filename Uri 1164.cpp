#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, j, i, z;
    cin>>z;
    for(j=1; j<=z; j++)
    {
        cin>>n;
        int sum=0;
        for(i=1; i<=n/2; i++)
        {
            if(n%i==0)
                sum = sum+i;
        }
        if(sum == n)
            printf("%d eh perfeito\n",n);
        else
            printf("%d nao eh perfeito\n",n);
    }
    return 0;
}
