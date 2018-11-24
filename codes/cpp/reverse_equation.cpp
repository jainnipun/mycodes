#include <bits/stdc++.h>
using namespace std;

string reverseEquation(string s)
{
    string sol = s;
    int start =0;
    int i=0;
    int len = s.length();
    len--;
    bool isNumStart =false;
    while(s[i]!='\0')
    {
        if(s[i] == '-' && isNumStart==false)
        {
            isNumStart = true;
        }
        else if (s[i] == '+' || s[i] == '-' ||
            s[i] == '/' || s[i] == '*') {
                for(int src = i-1;src>=start;src--,len--)
                {
                    sol[len] = s[src];
                }
                isNumStart = false;
                sol[len--]=s[i];
                start = i+1;
            }
        else
        {
            isNumStart = true;
        }
        i++;
    }
    for(int src = i-1;src>=start;src--,len--)
    {
        sol[len] = s[src];
    }
    return sol;
}
int main()
{
    string s = "-25/44.12+3--2*-11";
    cout << reverseEquation(s) << endl;

    return 0;
}
