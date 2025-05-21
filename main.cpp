#include<bits/stdc++.h>
using namespace std;

int getFact(int n,vector<int>&vec){
    if(n<=1){
        return n;
    }
    if(vec[n] != -1){
        return vec[n];
    }
    vec[n] = n* getFact(n-1,vec);
    return vec[n];
}

int getFactorialSum(int n)
{
    vector<int>vec(n+1,-1);
    vec[0]=0;
    for(int i=1;i<=n;i++){
        vec[i] = getFact(i,vec);
    }
    int ans=0;
    for(int i:vec){
        cout<<i<<" ";
        ans+=i;
    }
    cout<<endl;
    return ans;
}


int main()
{
    int n = 5;    
    cout<<getFactorialSum(5)<<endl;
    return 0;
}
