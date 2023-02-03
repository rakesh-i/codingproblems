//printout the possible permutaion for given set of elements
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#include<stack>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
using namespace std;

void prem(char *a, int i, int n);

int main()
{
    char a[] = {'a', 'b', 'c'};
    prem(a, 0, 3);
}

void prem(char *a, int i, int n){
    int temp;
    if(i==n){
        for(int k=0; k<n; k++){
            printf("%c ", a[k]);
        }
        printf("\n");
    }
    else{
        for(int j=i; j<n; j++){
            SWAP(a[j], a[i], temp);   //swaping and  setting different bases
            prem(a, i+1, n);
            SWAP(a[i], a[j], temp);  //start fresh with abc
        }
    }
}
