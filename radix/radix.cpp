#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;


void radix_sort(vector<int> &arr) {

    vector<vector<int>> buckets(10);

    int power_of_ten = 1;

    for (int pow = 0; pow <= 5; ++pow) {

        for (auto elem: arr) {

            buckets[elem / power_of_ten % 10].push_back(elem);
        }

        arr.clear();

        for (int i = 0; i < buckets.size(); ++i) {

            for (int j = 0; j < buckets[i].size(); ++i) {
                arr.push_back(buckets[i][j]);
                buckets[i].clear();
            }
        }

        power_of_ten *= 10;
    }
}


int main() {
    vector<int> arr;

    const int n = rand() % 100;

    for (int i = 0; i < n; ++i)
        arr.push_back(rand());
    radix_sort(arr);

    vector<int> arr_copy = arr;
    sort(arr_copy.begin(), arr_copy.end());

    std::cout << (arr_copy == arr);
}