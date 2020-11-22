/*
Author : Pain 
Date : 12-7-2020
*/

#include<bits/stdc++.h>

using namespace std ; 


vector<int> A,B ; 
vector< pair<double,int> > C ; 

int main(){

  
    int n,w ; scanf("%d%d", &n ,&w) ;

    // cout << n << " " << w ; 

    
    int y = n ; 
    while(y--){

    int i,j ; scanf("%d%d", &i , &j) ; 
    A.push_back(i) ; B.push_back(j) ;
    // printf("%d %d", i, j) ;
    } 

    // printf("\n") ; 

    // printf("%d", n) ; 

    for(int i =0 ; i<n ; i++)
    {

        C.push_back( make_pair( (  (double)A[i] ) /B[i] , i) ) ; 
      //  printf("%f ", C[i].first) ; 
    }

    sort(C.begin(), C.end() ) ; 
    reverse(C.begin(), C.end()) ; 

 


    int a ; 
    double value =  0 ; 

    for(int i=0; i<n ; i++)
    {

        int idx = C[i].second; 

        a = min(B[idx], w) ; // Take the min of item's weight and knapsack weight 

        value = value +  a * (  ((double)A[idx] /B[idx]) ) ; 

        w = w - a ; 

        B[idx] = B[idx] - a ; 
    }



     printf("%.4f\n" , value) ; 

    return 0 ; 
}