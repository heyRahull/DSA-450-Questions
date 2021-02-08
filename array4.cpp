/*Move all negative elements to end 
Easy Accuracy: 46.85% Submissions: 476 Points: 2
Given an unsorted array having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

 

Example 1:

Input : 
A[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5

Example 2:

Input : 
A[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output :
7  9  10  11  -5  -3  -4  -1
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function segregateElements() which takes the array A[] and its size N as inputs and store the answer in the array A[] itself.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
 


Constraints:
1 ≤ N ≤ 105
-105 ≤ A[] ≤ 105
*/

Solution :
Since in the question it is mentioned that we can make use of O(n) extra space, so we have taken an extra array.


void segregateElements(int arr[],int n)
{
    // Your code goes here
    
    int b[n];   //taken an extra array named b[]
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)        //pushing all the positive elements to b[]
        {
            b[j]=arr[i];
            j++;
        }
    }
    
    for(int i=0;i<n;i++)   //pushing all the negative elements to b[]
    {
        if(arr[i]<0)
        {
            b[j]=arr[i];
            j++;
        }
    }
    
    for(int i=0;i<n;i++)  //copying all the values of b[] to arr[]
    {
         arr[i]=b[i];
    }
}
