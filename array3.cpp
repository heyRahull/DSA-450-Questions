/*Sort an array of 0s, 1s and 2s 
Easy Accuracy: 51.36% Submissions: 42366 Points: 2
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^5
0 <= A[i] <= 2

/*

Solution :

void sort012(int a[], int n)
{
    // code here 
    int p=0,q=0,r=0;    //p,q,r will contain the count of 0,1,2 in the array.
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        p++;
        if(a[i]==1)
        q++;
        if(a[i]==2)
        r++;
    }
    
   int i=0;
    
        while(p>0)
        {
            a[i]=0;
            p--;
            i++;
        }
        while(q>0)
        {
            a[i]=1;
            q--;
            i++;
        }
        while(r>0)
        {
            a[i]=2;
            r--;
            i++;
        }
    
}
