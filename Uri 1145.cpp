#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i, j;
    cin>>x>>y;
    for(i=1, j=1; i<=x, j<=y; i++, j++)
    {
        cout<<j<<" ";
        if(i==x)
        {
            cout<<endl;
        }
    }
    return 0;
}
