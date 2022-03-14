#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                printf("%d",i);
                if(i<n)
                {
                    cout<<" ";
                }
                else if(i==n)
                {
                    cout<<endl;
                }
            }
        }

    }
    return 0;
}
