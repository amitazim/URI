#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n, i;
    while(1)
    {
        cin>>m>>n;
        if(m<=0 || n<=0)
            break;
        else
        {
            int sum=0;
            if(m>n)
            {
                for(i=n; i<=m; i++)
                {
                    printf("%d ", i);
                    sum = sum+i;
                }
            }
            else
            {
                for(i=m; i<=n; i++)
                {
                    printf("%d ", i);
                    sum = sum+i;
                }
            }
            printf("Sum=%d\n", sum);
        }
    }
    return 0;
}
