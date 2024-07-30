#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Enter string"<<endl;
    string n;
    cin>>n;
    char temp;
    int lenbytwo=n.length()/2;
    int len=n.length();
    for(int i=0;i<lenbytwo;i++){
        temp=n[i];
        n[i]= n[len-i-1];
        n[len-i-1]=temp;
    }
    cout<<n;
    return 0;
}
