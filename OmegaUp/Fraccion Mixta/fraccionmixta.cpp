#include <bits/stdc++.h>

using namespace std;

int getUnits( int m, int n ){
    return m/n;
}

void getfraction( int m, int n ){
    if(m%n==0) 
        cout << "";
    else
        cout << (m%n) << "/" << n;
}

int main(){
    int m, n;
    cin >> m >> n;
    cout << getUnits( m, n ) << " ";
    getfraction( m, n );
    return 0;
}
