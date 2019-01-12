/*
Given an integer X within the range of 0 to 9, 
and given two positive integers as upper and lower bounds respectively, 
find the number of times X occurs as a digit in an integer within the range, 
excluding the bounds. 

Print the frequency of occurrence as output.
*/
#include <iostream>
using namespace std;

int foreach(int pow)
{
    switch(pow)
    {
        case 1:return 0;
        break;
        case 10:return 1;
        break;
        case 100:return 20;
        break;
        case 1000:return 300;
        break;
        case 10000:return 4000;
        break;
    }
}
// Metod 1 O(len(upper)) => O(1) or O(k)
int getNumx(int n, int x)
{
    int pow = 1;
    int total = 0;
    int rightnum = 0;
    while(n>0)
    {
        int d=n%10;
        n=n/10;
        total += d * foreach(pow);
        if(d>x && x!=0)
            {
                    total += pow;
            }
	else if(d == x)
	{
		if(x!=0 || n>0)
		{
		    total += 1;
		    total += rightnum;
		}
		if(x == 0 && n>0)
		{
		    total -= pow;
		}
	}
        rightnum += d *pow;
        pow = pow *10;
    }
    return total;
}

//Method 2 : traverse frm lower to upper and count for digit occurance
// O((u-l) * len(upper))
//O(n) to O(nk)
int getOccuranceX(int l,int u, int x)
{
    int total = 0;
	    for(int i = l+1;i<u;i++)
	    {

	        for(int n=i;n>0;n/=10)
	        {
	            int d = n%10;
	            if(d==x)
	                total++;
	            
	        }
	    }
    return total;
}
int main() {
int q;
	cin>>q;
	while(q)
	{
	    int x,l,u;
	    cin>>x>>l>>u;
	    
	    //int total = getOccuranceX(l, u , x);
	    
	    int total = getNumx(u-1,x) - getNumx(l,x);
        cout<<total<<"\n";

	    q--;
	}	return 0;
}
