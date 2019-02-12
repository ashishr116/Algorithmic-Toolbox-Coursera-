#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,element,m1=0,m2=0;
    long long int pdt;
    cin>>n;
    if(n==1)
    {   cin>>element;
        m1=element;
        m2=1;
    }
    else{
    for(int i=0;i<n;i++)
    {
        cin>>element;
        if(element>m1)
        {
            m2=m1;
            m1=element;
        }
        else if(element>m2)
        {
            m2=element;
        }
    }
    }
    pdt=(long long int)m1*m2;
    cout<<pdt;
}
