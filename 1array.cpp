Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1



Solution :
#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        
        int start=0;
        int end=N-1;
        int temp;
        
        while(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
