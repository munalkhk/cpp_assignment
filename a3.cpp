#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int range1Count = 0;
    int range2Count = 0;
    int range3Count = 0;
    int range4Count = 0;
    int evenCount = 0;
    int divisibleBy5Count = 0;

    for (int i = 0; i < 200; i++) {
        int num = rand() % 9000 + 1000; 
        if (num >= 1000 && num <= 2499) {
            range1Count++;
        } else if (num >= 2500 && num <= 4999) {
            range2Count++;
        } else if (num >= 5000 && num <= 7499) {
            range3Count++;
        } else if (num >= 7500 && num <= 9999) {
            range4Count++;
        }
        if (num % 2 == 0) {
            evenCount++;
        }
        if (num % 5 == 0) {
            divisibleBy5Count++;
        }
    }

    cout << "\n\nRange 1000-2499: " << range1Count << endl;
    cout << "Range 2500-4999: " << range2Count << endl;
    cout << "Range 5000-7499: " << range3Count << endl;
    cout << "Range 7500-9999: " << range4Count << endl;
    cout << "\n" << evenCount << " numbers are even" << endl;
    cout << divisibleBy5Count << " numbers are divisible by 5" << endl;

    return 0;
}