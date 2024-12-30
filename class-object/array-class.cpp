#include<iostream>
using namespace std;
 const int m=50;

class ITEMS
{       
        int itemCode[m];
        float itemPrice[m];
        int count;
    public:
        void CNT(void)
        {
            count=0;
        }       
        void getitem(void);
        void displaySum(void);
        void remove(void);
        void display(void);
        void displayItems(void);

};
//****************************************************/
void ITEMS::getitem(void)
{
    cout<<"\n Enter item Code : ";
    cin>>itemCode[count];

    cout<<"\n Enter item Cost : ";
    cin>>itemPrice[count];
    count++;
}
void ITEMS::displaySum(void)
{
    float sum=0;
        for(int i=0;i<count;i++)
        {
            sum=sum+itemPrice[i];
            cout<<"\n Total Value : "<<sum<<"\n";
        }
}
void ITEMS::remove(void)
{
        int a;
        cout<<"Enter item Code : ";
        cin>>a;

        for(int i=0;i<count;i++)
        {
            if(itemCode[i]==a)
            {
                itemPrice[i]==0;
            }
        }
}

void ITEMS::displayItems(void)
{
    cout<<"\n Code Price \n";
    for(int i=0;i<count;i++)
    {
       cout<<"\n"<<itemCode[i];
       cout<<"   "<<itemPrice[i];
    }
    cout<<"\n";
}
//**************************************************/
int main()
{
        ITEMS order;
        order.CNT();
        int x;
        do
        {
            cout<<"\n You can do the folowing; "<<"Enter approriate number \n";
            cout<<"\n 1 : Add an item ";
            cout<<"\n 2 : Display Total Value ";
            cout<<"\n 3 : Delete an item ";
            cout<<"\n 4 : display all items ";
            cout<<"\n 5 : Quit ";
            cout<<"\n\n What is your option? : ";
            cin>>x;

            switch(x)
            {
                case 1: order.getitem(); break;
                case 2: order.displaySum(); break; 
                case 3: order.remove(); break;
                case 4: order.displayItems(); break;
                case 5: break;
                default: cout<<"Error in input ; try again \n";
            }
            
        } while (x!=5);
        
    
    return 0;
}


