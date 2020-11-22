
#include <iostream>
#include <vector>
// This library used to add rand function to the code
#include <cstdlib> 

using std::cin ; 
using std::cout ; 
using std::vector ; 



long long Maixmum_Pairwise_Product_Slow(const std::vector<int>& numbers){


    long long result = 0 ; 
    int n = numbers.size() ; 
    
    for(int i=0;i<n;++i){

        for(int j=i+1; j<n ; ++j){

            if( ( (long long )numbers[i] ) * numbers[j] > result) 
                result = ( ( long long )numbers[i] ) * numbers[j] ; 
        }

    }

    return result ; 
}




long long Maixmum_Pairwise_Product_Fast(const std::vector<int>& numbers){

int n = numbers.size() ; 

int max_index_1 = -1 ; 

for(int i=0 ; i<n ; ++i){

    if( ( max_index_1 == -1 ) || ( numbers[i] > numbers[max_index_1])  )
        max_index_1 = i ; 
}

int max_index_2 = -1 ; 


for(int i = 0 ; i<n ; ++i ){

if( ( ( max_index_2 == -1)  || numbers[i] > numbers[max_index_2] ) && (i != max_index_1 ) ) 

    max_index_2 = i ; 

}


return  (  ( (long long )numbers[max_index_2] )  * numbers[max_index_1] ) ; 

}



int main() {

    while (true)
    {
        int n = rand() % 10 + 2 ; 
        cout << n << "\n" ; 

        vector<int> Test; 

        for(int i=0 ; i<n ; ++i){

            Test.push_back( rand() % 10  ) ;  
        }

        for(int i=0 ; i<n ; ++i){

            cout << Test[i] << " " ; 
        }

        cout << "\n" ; 

        long long result1 = Maixmum_Pairwise_Product_Slow(Test) ; 
        long long result2 = Maixmum_Pairwise_Product_Fast(Test) ;

        if(result1 != result2 ){

            cout << "Wrong Answer"  << result1 << ' ' << result2 << "\n" ; 
            break ; 
        } 

        else cout << "OK\n" ; 
    
    }


    int n ; 
    std::cin >> n ;
 
    std::vector<int> numbers(n) ;
    
    for(int j = 0 ; j<n ; ++j)
        std::cin >> numbers[j] ; 


    long long result = Maixmum_Pairwise_Product_Fast(numbers) ; 

    std::cout  << result << "\n" ; 

    return 0 ; 
}

 



