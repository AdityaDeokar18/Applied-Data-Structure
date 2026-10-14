/*Implement a problem with smallest number with atleast no trailing zeroes in factorial.
Statement : Given a number n . The task is to find the smallest number whoes factorial contains atleast n trailing zores.*/

#include<iostream>
using namespace std;
class Factorial {
        public: 
            void fact() {
                    int n;
                    cout<<"ENTER THE NUMBER :";
                    cin>>n;

                    int low=0;
                    int high=(5*n);
                    int mid,ans;

                    while(low<=high) {
                        mid=(low+high)/2;
                        int temp=mid;
                        int count=0;
                        while(temp>0) {
                            count=count+temp/5;
                            temp=temp/5;
                        }
                        if(count>=n) {
                            ans=mid;
                            high=mid-1;
                        } else {
                            low=mid+1;
                        }
                    }
                    cout<<"Smallest no for "<<n<<" no of zeroes is :"<<ans;

            }
};

int main() {
        Factorial f;
        f.fact();
        return 0;
}