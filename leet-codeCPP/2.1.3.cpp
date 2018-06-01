#include <iostream>
using namespace std;

class Solution{
public:
    int Search_in_Rotated_SortedArray(int A[],int n, int target) {  //no duplicates assumed
        int first = 0;
        int last = n;

        while (first!=last){
            int mid = (first+last)/2;
            cout<<first<<"  "<<mid<<"  "<<last<<endl;
            if(A[mid]==target){
                cout<<mid<<endl;
                return mid;
            }
            if(A[mid]<target){
                if(target<A[last-1]){
                    first = mid;
                } else{
                    last = mid+1;
                }
            } else{
              if(A[mid]>target&&A[first]<target){
                  last = mid+1;
              }
              else{
                  first = mid;
              }
            }
        }
        return -1;
    }
};


int main(){
    Solution solution;
    int A[] = {8,9,10,11,12,1,2,3,4,5,6,7};
    return solution.Search_in_Rotated_SortedArray(A,12,11);
}