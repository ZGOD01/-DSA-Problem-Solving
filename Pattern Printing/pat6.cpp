#include<bits/stdc++.h>

using namespace std;

void print6(int n) {
    for (int i = 1; i <=n; i++){
        for (int j = 1; j <=n-i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;    
    }
    
}


int main(){
    int t;
    cout<<"Enter the Test Cases :-";
    cin>>t;

    for (int i = 0; i < t; i++){
        int n;
        cin>>n;
        print6(n);
    }
    return 0;
}