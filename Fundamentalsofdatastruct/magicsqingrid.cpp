#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include<vector>
using namespace std;

void print(vector<vector<int>> &a);

    int hor(vector<vector<int>> &a){
        int temp=0;
        for(int i=0; i<3; i++){
            int sum =0;
            for(int j=0; j<3; j++){
                if(temp==a[i][j]){
                    return 0;
                }
                if(a[i][j]>=10||a[i][j]<=0){
                    return 0;
                }
                sum += a[i][j];
                temp = a[i][j];
            }
            if(sum!=15){
                return 0;
            }
        }
        return 1;
    }
    int ver(vector<vector<int>> &a){
        for(int i=0; i<3; i++){
            int sum =0;
            for(int j=0; j<3; j++){
                sum += a[j][i];
            }
            if(sum!=15){
                return 0;
            }
        }
        return 1;
    }

    int dia1(vector<vector<int>> &a){
        int sum=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i==j){
                    sum+= a[i][j];
                }
            }
        }
        if(sum==15){
            return 1;
        }
        return 0;
    }
    int dia2(vector<vector<int>> &a){
        int sum = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i+j==2){
                    sum+=a[i][j];
                }
            }
        }
        if(sum==15){
            return 1;
        }
        return 0;
    }

    int numMagicSquaresInside(vector<vector<int>>& a) {
    int  num=0;
    int n = a.size();
    int m = a[0].size();
    int rowstart=0;
    int colstart=0;
    int colend = m;
    int rowend = n;
    if(n<3||m<3){
        return num;
    }
    else{
        while((rowend-rowstart)>2){
            colstart = 0;
            while((colend-colstart)>2){
                vector<vector<int>> temp;
                for(int i=rowstart; i<rowstart+3; i++){
                    vector<int>t;
                    for(int j=colstart; j<colstart+3; j++){
                        t.push_back(a[i][j]);
                    }
                    temp.push_back(t);
                }
                print(temp);
                if(hor(temp)){
                    if(ver(temp)){
                        if(dia1(temp)){
                            if(dia2(temp)){
                                num++;
                            }
                        }
                    }
                }
                colstart++;
            }
            rowstart++;
        }
    }
    return num;
    }

void print(vector<vector<int>> &a){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<vector<int>> a = {{3,2,9,2,7},
                            {6,1,8,4,2},
                            {7,5,3,2,7},
                            {2,9,4,9,6},
                            {4,3,8,2,5}};
    cout<<numMagicSquaresInside(a);
    
}
