#include<iostream>
#include<vector>
using namespace std;

//Check if the array is sorted in non descending order

class Solution{
    public:
    bool checkSorted(vector<int> arr){
        for(int i=1; i<arr.size(); i++){
            if(arr[i]<arr[i-1]) return false;
        }

        return true;
    }

};

int main(){
    vector<int> arr ={5,12,56,77};
    if(Solution().checkSorted(arr)) cout<< "True";
    else cout<< "False";


    return 0;
    
}