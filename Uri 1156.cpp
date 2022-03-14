#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=1, j;
    double s=0;
    for(j=1; j<=39; j+=2)
    {
        s = s+j/i;
        i =i*2;
    }
    printf("%.2f", s);
    return 0;
}
