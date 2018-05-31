//
// Created by lucasyu on 18-5-31.
//
#include <iostream>
using namespace std;

class Solution1{
public:
    int RmDuplicTwice(int A[],int n){
        int indx = 0;
        int num_duplicate = 1;
        for(int i=0;i<n;++i){
            if(A[indx]!=A[i]){
                A[++indx] = A[i];
                num_duplicate = 1;
            }
            else if(num_duplicate<2){
                ++num_duplicate;
                A[++indx] = A[i];
            } else{
                ++num_duplicate;
            }
        }
        for(int k=0;k<n;++k){
            cout<<A[k];
        }
        cout<<endl;
        cout<<"lenght of rest vector:"<<indx+1<<endl;
        return indx+1;
    }

};

class Solution2{
public:
    int RmDuplicTwice(int A[], int n){
        if(n==2)
            return n;
        int indx = 2;
        for(int i=2;i<n;++i){
            if(A[i]!=A[indx-2]){
                A[indx++] = A[i];
            }
        }
        for(int k=0;k<n;++k){
            cout<<A[k];
        }
        cout<<endl;
        cout<<"lenght of rest vector:"<<indx<<endl;
        return indx;
    }
};
int main(){
    int A[] = {1,1,1,2,2,2,2,3,3};
    Solution2 solution2;
    return solution2.RmDuplicTwice(A,9);
}