#include<iostream>

using namespace std;

void LinearPrint(int i,int N){
    if (i>N)
    {
        return;
    }
    cout<<i<<endl;
    LinearPrint(i+1,N);
    
}

int main(){
    int N;
    cout<<"Enter the the value of N:- ";
    cin>>N;

    LinearPrint(1,N);

    return 0;
}