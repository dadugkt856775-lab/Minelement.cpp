#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {45, 12, 78, 23, 9};

    int minimum = *min_element(v.begin(), v.end());

    cout << "Minimum element: " << minimum;

    return 0;
}
