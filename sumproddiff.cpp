#include <iostream>

using namespace std;
int sumofdigits(int n){
int digitsum=0;
while(n>0){
int num=n%10;
n/=10;
digitsum+=num;
}
return digitsum;
}
int productofdigits(int n){
int digitsum=1;
while(n>0){
int num=n%10;
n/=10;
digitsum*=num;
}
return digitsum;
}
int main(){
    int n;
     cout<<"Enter a number" ;
 cin>>n;
 cout<<"The sum of digits of "<<"" << n <<"is"<<" "<<sumofdigits(n)<<endl;
 cout<<"The product of digits of "<<"" << n <<"is"<<" "<<productofdigits(n)<<endl;
 cout<<"Difference of product and sum of digits of number"<<n<<"is"<<" "<<abs(sumofdigits(n)-productofdigits(n))<<endl;
     return 0;
}