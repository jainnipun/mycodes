#include<iostream>
using namespace std;

#define M 3
#define N 4

void printSpiral(int arr[][N], int m, int n)
{
    int rowstart=0,rowend=m-1,colstart=0,colend=n-1;
    for(;rowstart<=rowend && colstart<=colend;)
    {
        for(int col= colstart;col<=colend;col++)
        {
            cout<<arr[rowstart][col]<<" ";
        }
        rowstart++;
        for(int row = rowstart;row<=rowend;row++)
        {
            cout<<arr[row][colend]<<" ";
        }
        colend--;
        if(rowstart<=rowend)
        {
            for(int col=colend;col>=colstart;col--)
            {
                cout<<arr[rowend][col]<<" ";
            }
        }
        rowend--;
        if(colstart<=colend)
        {
            for(int row= rowend;row>=rowstart;row--)
            {
                cout<<arr[row][colstart]<<" ";
            }
        }
        colstart++;
    }
}
int main()
{
    int arr[M][N] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printSpiral(arr,M,N);
    return 0;
}
