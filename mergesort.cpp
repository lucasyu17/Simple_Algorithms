//
// Created by lucasyu on 18-6-10.
//
#include "Sorting_template.h"
#include <math.h>
class Solution{
public:
    bool Merge(int A[], int low, int mid, int high)
    {
        int key_left = low;
        int key_right = mid+1;
        int aux[high];
        int j=0;
        for (int k=low;k<=high;k++)
        {
            aux[k] = A[k];
        }
        for(int k=low;k<=high;k++)
        {
            if(key_left>mid) A[k] = aux[key_right++];
            else if(key_right>high) A[k] = aux[key_left++];
            else if(aux[key_left]>aux[key_right]) A[k] = aux[key_right++];
            else A[k] = aux[key_left++];
        }
        return true;
    }
    void MergeSort(int B[], int low, int high)
    {
        if(high<=low)
        {
        } else{
            int mid;
            mid = low + floor((high-low)/2);
            MergeSort(B,low,mid);
            MergeSort(B,mid+1,high);
            Merge(B,low,mid,high);
        }
    }
};

int main()
{
    Solution solution;
    int A[] = {0,1,2,5,7,10,12,2,5,9,10,11,12,14};
    solution.Merge(A,0,6,13);
    for(int i=0;i<=13;i++){
        cout<<A[i]<<',';
    }
    cout<<endl;
    int B[] = {2,3,5,10,1,0,4,6,7,12,11,8,14,15,16};
    for(int i=0;i<=14;i++){
        cout<<B[i]<<',';
    }
    cout<<endl;
    solution.MergeSort(B,0,14);
    for(int i=0;i<=14;i++){
        cout<<B[i]<<',';
    }
    cout<<endl;
    return 0;
}