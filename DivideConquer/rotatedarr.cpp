#include<iostream>
using namespace std;
class rotated {
        public: 
            void find() {
                int n;
                cout<<"HOW MANY ELEMENT IN ARRAY :";
                cin>>n
                int arr[n];
                cout<<"ENTER THE ELEMENT OF ARRAY :";
                for(int i=0;i<ni++) {
                    cin>>arr[i];
                }
                int key;
                cout<<"ENTER THE KEY THAT WANT TO FIND :";
                cin>>key;
                int start=0;
                int end=n-1;
                int mid;
                while(start<=end) {
                    mid=(low+high)/2;
                    if(arr[[mid]==key]) {
                            cout<<"KEY FOUND AT LOCATION :"<<arr[mid]; 
                    }
                    else if(arr[mid]>key) { 
                        if(key<start) {
                            start=mid+1;
                        }
                    }

                }
            }
};

int main() {
        rotated r;
        r.find();
        return 0;
}