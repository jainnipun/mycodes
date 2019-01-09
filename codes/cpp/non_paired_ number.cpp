#include <iostream>
using namespace std;

int main() {
  int n;
	cin>>n;
	while(n)
	{
	    int result = 0;
	    int count,num;
	    cin>>count;
	    for(int i=0;i<count;i++)
	    {
	        cin>>num;
	        result = result^num;
	        
	    }
	    cout<<result<<"\n";
	    n--;
	}
	return 0;
}
