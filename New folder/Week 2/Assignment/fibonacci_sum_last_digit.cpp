#include <iostream>
#include <algorithm> 


using namespace std ; 

 long long F[60] ; 

long long get_fibonacci_huge_mod(long long n, long long m) {

    long long res = 0 ;

    F[0] = 0;  F[1] = 1;  F[2] = 1;


    for (long long i = 3; i <=60; i++) {


      F[i] = (F[i-2] %10 + F[i-1] %10)   % 10; 

    }
   
     long long rem = n%60 ; 

     for ( int i = 0; i<=rem ; ++i)
        res = ( res  +  F[i] ) % 10 ; 
    
    return (res%10);

}


int main() 
{
    long long n;
    std::cin >> n;

    int c = get_fibonacci_huge_mod(n,10) ;
    std::cout << c<< '\n';
    
}



