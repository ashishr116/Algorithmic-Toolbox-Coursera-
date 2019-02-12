#include <iostream>

long long get_fibonacci_last_digit_naive(long long n,long long m) {
    if (n <= 1)
        return n;

    long long previous = 0,p=0;
    long long current  = 1;
    while(1){
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
        p++;
        if(previous==0 && current==1)
        {
            break;
        }

    }

previous=0;
current=1;
n=n%p;
if (n <= 1)
        return n;
for(int i=0;i<=n-2;i++)
{
    long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
}
return current%m;
}

int main() {
    long long n,m;
    std::cin >> n;
    std::cin >> m;
    long long c = get_fibonacci_last_digit_naive(n,m);
    std::cout << c << '\n';
    }
