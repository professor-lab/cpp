#include<iostream>
using namespace std;

int main(){
    int n=153,sum=0,temp=n;
    for(;temp!=0;temp/=10){
        int digit=temp%10;
        sum+=digit*digit*digit;
    }
    cout<<(sum==n?"Armstrong":"Not Armstrong");

    return 0;
}