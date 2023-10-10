#include <iostream>

int hw04(const int* array, std::size_t arraySize) {
    int* outArray = new int[1];
    int outArraySize = 1;
    
    for(std::size_t i = 0; i < arraySize; i++) {
        if(array[i] > 0) {

            int* tempArray = new int[outArraySize + 1];

            for (std::size_t j = 0; j < outArraySize; j++) {
                tempArray[j] = outArray[j];
            }
            delete[] outArray;

            tempArray[outArraySize] = array[i];
            outArray = tempArray;
            outArraySize++;
        
        } else {break;}
    }

    int sum = 0;
    for(std::size_t i = 1; i < outArraySize; i++) {
        sum += outArray[i];
    }
    
    delete[] outArray;
    return sum;
}

// int main() {
//     int nums[] = {2, 9, 11, -5, 5, 10, -1};
//     std::cout << hw04(nums, 7) << std::endl;

//     return 0;
// }