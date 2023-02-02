//check if divisors of n sums to n
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define COMPARE(x, y) (((x)<(y))?-1:((x)==(y))?0:1)

int ye(int);

int main()
{
    for(int i=2; i<100000; i++){
        if(ye(i)){
            printf("%d-%d \n", i, ye(i));
        }
    }
}

int ye(int x){
    int count = 0;
    int sum = 0;
    for(int i=1; i<x; i++){
        if(x%i==0){
            sum +=i;
        }
    }
    if(sum==x){
        return 1;
    }
    else{
        return 0;
    }
}
