/*
Author : Pain 
Date : 17-7-2020
Time : 2:14 a.m.
*/

#include<bits/stdc++.h>

using namespace std ; 


int main(){

  
    int d,m,n ; // scanf("%d%d%d", &d ,&m, &n) ;

	cin >> d >> m >> n ; 
	
    vector<int> A(n+2) ;

    A[0] =  0 ; 

    for(int i=1; i<=n ; i++){

      //  scanf("%d", &A[i]   ) ;
      cin >> A[i] ; 
    }
    
    A[n+1] = d ; 
    
/*     for(int i=0; i<=n+1 ; i++){

        printf("%d ", A[i]   ) ;
    }
   */ 

    int num_ref = 0 , current_ref = 0 ; 

    while(current_ref<=n)
    {

        int last_ref = current_ref ; 

        while( ( current_ref <= n  ) && ( (  A[current_ref+1] - A[last_ref] ) <=m ) )
        
        {
            current_ref += 1 ; 
        }

        if (current_ref==last_ref) { cout << -1 ; return 0 ;} 

        if (current_ref <= n ) num_ref += 1 ;   

    }


    cout<< num_ref << endl; 

    return 0 ; 
}