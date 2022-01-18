#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int queries;
    cin>>queries;
    while(queries--)
    {
        int box;
        cin>>box;
        int i=1,j=2,rows=0;
        while(i<=box)
        {
            rows++;
            i=i+(j++);
        }
        cout<<rows<<"\n";
    }
    return 0;
}
