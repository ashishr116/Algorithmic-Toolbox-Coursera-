#include <iostream>

long long get_fibonacci_last_digit_naive(long long n,long long m) {
long long previous=0;
long long current=1;
n=n+2;
if(n>60){n=n%60;
}
for(int i=0;i<=n-2;i++)
{
    long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current);
        if(current>10)
        {
            current=current%10;
        }
}
current=current-1;
return current%10;
}

int main() {
    long long n,m;
    std::cin >> n;
    long long c = get_fibonacci_last_digit_naive(n,10);
    std::cout << c << '\n';
    }
