 #include <iostream>
 
 using namespace std;
 int linearsearch(int a[],int n,int target){
    int index;
    for(int i=0;i<n;i++){
        if(target==a[i]){
            return i;
        }
    }return -1;
 }
 int main(){
       int n;
     cout<<"Enter the size of the array" ;
     cin>>n;
     int target;
     cout<<"Enter the number to be found in the array";
     cin>>target;
     int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }
     cout<<"The number "<<target<<"is found at index"<<linearsearch(a,n,target)<<endl;
     return 0;
 }