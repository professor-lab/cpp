#include<iostream>
using namespace std;

int main(){
    int n=5460,sum=0;
    for(;n!=0;n/=10)sum+=n%10;
    cout<<sum;
    return 0;
}