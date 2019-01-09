#include <iostream>
using namespace std;

int log2(int n)
{
	int log = 0;
	while(n>>=1) //Divding by 2 
	{
		log++;
	}
	return log;
}

int shiftAndLog(int n)
{
	// return ( ( n^(1<<log2(n)) )<<1 )+1;
	
	return ( ( n&( (1<<log2(n)) -1) )<<1 )+1;
}
int shiftingBits(int n)
{
        int pow = 1, temp =n, msb = 0;
        while(temp>>=1)
        {
            msb++;
        }
        pow<<=msb;
	int ans=((n^pow)<<1) + 1;
	return ans;
}
int math(int n)
{
    int pow = 1;
    int temp = n;
    while(temp>>=1)
    {
        pow<<=1;
    }
    int ans=1+(n-pow)*2;	
}
int main() {
	int cases,n;
	cin>>cases;
	while(cases)
	{
	    cin>>n;
	    int pow = 1;
	    int temp = n;
	    while(temp)
	    {
	        pow<<=1;
	        temp>>=1;
	    }
	    pow/=2;
	    int ans=1+(n-pow)*2;
	    cout<<ans;
	    cout<<"\n";
	    cases--;
	}
	return 0;
}
