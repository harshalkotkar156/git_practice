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

}


int main()
{
    int n = 5;    
    cout<<getFactorialSum(3)<<endl;
    return 0;
}
