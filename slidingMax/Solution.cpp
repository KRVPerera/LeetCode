#include<algorithm>
#include<unordered_set>
#include<string>
#include<deque>
#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    vector<int> solve(int arr[], int n, int k) {
        vector<int> answers;
        answers.reserve(n/k);

        deque<int> slider(k);

        int i = 1;
        for (; i < k; ++i) {
            while (!slider.empty() && arr[slider.back()] <= arr[i]) {
                slider.pop_back();
            }
            slider.push_back(i);
        }

        for (; i < n; i++) {

            answers.push_back(arr[slider.front()]);

            // remove elements from previous window/s
            while (!slider.empty() && slider.front() <= i - k) {
                slider.pop_front();
            }

            while (!slider.empty() && arr[i] >= arr[slider.back()]) {
                slider.pop_back();
            }

            slider.push_back(i);
        }

        answers.push_back(arr[slider.front()]);
        return answers;
    }

    void printKMax(int arr[], int n, int k) {
        const vector<int>& vec = solve(arr, n, k);
        for (auto x : vec) {
            cout << x << " " ;
        }
        cout << endl;
    }
};