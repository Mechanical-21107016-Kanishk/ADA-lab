#include <bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> a, pair<int,int> b) {
    return (a.second<b.second);
}

int activitySelectionProblem(vector<pair<int,int>> &activities, int n) {
    sort(activities.begin(), activities.end(), mycmp);

    int prev = 0;
    int res = 1;
    for(int curr = 1; curr<n; curr++) {
        if(activities[curr].first>=activities[prev].second) {

            res++;
            prev = curr;
        }
    }

    return res;

}

int main() {
    vector<pair<int,int>> activities {{2,3},{1,4},{5,8},{6,10}};
    cout<<activitySelectionProblem(activities, activities.size());
}
