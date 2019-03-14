#include <iostream>

int get_change(int m) {
    int steps=0;
    if(m<5)
    {
        return m;
    }
  while(m>=5)
  {
    if(m>=10)
    {
        steps=steps+m/10;
        m=m%10;
    }
    else if(m>=5)
    {
        steps=steps+m/5;
        m=m%5;
    }
  }
  steps=steps+m;
  return steps;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
