#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector <int> v{1,2,3,4,5,6,7,8,9,10};
    stack <int, vector <int>> s(v);
    cout <<"Size first stack --> " <<  s.size() << endl;
    while (s.top() != 7) 
    {
        s.pop();
    }
    stack <int, vector <int>> s2(s);
    cout << "Size first stack after --> " << s.size() << endl;
    cout << "Size second stack --> " << s2.size() << endl;
    while (s2.top() != 3)
    {
        s2.pop();
    }
    cout << "Size second stack after --> " << s2.size() << endl;
}