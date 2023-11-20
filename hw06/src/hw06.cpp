#include <iostream>

class MyIntVector
{

private:

    int *vector;
    int count;
    int capacity;
    
public:

    MyIntVector() : count(0), capacity(0), vector(nullptr) {}

    MyIntVector(int count) : count(count), capacity(count) {
        vector = new int[this->capacity];

        for (int i = 0; i < this->count; i++) vector[i] = 0;
    }

    MyIntVector(int count, int value) : count(count), capacity(count) {
        vector = new int[this->capacity];

        for (int i = 0; i < this->count; i++) vector[i] = value; 
    }

public:

    int get(int i) {
        if(i > this->count || i < 0)  {
            std::cout << "Memory for index " << i << " is not allocated." << std::endl;
            return 0;
        } else {
            return vector[i]; 
        }
            
    }

    void set(int i, int value) {
        if(i > this->count || i < 0)
            std::cout << "Memory for index " << i << " is not allocated." << std::endl;
        else 
            vector[i] = value; 
    }

    int size() {
        return this->count;
    }

    int cap() {
        return this->capacity;
    }

    void push_back(int value) {
        if (this->count == this->capacity) {

            if (this->capacity == 0) 
                reserve(1);
            else 
                reserve(this->capacity * 2);

        }
        
        vector[count] = value;
        count++;
    }

    void reserve(int count) {
        int *newVector = new int[count];

        for (int i = 0; i < this->count; i++) newVector[i] = vector[i];
        
        delete[] vector;
        vector = newVector;
        capacity = count;
    }


    void resize(int size) {
        if (size > this->count) {
            reserve(size);

            for (int i = this->count; i < size; i++) vector[i] = 0;
            this->count = size;
        }

        if (size < this->count) this->count = size;  
    }

    void resize(int size, int value) {
        if (size > this->count) {
            reserve(size);

            for (int i = this->count; i < size; i++) vector[i] = value;
            this->count = size;
        }

        if (size < this->count) this->count = size;
    }

    void shrink_to_fit() {
        if (count < capacity) {

            int *newData = new int[count];

            for (int i = 0; i < count; i++) newData[i] = vector[i];

            delete[] vector;
            vector = newData;
            capacity = count;
        }
    }

    void print() {
        for (int i = 0; i < count; i++) std::cout << vector[i] << " ";
        std::cout << "\n";
    }

};