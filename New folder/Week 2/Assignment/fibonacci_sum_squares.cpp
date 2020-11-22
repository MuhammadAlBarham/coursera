#include <iostream>

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}


long long F[60] ; 

long long get_fibonacci_huge_mod(long long n) {

    long long res = 4;

    F[0] = 0;  F[1] = 1;  F[2] = 1;

    for (long long i = 3; i <=60; i++) {

      F[i] = (  F[i-2] +  F[i-1]  )   % 10;

    }
   
     long long rem = n%60 ; 

     res = F[rem] * F[rem+1] ;  

   //  for ( int i = 4; i<=rem ; ++i)
    //    res = ( res *res  +  F[i]*F[i]  ) % 10 ; 
    
    return (res%10);

}


int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << get_fibonacci_huge_mod(n);
}
