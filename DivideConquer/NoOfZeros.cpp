#include <iostream>
using namespace std;
class NoofZero {
    public :
    void cal(){
        int n;
        cout<<"Enter no of elements :";
        cin>>n;
        int arr[n];
        cout<<"Enter array element:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int low=0;
        int high=n-1;
        int idx=-1;
        while(low<=high) {
            int mid=low+high/2;
            if(arr[mid]==0){
                idx=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        if(idx==-1){
            cout<<"no of zero :"<<idx;
        } else {
        cout<<"no of zero :"<<n-idx;
    }}
    
};
int main() {
    NoofZero c;
    c.cal();
    return 0;
}