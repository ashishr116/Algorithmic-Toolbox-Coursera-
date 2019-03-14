#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {

for(int i=1;i<stops.size();i++)
{
    if(stops[i]-stops[i-1]>tank)
    {
        return -1;
    }
}
if(stops[0]>tank)
{
    return -1;
}
if((dist-stops[stops.size()-1])>tank)
{
    return -1;
}
int coun=0,i=0,x=0,d1=tank;
while(i<stops.size())
{
    x=stops[i];
    if(x>d1)
    {
        d1=stops[i-1]+tank;
        coun++;
    }
    i++;
}
if(d1<dist)
{
    coun++;
}
return coun;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
