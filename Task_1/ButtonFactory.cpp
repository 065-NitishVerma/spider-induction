#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    int nb,ne,mb,me,ans;
    if(q<s)
    {
        nb=p;ne=q;mb=r;me=s;
    }
    else
    {
        nb=r;ne=s;mb=p;me=q;
    }
    if(ne<mb)
        ans=0;
    else
    {
        if(nb>=mb)
            ans=ne-nb;
        else
            ans=ne-mb;
    }
    cout<<ans;
    return 0;
}
