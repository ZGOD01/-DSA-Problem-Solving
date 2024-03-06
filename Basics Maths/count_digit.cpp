#include<bits/stdc++.h>

using namespace std;



int main(){
    int n,cnt;
    cnt=0;
    cout<<"Enter the 'n' Value :- ";
    cin>>n;

    while (n>0){
        int sum = n % 10;
        cnt = cnt + 1;
        n = n / 10 ;
    cout<<sum<<endl;
    }
    cout<<"The count Value is ";
    cout<<cnt<<endl;
    
    return 0;
}


/*

Another method to calculate the count of comparision in numbers 

int count (int n){
    int cnt = (int)(log10(n) + 1)
    return cnt;
}

*/