#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s="helloo";
    int count=0;
    for(char c:s)
        if(strchr("aeiou",tolower(c)))count++;
    cout<<count;
}