// jump sort
#include<iostream>
#include<vector>
#include<Math.h>
using namespace std;

// asume array is already sorted because jump search
// only works when array is sorted
int binarySearch(vector<int> a, int target){
    if(a.size() == 0){
        return -1;
    }

    int len = a.size(), i = 0;
    int j = len - 1;
    while( i <= j){
        int mid = (i + j)/ 2;
        if(a[mid] == target){
            return mid;
        }else if(a[mid] < target){
            i = mid + 1;
        }else{
            j = mid - 1;
        }
    }
    return -1;
}
int main(){

    vector<int> array  = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<binarySearch(array, 2);
    return 0;

}