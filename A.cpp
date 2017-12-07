#include <bits/stdc++.h>
#define intt long long
using namespace std;
int main()
{
    intt n;
    cin>>n;
    if(n<1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==6)
    {
        cout<<12<<endl;
        return 0;
    }
    if(n<6)
    {
        cout<<n*2+1<<endl;
        return 0;
    }
    if(n<10)
    {
        cout<<n*2<<endl;
        return 0;
    }
    if(n==24)
    {
        cout<<42<<endl;
        return 0;
    }

    intt i=1,a=0;
    while(a<n)
    {
        a=i*i*6;
        i++;
    }
    i--;

    intt s=0;
    a=12;
    for (intt j = 1; j <= i - 1; j++)
    {
        s+=a;
        a+=18;
    }
    n-=6*(i-1)*(i-1);
    if(n>1)
    {
        s+=2;
        n--;
    }
    for (intt j = 1; j <= i - 2; j++)
    {
        if(n>0)
        {
            s+=2;
            n--;
        }
        if(n==0)break;
        if(n>0)
        {
            s++;
            n--;
        }
        if(n==0)break;
    }
    for (intt t = 1; t <= 5; t++)
    {
        if(n>0)
        {
            s+=2;
            n--;
        }
        if(n==0)break;

        for (intt j = 1; j <= i - 1; j++)
        {
            if(n>0)
            {
                s+=2;
                n--;
            }
            if(n==0)break;
            if(n>0)
            {
                s++;
                n--;
            }
            if(n==0)break;
        }
        if(n==0)break;
    }
    if(n>0)
    {
        s+=2;
        n--;
    }
    if(n==0)
    {
        cout<<s<<endl;
        return 0;
    }
    if(n>0)
    {
        s++;
        n--;
    }
    if(n==0)
    {
        cout<<s<<endl;
        return 0;
    }
    return 0;
}
