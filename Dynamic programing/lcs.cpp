#include<iostream>
using namespace std;




//memoization
int lcs_mem(string s,string t, int**output){
    int m=s.size();
    int n=t.size();
    // base case
    if(s.size()==0 || t.size()==0) return 0;
    if(output[m][n]!=-1){//check if output already exists
        return output[m][n];
    }
    int ans;
    if(s[0]==t[0]){
ans=1+lcs_mem(s.substr(1),t.substr(1),output);
    }
    else{
    int a=lcs_mem(s.substr(1),t,output);
    int b=lcs_mem(s,t.substr(1),output);
    int c=lcs_mem(s.substr(1),t.substr(1),output);
    }
    output[m][n]=ans;// save your calculations
    return ans;
}
int lcs_mem(string s,string t){
    int m=s.size();
    int n=t.size();
    int **output=new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i]=new int[n+1];
        for(int j=0;j<=n;j++){
            output[i][j]=-1;
        }
    }
    return lcs_mem(s,t,output);
}




int lcs(string s,string t){
    // base case
    if(s.size()==0 || t.size()==0){
        return 0;
    }
    if(s[0]==t[0])// if 1st character matches
    {
        return 1+lcs(s.substr(1),t.substr(1));
    }
    else{
    int a=lcs(s.substr(1),t);
    int b=lcs(s,t.substr(1));
    int c=lcs_mem(s.substr(1),t.substr(1));

    return max(a,max(b,c));
    }
    
}
int main(){
string s,t;
cin>>s>>t;
cout<<lcs(s,t)<<endl;
cout<<lcs(s,t)<<endl;
return 0;
}