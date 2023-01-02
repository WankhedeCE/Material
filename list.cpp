#include<iostream>
#include<list>
using namespace std;
class demo
{
    int a,b;
    public:
    void get_data()
    {
        cout<<"\nEnter a value of a = ";
        cin>>a;
        cout<<"\nEnter a value of b = ";
        cin>>b;
    }
    void show_data()
    {
        cout<<"\na = "<<a;
        cout<<"\nb = "<<b<<endl;
    }
};
int main()
{
    list<demo>l1;
    demo d1;
    char ch;
    cout<<"\n";
    while(ch!='n')
    {
        d1.get_data();
        l1.push_back(d1);
        cout<<"\npress y for continue \npress n for exit from input = ";
        cin>>ch;
    }
    list <demo> :: iterator p=l1.begin();
    while(p!=l1.end())
    {
        p->show_data();
        p++;
    }
}