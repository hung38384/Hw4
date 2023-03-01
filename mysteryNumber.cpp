#include <iostream>
using namespace std;


int main() {
    int n,tong_a=0,tong_b=0;
    cin>>n;
    int a[n],b[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        tong_a += a[i];
    }
    for(int i=0; i<=n; i++)
    {
        cin>>b[i];
        tong_b += b[i];
    }
    int tong=tong_b-tong_a;
    cout<<tong<<endl;
    return 0;
}
