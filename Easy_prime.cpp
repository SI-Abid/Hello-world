#include"bits/stdc++.h"
#define MAX 10000002
using namespace std;


bool prime[MAX];

void sieve()
{
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=MAX; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<=MAX; i += p) 
                prime[i] = false; 
        }    
    } 
}