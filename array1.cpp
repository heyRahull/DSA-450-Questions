Maximum and Minimum Of Array Elements 
School Accuracy: 49.96% Submissions: 18457 Points: 0
Given an array A[ ], find maximum and minimum elements from the array.

Input:
The first line of input contains an integer T, denoting the number of testcases. The description of T testcases follows. The first line of each testcase contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
For each testcase in a new line, print the maximum and minimum element in a single line with space in between.

Constraints:
1 ≤ T ≤ 30
1 ≤ N ≤ 100
0 ≤A[i]<100

Example:
Input:
2
4
5 4 2 1
1
8

Output:
5 1
8 8

Explanation:
Testcase 1:
Maximum element is: 5 
Minimum element is: 1

Solution :
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n;
	    cin>>n;
	    int arr[n];
	    int max;
	    int min;
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	   
	    if(n==1)
	    {
	        max=arr[n-1];
	        min=arr[n-1];
	    }
	    else
	    {
	        if(arr[0]>arr[1])
	        {
	            max=arr[0];
	            min=arr[1];
	            
	            
	        }
	        else
	        {
	            min=arr[0];
	            max=arr[1];
	        }
	        
	        for(int i=2;i<n;i++)
	        {
	            if(arr[i]<min)
	            min=arr[i];
	            if(arr[i]>max)
	            max=arr[i];
	        }
	    }
	    cout<<max<<" ";
	    cout<<min;
	    cout<<endl;
	    }
	}
