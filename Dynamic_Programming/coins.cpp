#include<iostream>
using namespace std;
class coins {
    public:
        void get() {
            int n;
            cout<<"ENTER THE NO OF DIFFERENT TYPES OF CURRENCY :";
            cin>>n;
            int coin[n];
            cout<<"ENTER THE DIFFERENT CURRENCY :";
            for(int i=0;i<n;i++) {
                cin>>coin[i];
            }
            int sum,gen_sum=0;
            int arr_temp[n];
            cout<<"WHICH SUM YOU HAVE TO MAKE :";
            cin>>sum;

            for(int i=0;i<n;i++) {
                if(coin[i]<sum) {
                    arr_temp[i]=coin[i];
                    gen_sum+=coin[i];
                }
                else {
                    continue;
                }
            }

            cout<<"Genrated sum using :";
            for(int i=0;i<n;i++) {
                cout<<arr_temp[i];
            }
            
        }

};

int main() {
    coins c;
    c.get();
    return 0;
}