//
// Created by lucasyu on 18-6-1.
//
#include "Sorting_template.h"

class InsertionSorting: public Sorting{
public:
    bool Sort(int A[], int n){
        for (int i=1;i<n;++i){
            for(int j=i; j>0&&A[j]<A[j-1]; j--)
            {
                exch(A,j,j-1);
            }
            /*
            for (int j=0;j<i;j++){
                if(A[j]>A[i]){
                    exch(A,i,j);
                }
            }*/
        }
        isAftersorting = true;
        return true;
    }
/**
 * speed up by just move the larger ones to the right, in stead of doing full exchanges..
 * @param A
 * @param n
 * @return
 */
    bool SortSpeedUp(int A[], int n){
        for (int i=1;i<n;++i){
            int temp = A[i];
            int indx = i;
            for(int j=i; j>0&&temp<A[j-1]; j--)
            {
                A[j] = A[j-1];
                indx = j-1;
            }
            A[indx] = temp;
        }
        isAftersorting = true;
        return true;
    }
};

class ShellSorting : public Sorting {
public:
    bool Sort(int A[], int n){
        int h=1;
        while (h<n/3){h = 3*h+1;}
        while (h>=1){
            for(int i=h;i<n;i++){
                for (int j=i;j>=h && A[j]<A[j-h];j-=h){
                    exch(A,j,j-h);
                }
            }
            h = h/3;
        }
        isAftersorting = true;
        return true;
    }

};
int main(){
    int A[] = {2,3,4,8,1,21,54,25,92,0,14};
    InsertionSorting insertiongSort;
    ShellSorting shellsort;
    insertiongSort.PublishArray(A,11);
//    insertiongSort.Sort(A,11);
//    insertiongSort.SortSpeedUp(A,11);
    shellsort.Sort(A,11);
    shellsort.PublishAfterSorting(A,11);
    return 0;
}