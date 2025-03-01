#include<iostream>
using namespace std;

bool isEven(int num){
    return (num%2==0);
}
int main(){
    cout<<"Is 7 Even ? "<<(isEven(7)?"Yes":"No")<<endl;
    return 0;
}