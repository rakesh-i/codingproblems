//printout the possible permutaion for given set of elements
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define COMPARE(x, y) (((x)<(y))?-1:((x)==(y))?0:1)

void prem(char *list, int i, int n); //select the sub set form the list

int main()
{
    char a[] = {'a', 'b', 'c', 'd'};
    prem(a, 0, 3);
}

void prem(char *list, int i, int n){
    int j, temp;
    //printf("(%d,%d) ", i, n);
    if(i==n){
        //printf("|");
        for(j=0; j<=n; j++){
            printf("%c ", list[j]);
        }
        printf("\n");
    }
    else{
        for(j=i; j<=n; j++){
            //printf("s1 ");
            SWAP(list[i], list[j], temp);
            //printf("s2 ");
            prem(list, i+1, n);
            //printf("s3 ");
            SWAP(list[i], list[j], temp);
            //printf("s4\n");
        }
    }
}

