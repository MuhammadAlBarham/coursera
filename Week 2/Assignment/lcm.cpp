#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}


int gcd_fast(int a, int b){

    if (b==0) return a ; 

    int remain = 0 ; 

    if(a<b)
    {
        int temp_b = b ; 
        b = a ; 
        a = temp_b ;
    }

    while(b!=0){

        remain = a%b ; 
        a = b ; 
        b = remain ; 

    }


return a ; 
    
}


int main() {
  int a, b;
  std::cin >> a >> b;
  // std::cout << gcd_naive(a, b) << std::endl;
  std::cout << ( ( (long long) a )*b)/gcd_fast(a , b) << std::endl ;

  return 0;
}
