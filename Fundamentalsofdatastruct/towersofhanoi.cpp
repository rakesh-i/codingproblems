#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#include<stack>
using namespace std;

void hanoi(int n, char from, char to, char aux);

int main()
{
    hanoi(10, 'A', 'C', 'B');
}

void hanoi(int n, char from, char to, char aux){
    static int count = 0;
    //cout<<count++<<endl;
    if(n==0){
        return;
    }
    hanoi(n-1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n-1, from, to, aux);
}
