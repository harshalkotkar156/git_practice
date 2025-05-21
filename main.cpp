#include<bits/stdc++.h>
using namespace std;

int getFactorial(int n){
    if(n<=1){
        return n;
    }
    return n*getFactorial(n-1);
}


int main()
{
    int n = 5;    
    cout<<getFactorial(5)<<endl;
    return 0;
}
