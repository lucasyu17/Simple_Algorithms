//
// Created by lucasyu on 18-5-31.
//
#include <iostream>
#include <algorithm>
using namespace std;
class Solution1{
public:
    int RemoveDuplicates(int A[], int n)
    {
        int indx = 0;
        for(int i=1;i<n;++i){
            if(A[indx]!=A[i]){
                A[++indx] = A[i];
            }
        }
        std::cout<<indx+1<<endl;
        for(int j=0;j<n;++j){
            cout<<A[j];
        }
        cout<<endl;
        return indx+1;
    }
};

class Solution2{
public:
    int RemoveDuplcates (int A[],int n){
        cout<<unique(A,A+n)-A<<endl;
        return unique(A,A+n)-A;
    }
};

int main(){
//    Solution1 solution1;
//    int A[] = {1,1,2,2,3,3,4,4,5,6,7};
//    solution1.RemoveDuplicates(A,11);

    int A[] = {1,1,2,2,3,3,4,4,5,6,7};
    Solution2 solution2;
    solution2.RemoveDuplcates(A,11);
}