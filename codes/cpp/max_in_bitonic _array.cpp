#include <iostream>
#include<vector>
using namespace std;


int bitonicBinary(vector<int> arr, int n)
{
    int start = 0, end = n-1,mid;
    int maxVal = 0;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(maxVal < arr[mid])
        {
            maxVal = arr[mid];
        }
        if(mid+1 < n && arr[mid] > arr[mid+1])
        {
            end = mid-1;
        }
        else
        {
            start = mid +1;
        }
    }
    return maxVal;
}

int main() {
	//code
	int cases, n, num ;
    cin>>cases;
    vector<int> arr;
    while(cases>0)
    {
        cin>>n;
        arr.clear();
        int max = 0;
        for(int i=0;i<n;i++)
            {
                cin>>num;
                arr.push_back(num);
                if(max < arr[i])
                    max = arr[i];
            }
//        cout<<max<<"\n";
        cout<<bitonicBinary(arr,n)<<"\n";
        cases--;    
    }
	return 0;
}
