{
#include<bits/stdc++.h>
using namespace std;
int transitionPoint(int arr[],int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<transitionPoint(a,n)<<endl;
	}
	return 0;
}
}

/*

input having squence of 0 then sequence of 1
Find point where 1 starts
*/

int transitionPoint(int arr[],int n)
{
 int start = 0, end = n-1,mid=-1;
    int transition = -1;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid] == 0)
        {
            start = mid+1;
        }
        else
        {
            //here arr[mid] == 1 
            if(mid==0 || arr[mid-1]==0)
                return mid;
            end = mid-1;
        }
    }
    return mid;
}
