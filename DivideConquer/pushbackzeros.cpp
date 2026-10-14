#include<iostream>
using namespace std;

class Push {
        public:
            void pushZero() {
                    int n;
                    cout<<"ENTER THE NO OF ELEMENT IN ARRAY :";
                    cin>>n;
                    
                    int arr[n];
                    cout<<"ENTER THE ELEMENT OF ARRAY :";
                    for(int i=0;i<n;i++) {
                        cin>>arr[i];
                    }
                    
                    int low=0;
                    int high=n-1;
                    int mid=0; 
                    
                    int temp[100];  
                    int temp2[100]; 
                    int idx=0, idx2=0;
                    
                    while(low<=high) {
                            mid = (low + high) / 2; 
                            if(arr[mid] != 0) {
                                    temp[idx] = arr[mid]; 
                                    idx++;
                            } else {
                                    temp2[idx2] = arr[mid]; 
                                    idx2++;
                            }
                            low++; 
                        
                    }

                    int final_arr[200];
                    
                    for(int i=0; i<idx; i++) {
                        final_arr[i] = temp[i];
                    }
                    for(int i=0; i<idx; i++) {
                        cout<<final_arr[i]<<" ";
                    }
                    
                    
                    /*for(int i=0; i<idx2; i++) {
                        final_arr[idx + i] = temp2[i]; 
                    }

                    cout<<"FINAL ARRAY :";
                    for(int i=0; i<(idx + idx2); i++) { 
                            cout<<final_arr[i]<<" ";
                    }
                    cout<<endl;*/
            }
};

int main() {
    Push p;
    p.pushZero();
    return 0;
}