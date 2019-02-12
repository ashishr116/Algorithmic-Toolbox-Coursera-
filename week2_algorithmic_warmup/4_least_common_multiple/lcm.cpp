#include <iostream>

int gcd_naive(int a, int b) {
    int temp;
 while(b!=0)
 {
     temp=a;
     a=b;
     b=temp%a;
 }
  return a;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  int c=gcd_naive(a, b);
  long long lcm=((long long)a*b)/(long long)c;
  std::cout<<lcm;
  return 0;
}
