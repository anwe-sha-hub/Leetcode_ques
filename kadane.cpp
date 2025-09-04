 #include <iostream>
 #include <climits>
 using namespace std;
 int kadane(int a[],int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=a[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
 }
 int main(){
    int n;
     cout<<"Enter the size of the array" ;
     cin>>n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }
     cout<<"The sum of the subarray from the largest subarray is "<<kadane(a,n)<<endl;
     return 0;
 }