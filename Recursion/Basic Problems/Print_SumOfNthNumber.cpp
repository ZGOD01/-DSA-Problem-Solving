#include <iostream >

using namespace std;

void function( int i,int sum){
        if(i<0){
            cout<<sum;
            return;
        }
        
        function(i-1,sum+i);

    }

int main(){

    int n;
    cout<<"Enter the value of n :-";
    cin>>n;

    function(n,0);
    return 0;
}