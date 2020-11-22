
#include <iostream>
#include <vector>

/* 
long long Maixmum_Pairwise_Product(const std::vector<int>& numbers){


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

*/ 


long long Maixmum_Pairwise_Product(const std::vector<int>& numbers){

int n = numbers.size() ; 

int max_index_1 = 0 ; 

for(int i=0 ; i<n ; ++i){

    if( ( max_index_1 == -1 ) || ( numbers[i] > numbers[max_index_1])  )
        max_index_1 = i ; 
}

int max_index_2 = 0 ; 


for(int i = 0 ; i<n ; ++i ){

if( ( ( max_index_2 == -1)  || numbers[i] > numbers[max_index_2] ) && (i != numbers[max_index_1] ) ) 

    max_index_2 = i ; 

}


return  (  ( (long long )numbers[max_index_2] )  * numbers[max_index_1] ) ; 

}

int main() {

    int n ; 
    std::cin >> n ;
 
    std::vector<int> numbers(n) ;
    
    for(int j = 0 ; j<n ; ++j)
        std::cin >> numbers[j] ; 


    long long result = Maixmum_Pairwise_Product(numbers) ; 

    std::cout  << result << "\n" ; 

    return 0 ; 
}

