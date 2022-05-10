#include <iostream>
#include <vector>

void InsertionSort(std::vector<int> &array) {
    for (int i = 1; i < array.size(); i++) {
        int key = array[i];
        int j = i - 1;
        
        while ((j >= 0) && (array[j] >  key)) {
            array[j + 1] = array[j];
            j -= 1;
        }

        array[j + 1] = key;
    } 
}

int main() {
    std::vector<int> values = {65, 3, 21, 100, 54, 42, 10, 5, 17, 21};
    
    for (int i = 0; i < values.size(); i++) {
            std::cout << values[i] << " ";
        }
    std::cout << std::endl;

    InsertionSort(values);
    
    for (int i = 0; i < values.size(); i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}