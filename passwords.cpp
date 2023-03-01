#include <iostream>
#include <vector>
#include <string.h>
#include<cstring>
using namespace std;
string DaoNguoc(string s) {
    int length = s.length();
    string temp;
    for (int i = length-1; i >=0; i--) {
        temp=temp+s[i];
    }
    return temp;
}
bool kiemtra(string a, string b)
{
    int m=a.size(),n=b.size();
    for(int i=0; i<m; i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
int main() {
    int n,length,tmp;
    cin>>n;
    string passwords[n];
    for(int i=0; i<n; i++){
        cin>>passwords[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(kiemtra(passwords[i],DaoNguoc(passwords[j]))){
            length=passwords[j].size();
            tmp=j;
         }
        }
    }
    
    cout << length <<" "<< passwords[tmp][length/2]<<endl;

    return 0;
}
