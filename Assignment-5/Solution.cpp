#include<bits/stdc++.h>
using namespace std;

int GeometricSequenceSum(int a[], int size)
{
    //base case
    if (size == 0)
    {
        return 0;
    }
    else if (size == 1)
    {
        return a[0];
    }

    //divide and conquer
    int middle = size / 2;
    int rightSize = size - middle;
    int leftSum = GeometricSequenceSum(a, middle);
    int rightSum = GeometricSequenceSum(a + middle, rightSize);
    return leftSum+rightSum;
}

int main(){
    int n,x;
    cout<<"Enter a value of n :";
    cin>>n;
    cout<<"Enter a value of x :";
    cin>>x;
    int a[n];
    a[0]=x;
    for(int i=1;i<n;i++)
    {
        a[i]=x*a[i-1];
    }
    cout<<"Sum of the geometric sequence wil be : "<< GeometricSequenceSum(a,n)<<endl;
}