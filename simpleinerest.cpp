#include<iostream>
using namespace std;
int s_i(int p, int r,int t);
int main (){
    int p,r,t;
    cout<<"enter principle,time and rate"<<endl;
    cin>>p>>r>>t;
    int ans=s_i(p,r,t);
    cout<<"simple interest is"<<ans<<endl;
    }
   int s_i(int p, int r,int t){
       int si=p*r*t/100;
       return si;
   } 
