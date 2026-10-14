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
        int high = 0;

        for (int i = 0; i < N; i++) {
            high += task[i];
        }

        while (low < high) {
            int mid = (low + high) / 2;
            int actual_days = 0;
            for (int i = 0; i < N; i++) {
                actual_days +=(task[i] + mid - 1) / mid;
            }

            if (actual_days <= D) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        cout << "MINIMUM WORK PER DAY: " << low;
    }
};

int main() {
    TaskDone t;
    t.Task();
    return 0;
}