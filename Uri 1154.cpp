#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s=0, c=0, n;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        else
        {
            s = s+n;
            c++;
        }
    }
    double avg = 1.0*s/c;
    printf("%.2f\n", avg);
    return 0;
}
