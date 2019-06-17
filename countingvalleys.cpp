#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int valley=0;
    stack<char> res;
    for (int i=0;i<s.length();i++)
    {
        if (res.empty())
        {
            res.push(s[i]);
            if (s[i]=='D')
            {
                valley++;
            }
        }

        else
        {
            if (res.top() == s[i])
            {
                res.push(s[i]);
            }
            else
            {
                res.pop();
            }
        }

    }
    cout<<valley<<endl;
}
