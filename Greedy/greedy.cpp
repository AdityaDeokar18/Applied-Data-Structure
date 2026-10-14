#include<iostream>
#include<algorithm>
using namespace std;
class greedy {
    public:
         void get() {
                int k;
                cout<<"Enter the no of people are there :";
                cin>>k;
                int shop;   
                cout<<"How many shops do you have :";
                cin>>shop;
                int timing[shop][2];
                cout<<"Enter the start timing followed by end timing :";
                for(int i=0;i<shop;i++) {
                    for(int j=0;j<2;j++) {
                        cin>>timing[i][j];
                    }   
                }
                
                for(int i=0;i<shop-1;i++) {
                    for(int j=0;j<shop-i-1;j++) {
                        if(timing[j][1] > timing[j+1][1])   // Compare end times
                            {
                                swap(timing[j][0], timing[j+1][0]); // Swap start
                                swap(timing[j][1], timing[j+1][1]); // Swap end
                            }
                        }
                    }
                
                cout<<"Sorting Timing :";
                for(int i=0;i<shop;i++) {
                    for(int j=0;j<2;j++) {
                        cout<<timing[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                
                int free_time[k];
                for(int i=0;i<k;i++) {
                    free_time[i]=-1;
                }

                int count=0;

                for(int i=0;i<shop;i++) {
                    for(int j=0;j<k;j++) {
                        if(timing[i][0]>=free_time[j]) {
                                free_time[j]=timing[i][1];
                                count++;
                                break;
                            }
        }
    }

    cout<<"Maximum Shops Visited = "<<count;
}
};
int main() {
    greedy g;
    g.get();
    return 0;
}