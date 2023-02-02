#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define COMPARE(x, y) (((x)<(y))?-1:((x)==(y))?0:1)

int coef(int, int);    //iterative method
int coefre(int, int);  //recursive method

int main()
{
    int n, k;
    printf("Enter the degree and and the coeffecient to find: ");
    scanf("%d %d", &n, &k);
    printf("The result is %d\n", coefre(n,k));

}

int coef(int n, int k){
    int result=0, num=1, den=1;
    int x = n-k;
    for(int i=n; i>=1; i--){
        if(i>x){
            num *= i;
        }
        if(i<=k){
            den *=i;
        }
    }
    result = num/den;
    return result;
}

int coefre(int n, int k){ 
    if(k==0||k==n){
        return 1;
    }
    else{
        return (coefre(n-1, k-1)+coefre(n-1, k));
    }
}
