#include<iostream>
#include<math.h>
using namespace std;
class Subset_Creation {
    public:
    void get() {
        int n;
        cout<<"HOW MANY ELEMET DOES YOUR ARRAY CONTAIN :";
        cin>>n;
        int arr[n];
        cout<<"ENTER THE ARRAY ELEMENT :";
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        /*for(int i=0;i<n;i++) {
            cout<<"["<<arr[i]<<"]";
           //i--;
        }*/
        
        int combination=pow(2,n);
        cout<<combination;
        
    }
    
};

int main() {
    Subset_Creation s;
    s.get();
    return 0;
}