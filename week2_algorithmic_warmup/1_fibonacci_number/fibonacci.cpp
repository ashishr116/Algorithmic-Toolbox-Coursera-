#include <iostream>
#include <cassert>
int fibonacci_naive(int n) {
   int a=0,b=1,c;
   if(n==1)
   {
       c=1;
   }
   if(n==0)
   {
       c=0;
   }
   for(int i=2;i<=n;i++)
   {
       c=a+b;
       a=b;
       b=c;
   }
   return c;
}

int main() {
    int n = 0;
    std::cin >> n;

    std::cout << fibonacci_naive(n) << '\n';

    return 0;
}
