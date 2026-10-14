#include<iostream>
using namespace std;
class Share_Market {
    public :
        void cal() {
            int n;
            cout<<"ENTER THE NUMBER OF DAYS :";
            cin>>n;
            int arr[n];
            cout<<"ENTER THE STOCK PRICES :";
            for(int i=0;i<n;i++) {
                cin>>arr[i];
            }

            int profit=0;

            for(int i=1;i<n;i++) {
                if(arr[i]>arr[i-1]) {
                    profit=profit+(arr[i]-arr[i-1]);
                }
                else {
                    continue;
                }
            }

            cout<<"MAXIMUM PROFIT :"<<profit; 
        }
};

int main() {
    Share_Market s;
    s.cal();
    return 0;
}