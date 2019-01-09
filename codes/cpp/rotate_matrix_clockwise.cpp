
#include <iostream>
using namespace std;

void rotateMatrix(int arr[10][10],int n)
{
    int start=0,end=n-1;
    while(start < end)
    {
        int temp;
        for(int i=start;i<end;i++)
        {
            temp = arr[start][i];
            arr[start][i] = arr[end-i+start][start];
            arr[end-i+start][start] = arr[end][end-i+start];
            arr[end][end-i+start] = arr[i][end];
            arr[i][end] = temp;

        }
        start++;
        end--;
    }
}
void printMatrix(int arr[10][10],int n)
{
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
          cout<<arr[i][j]<< " ";
      cout<<"\n";
    }
}
int main() {
    int cases, n;
    cin>>cases;
    int arr[10][10];
    while(cases)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>arr[i][j];
       rotateMatrix(arr,n);
       for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cout<<arr[i][j]<<" ";
       cout<<"\n";
       cases--;
    }
    return 0;
}
