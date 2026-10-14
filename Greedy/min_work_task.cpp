#include <iostream>
using namespace std;
class TaskDone {
public:
    void Task() {
        int D, N;
        cout << "ENTER NUMBER OF DAYS: ";
        cin >> D;
        cout << "ENTER NUMBER OF TASKS: ";
        cin >> N;
        int task[N];
        cout << "ENTER WORK OF EACH TASK: ";
        for (int i = 0; i < N; i++) {
            cin >> task[i];
        }
        if (N > D) {
            cout << "TASKS CANNOT BE COMPLETED WITHIN "
                 << D << " DAYS";
            return;
        }

        int low = 1;
        int high=task[0];
        for(int i=0;i<N;i++) {
            if(task[i]>high) {
                high=task[i];
            }
        }

        for(int i=low;i<=high;i++) {
            int totaldays=0;
            for(int j=0;j<N;j++) {
                int daysforTask=task[j]/i;
                if(task[j]%i!=0) {
                    daysforTask++;
                }
                totaldays+=daysforTask;
            }
            if(totaldays<=D){
                cout<<"Minimum work per day :"<<i;
                cout<<"\nDays required :"<<totaldays;
                break;
            }
        }
    }
};
int main() {
    TaskDone t;
    t.Task();
    return 0;
}