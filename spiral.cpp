#include <bits/stdc++.h> 
using namespace std; 
const int R =3;
const int C =6;
  
void spiralOrder(int m, int n, int mat[3][6]) 
{ 
    
    int  i = 0, j = 0, ei=m/2, ej=n/2;
    int mn=0, rmx=m, cmx=n;
    while(!(i==ei && j==ej))
    {
        while(j<cmx)
        {
            cout<<mat[i][j]<<" ";
            j++;
            
        }
        cmx--;
        while(i<rmx)
        {
            cout<<mat[i][j]<<" ";
            i++;
        }
        rmx--;
        while(j>=mn)
        {
            cout<<mat[i][j]<<" ";
            j--;
        }
        mn++;
        while(i>=mn)
        {
            cout<<mat[i][j]<<" ";
            i--;
        }
    }
     
} 
  
int main() 
{ 
    
    int mat[R][C] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
      
   
    spiralOrder(R, C, mat);
    return 0; 
} 
