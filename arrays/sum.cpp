             /*          SUM OF ARRAY                    */

                   //n=10 20 30 40 50 
              //for i=0 sum=0+10  then sum value is 10
                        //for i=1  sum=10+20 then sum value is 30
                     //for i=2 sum=30+30 then sum value is 60
                                     //for i=3 sum=60+40 then sum value is 100
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;     
    
                                    
cin>>n;                                     
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<sum<<endl;
return 0;
}