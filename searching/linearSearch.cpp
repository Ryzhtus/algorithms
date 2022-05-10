#include <iostream>
#include <vector>

// return the index of the array if it contains the value, else return -1  
int linearSearch(std::vector<int> array, int value) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> values = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int search_value = 4;

    std::cout << linearSearch(values, search_value) << std::endl;

    return 0;
}