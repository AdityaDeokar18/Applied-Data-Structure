#include<iostream>
using namespace std;
class Subset_Sum {
            public:
            void get() {
            int n,sum;
            cout<<"ENTER THE NUMBER OF ELEMENT :";
            cin>>n;
            int arr[n];
            cout<<"ENTER THE ELEMENT :";
            for(int i=0;i<n;i++) {
                cin>>arr[i];
            }
            cout<<"ENTER THE SUM THAT YOU WANT TO GET :";
            cin>>sum;
            int cal_sum=0;
            for(int i=0;i<n;i++) {
                if(arr[i]<sum) {
                    if(cal_sum<sum) {
                        cal_sum+=arr[i];
                    }
                    else {
                        break;
                    }
                }
                else {
                    continue;
                }
            }
            if(cal_sum<=sum) {
                cout<<"Subset can be constructed !";
            } else {
                cout<<"Cannot be conastructed !";
            }
            }
};

int main() {
    Subset_Sum s;
    s.get();
    return 0;
}