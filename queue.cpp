#include <iostream>
#include <queue>
using namespace std;
class demo
{
    int a;

public:
    void get_data()
    {
        cout << "\nEnter a value of a = ";
        cin >> a;
    }
    void show_data()
    {
        cout << " " << a;
    }
};
int main()
{
    queue<demo> qu;
    demo d1;
    int ch;
    cout<<"\n||--Inserting--||\n";
    d1.get_data();
    qu.push(d1);
    d1.get_data();
    qu.push(d1);
    d1.get_data();
    qu.push(d1);
    d1.get_data();
    qu.push(d1);
    d1.get_data();
    qu.push(d1);
    cout<<"\n||--Front is Deleted--||\n";
    qu.pop();
    while (!qu.empty())
    {
        qu.front().show_data();
        qu.pop();
    }
}