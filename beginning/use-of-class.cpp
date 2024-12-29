#include <iostream>
using namespace std;
class person
{
    char name[10];
    int age;
    public:
        void getdata(void);
        void putdata(void);
};
void person::getdata(void)
{
    cout<<"\nenter name : ";
    cin>>name;
    cout<<"\nenter age : ";
    cin>>age;

}
void person::putdata(void)
{
    cout<<"\n Name: ";
    cout<<"\n Age: ";
}

int main()
{
    person p;
    p.getdata();
    p.putdata();


    
    return 0;
}