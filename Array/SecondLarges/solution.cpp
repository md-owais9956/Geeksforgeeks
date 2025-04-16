
int secondLargest(const vector<int>& arr) {
    int largest = -1, second = -1;

    for (int num : arr) {
        if (num > largest) {
            second = largest;
            largest = num;
        } else if (num < largest && num > second) {
            second = num;
        }
    }

    return second;
}