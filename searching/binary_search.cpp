#include <iostream>
#include <vector>

// return the index of the array if it contains the value, else return -1  
int BinarySearch(std::vector<int> array, int left, int right, int value) {
    if (left <= right) {
        int middle = left + (right - left) / 2;

        if (array[middle] == value) {
            return middle;
        } else if (array[middle] > value) {
            return BinarySearch(array, left, middle - 1, value);
        } else {
            return BinarySearch(array, middle + 1, right, value);
        }
    }

    return -1;
}

int main() {
    std::vector<int> values = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int search_value = 4;

    std::cout << BinarySearch(values, 0, values.size(), search_value) << std::endl;

    return 0;
}