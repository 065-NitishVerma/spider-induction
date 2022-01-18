#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool checkPrime(int x)
{
    for(int i=2;i<sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int nextPrime(int x)
{
    while(1)
        if(checkPrime(++x))
            return x;
}
int main() {
    int n,x;
    cin>>n>>x;
    int i=2,j;
    int count=0;
    while(i<=n)
    {
        j=nextPrime(i);
        if(i+j+1>n)
            break;
        else if(checkPrime(i+j+1))
            count++;
        i=j;
    }
    if(count>=x)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
