/*
Author : Pain 
Date : 12-7-2020
*/

#include<bits/stdc++.h>

using namespace std ; 


vector<int> A,B ; 

int main(){

  
    int m ; scanf("%d", &m) ; 

    int ans = 0 ; 
    int rem ;  // reminder 

    
    ans = ans + m/10 ; 
    m = m%10 ; 

    ans = ans + m/5 ; 
    m = m % 5 ; 

    ans = m + ans; 


    printf("%d\n" , ans) ; 

    return 0 ; 
}