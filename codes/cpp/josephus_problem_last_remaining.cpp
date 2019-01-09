#include <iostream>
using namespace std;

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
