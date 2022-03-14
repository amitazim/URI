#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n=7;
    for(i=1; i<10; i=i+2)
    {
        for(j=n; j>=5; j--)
        {
           cout<<"I="<<i<<" J="<<j<<endl;
            if(j==5)
            {
                n=7;
            }
        }
    }
    return 0;
}
