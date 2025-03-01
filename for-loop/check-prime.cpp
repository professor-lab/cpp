#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int isPrime=1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)isPrime=0;
    cout<<(isPrime?"Prime":"NotPrime");

}