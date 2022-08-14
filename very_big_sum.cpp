/*
 * In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

int ar[n]: an array of integers .
Return

long: the sum of all array elements

Input Format

The first line of the input consists of an integer n.
The next line contains n space-separated integers contained in the array.

*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    long arr[n],sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }

    cout<<sum;
}

