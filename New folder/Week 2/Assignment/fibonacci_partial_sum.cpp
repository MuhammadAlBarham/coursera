#include <iostream>
#include <vector>
using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}


long long F[60] ; 

long long get_fibonacci_partial_sum_fast(long long m, long long n) {

    long long res = 0 ;

    F[0] = 0;  F[1] = 1;  F[2] = 1;


    for (int i = 3; i <=60; i++) {

      F[i] = (F[i-2] %10 + F[i-1] %10) % 10; 

    }
   
      n = n%60 ; 
      m = m%60 ; 

 //   std::cout << n << ' ' << m  << ' ' << std::endl; 


   // if (to < from)
   //     to = (to + from) + 1;

    if(n<m) n = n+m +1 ; 

  //  std::cout << "Second " << n << ' ' << m  << ' ' << std::endl; 

/*
    if ( n < m ){
    long long temp_m = m ;
     m = n ; 
     n = temp_m ; 
    }*/
     for ( int i = m; i<=n ; ++i)
     {
        res +=   F[i] % 10 ; 
    //    std::cout << F[i] << ' ' ; 
     }

 // std::cout << std::endl ;

    return ( res % 10) ;

}


int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}
