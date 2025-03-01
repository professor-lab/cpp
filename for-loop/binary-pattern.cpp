#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        int start=(i%2)?1:0;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    return 0;
}