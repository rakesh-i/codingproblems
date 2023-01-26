//reverse an array using pointers
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

void reverse(int *a, int n){
    while(n>0){
        cout<<*(a+n-1)<<" ";
        n--;
    }

}

int main(){
    int a[] = {5, 4, 3, 2, 1, 0};
    int length = sizeof(a)/sizeof(int);
    reverse(a, length);

}
