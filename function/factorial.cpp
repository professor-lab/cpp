#include<iostream>
using namespace std;

int factorial(int n){
    int result=1;
    for(int i=1;i<=n;i++)result*=i;
    return result;
}
int main(){
    cout<<"5! = "<<factorial(5)<<endl;
    return 0;
}