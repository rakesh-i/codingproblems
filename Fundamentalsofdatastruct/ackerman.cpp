#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define COMPARE(x, y) (((x)<(y))?-1:((x)==(y))?0:1)

unsigned int acker(unsigned int, unsigned int);      //recursive method  
// iterative method is really really hard

int main()
{
    unsigned int m, n;
    printf("Enter m and n : ");
    scanf("%d %d", &m, &n);
    printf("The result is %d\n", acker(m,n));
}

unsigned int acker(unsigned int m, unsigned int n){
    //printf("m = %d n = %d\n", m, n);
    if(m==0){
        return n+1;
    }
    if(n==0){
        return acker((m-1),1);
    }
    else{
        return acker(m-1, acker(m, n-1));
    }
}
