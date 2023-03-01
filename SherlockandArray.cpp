#include<iostream>
using namespace std;
string checks(int t)
{
   int a[t+1];
   a[t]=0;
    int tong_trai=0,tong_phai=0;
    for(int j=0; j<t; j++)
    {
        cin>>a[j];
        tong_phai += a[j];
    }
    tong_phai-=a[0];
    for(int j=0; j<t; j++)
    {
        if(tong_phai==tong_trai) return "Yes";
        tong_trai += a[j];
        tong_phai -= a[j+1];
    }
    return "No";
}
int main ()
{
  int n;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    int t;
    cin>>t;
    cout<<checks(t)<<endl;
  }
}