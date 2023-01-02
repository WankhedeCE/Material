#include <iostream>
#include <stack>
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
    stack<demo> st;
    demo d1;
    int ch;
    cout<<"\n||--Inserting--||\n";
    d1.get_data();
    st.push(d1);
    d1.get_data();
    st.push(d1);
    d1.get_data();
    st.push(d1);
    d1.get_data();
    st.push(d1);
    d1.get_data();
    st.push(d1);
    cout<<"\n||--Top is Deleted--||\n";
    st.pop();
    while (!st.empty())
    {
        st.top().show_data();
        st.pop();
    }
}