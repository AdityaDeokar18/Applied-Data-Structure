#include<iostream>
using namespace std;
class TaskDone {
    public :
        void Task() {
            int days,actual_days=0;
            cout<<"ENTER THE NUMBERS OF DAYS :";
            cin>>days;
            int n;
            cout<<"HOW MANY TASKS DO YOU HAVE :";
            cin>>n;
            int task[n];
            cout<<"ENTER THE WORK OF EACH TASK :";
            for(int i=0;i<n;i++) {
                cin>>task[i];
            }
            if (n > days) {
            cout << "TASKS CANNOT BE COMPLETED WITHIN "
                 << days << " DAYS";
            return;
            }

            int low=1,high=0,mid=0;

            for(int i=0;i<n;i++) {
                high+=task[i];
            }

            while(low<high) {
                actual_days=0;
                mid=(low+high)/2;

            // Calculate required days
            for(int i = 0; i < n; i++) {
                actual_days += (task[i] + mid - 1) / mid;
            }

            // Check whether mid is possible
            if(actual_days <= days) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        cout << "MINIMUM WORK PER DAY: " << low << endl;
    }
};

int main() {
    TaskDone t;
    t.Task();
    return 0;
}