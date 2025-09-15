 #include <iostream>
 
 using namespace std;
 int setbits(int n){
int ans=0;
int power=1;
int rem;
while(n>0){
rem=n%2;
n/=2;
ans+=(rem*power);
power*=10;
}
return ans;
 }
 int countsetbits(int n){
    int c=0;
    while(n>0){
        if(n%2==1){
            c++;
        }
        n/=2;
    }
    return c;
 }
 int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int c=0;
cout<<"The conversion of "<<n<<" to binary is:"<<" "<<setbits(n)<<endl;
cout<< "The number of setbits in "<<setbits(n)<<" is:"<<countsetbits(n)<<endl;
     return 0;
 }