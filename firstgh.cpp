#include <iostream>
using namespace std;

//checking the function that has the pair of the number passed in second parameter
bool check_pair(int arr[],int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i != j && arr[i]+arr[j]==num){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int arr[5] = {5,8,6,1,4};

    bool result = check_pair(arr,5);
    cout<<result<<endl;
    return 0;
}
