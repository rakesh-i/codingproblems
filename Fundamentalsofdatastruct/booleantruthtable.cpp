#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#include<stack>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define NOT(x) (((x)<1)?1:0) 
using namespace std;

void prem(int *a, int i, int n);

int main()
{
    int a[] = {1, 1, 1, 1}; 
    prem(a, 0, 3);   
}

void prem(int *a, int i, int n){
    if(i==n){
        for(int j=0; j<n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    else{
            prem(a, i+1, n);
            a[i] = NOT(a[i]);
            prem(a, i+1, n);
        
    }
}
