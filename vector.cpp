#include<iostream>
#include<vector>
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
    vector<demo>v1;
    demo d1;
    char ch;
    cout<<"\n";
    while(ch!='n')
    {
        d1.get_data();
        v1.push_back(d1);
        cout<<"\npress y for continue \npress n for exit from input = ";
        cin>>ch;
    }
    for(int i=0;i<v1.size();i++)
    {
        v1[i].show_data();
    }
}