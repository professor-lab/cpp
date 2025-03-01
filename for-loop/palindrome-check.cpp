#include<iostream>
using namespace std;

int main(){
    int n=131,rev=0,original=n;
    for(;n!=0;n/=10)rev=rev*10+n%10;
    cout<<(original==rev?"Palidrome":"Not Palidrome");
    return 0;
}