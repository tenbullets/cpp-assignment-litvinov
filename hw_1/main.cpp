#include <iostream>
#include <math.h>

bool isPrime(int n) { 
	for(int i = 2; i <= sqrt(n); i++)
		if(n%i == 0)
			return false;
	return true;
}

int sumOfRange(int x, int y) {
    int sum = 0;
    for (int i = x; i <= y; i++) {
        if(isPrime(i)) {
            int n = i;
            while (n != 0) {
                sum += n%10;
                n /= 10;
            }
        }
    }
    return sum;
}

bool twoDigitNumber(int n) {
    int sum = 0;
    while (n != 0) {
        n /= 10;
        sum++;
    }
    if(sum == 2) {
        return true;
    }
    return false;
}

int main() {
    int a = 10;
    int b = 99;

    if(!twoDigitNumber(a) || !twoDigitNumber(b)) {
        std::cout<< -1 << std::endl;
    } else {
        int sum = sumOfRange(a, b);
        std::cout<<"sum of prime numbers from a range = " << sum << std::endl;
    }
    return 0;
}

