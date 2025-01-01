#include<iostream>
using namespace std;

class employee
{

    char name[30];
    float age;
public:
    void getdata(void);
    void putdata(void);
};

void employee::getdata(void)
{
    cout<<"\n Enter Name: ";
    cin>>name;
    cout<<"\n Enter age: ";
    cin>>age;
}
void employee::putdata(void)
{
    cout<<"\n Name: "<<name;
    cout<<"\n age: "<<age;
    
}
//const int size=3;
int main()
{
    const int size=3;
    employee manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<"\n Details of manager"<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<"\n Manager : "<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}


