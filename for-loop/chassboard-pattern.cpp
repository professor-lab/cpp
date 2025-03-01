#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++)
            cout<<((i+j)%2?"":"@");
        cout<<endl;
    }
    return 0;
}