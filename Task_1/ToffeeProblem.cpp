#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    vector<int> pr(n);
    for(int i=0;i<n;i++)
    {
        cin>>pr[i];
    }
    sort(pr.begin(),pr.end());
    
        int count=0,sum=0;
        int i=0;
        while(i<n)
        {
            sum += pr[i++];
            if(sum<=m)
            count++;
            else
            break;
        }
        cout<<count;
    
    return 0;
}
