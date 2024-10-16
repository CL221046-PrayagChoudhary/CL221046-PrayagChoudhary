#include<iostream>
#include<vector>
using namespace std;
int findOrsOr(vector<int> arr){
    vector<int> resultIn;
    int Ors=0,OrsOr=0;
    for(int i=0;i<arr.size();i++){
        Ors=arr[i]^Ors;
        resultIn[i]=Ors;
        Ors=0;
    }
    for(int i=0;i<resultIn.size();i++){
        OrsOr=OrsOr ^ resultIn[i];
    }
    return OrsOr;
}
int main(){
    vector<int> arr={1,4,6};
    int Or = findOrsOr(arr);
    cout<<"here ::: -+-"<<Or;
}