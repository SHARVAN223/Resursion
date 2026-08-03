#include <iostream>
#include <vector>
using namespace std;


// QSubset


void PrintSubset(vector <int> &arr, vector <int> & ans , int i){
    if(i==arr.size()){
        for(int val : ans){
            cout<<val << " ";
        }
        cout<<endl;
        return;
    }

    // include
    ans.push_back(arr[i]);
    PrintSubset(arr, ans, i+1);

    // exclude

    ans.pop_back();
    PrintSubset(arr, ans, i+1);

}

int main(){

    vector<int> arr = {1,2,3};
    vector<int> ans;


    PrintSubset(arr, ans, 0);
    return 0;
}


