// jump sort
#include<iostream>
#include<vector>
#include<Math.h>
using namespace std;

// asume array is already sorted because jump search
// only works when array is sorted
int jump_search(vector<int> array, int target){
    int len = array.size();
    
    if( len == 0 ){
        return -1;
    }

    int b_size = sqrt(len);
    int i = 0;
    int j = min(len - 1, b_size);
    
    while( j < len){
        if(array[j] == target){
            return j;
        }else if(array[j] > target){
            break;
        }else{
            i = j;
            j = j + b_size;
        }
    }

    j = min(len - 1, j);
    cout << j << endl;

    while(i <= j){
        if(array[i] == target){
            return i;
        }
        i++;
    }

    return -1;// element not found
}

int main(){

    vector<int> array  = {};
    cout<<jump_search(array, 5);
    return 0;

}