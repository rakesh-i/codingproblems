//solution of
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define COMPARE(x, y) (((x)<(y))?-1:((x)==(y))?0:1)

int horner(int*, int, int);
int hornerrecursive(int*, int, int);

int main()
{
    int *a, ce;
    printf("Enter the degree of polynomial: \n");
    scanf("%d", &ce);
    a = (int*)calloc(ce+1, sizeof(int));
    int length = ce+1; 
    printf("Enter the coeffecients form the highest degree:\n");
    for(int i=0; i<length; i++){
        scanf("%d", &a[i]);
    }
    printf("The polynomial is : ");
    for(int i=0; i<length; i++){
        printf("(%dx^%d)+", a[i], length - i-1);
    }
    printf("\n");
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    int result = hornerrecursive(a, length-1, x);
    printf("The solution for x=%d is %d ",x, result);
}

int horner(int *a, int len, int x){
    int result = a[0];
    for(int i=1; i<len; i++){
        result = result*x + a[i];
    }
    return result;
}

int hornerrecursive(int *a, int n, int x){
    if(n==0){
        return a[0];
    }
    else{
        return hornerrecursive(a, n-1, x)*x+a[n];
    }
}
