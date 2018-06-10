//
// Created by lucasyu on 18-6-1.
//

#ifndef SIMPLE_ALGORITHMS_SORTING_TEMPLATE_H
#define SIMPLE_ALGORITHMS_SORTING_TEMPLATE_H

#endif //SIMPLE_ALGORITHMS_SORTING_TEMPLATE_H

#include <iostream>
using namespace std;
class Sorting{
public:
    bool isAftersorting;

    bool exch(int A[],int a, int b){
        int temp;
        temp = A[a];
        A[a] = A[b];
        A[b] = temp;
        return true;
    }
    void PublishAfterSorting(int A[],int n){

        if(isAftersorting){
            PublishArray(A,n);
        } else{
            cout<<"have not yet sorted the array!"<<endl;
        }
    }

    void PublishArray(int A[],int n){
        for (int i=0;i<n;i++){
            cout<<A[i]<<",";
        }
        cout<<endl;
    }
};