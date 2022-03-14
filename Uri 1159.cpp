#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    while(1)
    {
        cin>>n;

        if(n==0)
        {
            break;
        }
        else if(n%2==0)
        {
            n = n+n+2+n+4+n+6+n+8;
        }
        else
        {
            n = n+1;
            n = n+n+2+n+4+n+6+n+8;
        }
        cout<<n<<endl;
    }
    return 0;
}
