#include <bits/stdc++.h>

using namespace std;

int getFibonacci(int k){
    if(k == 1 || k == 0) 
        return 1;
    else 
        return getFibonacci(k-1) + getFibonacci(k-2);
}

int main(){
    int k;
    cin >> k;
    cout << getFibonacci(k);
    return 0;
}