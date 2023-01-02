#include <iostream>
#include <map>
#include <string.h>
using namespace std;
int main()
{
    int code;
    string gname;
    map<string, int> gamemap;
    int n, i;
    cout << "\nEnter a size: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter a game name = ";
        cin >> gname;
        cout << "\nEnter a code = ";
        cin >> code;

        gamemap[gname] = code;
    }
    map<string, int>::iterator itr;
    for(itr=gamemap.begin();itr!=gamemap.end();itr++)
    {
        cout<<"\n"<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    return 0;
}