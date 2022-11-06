#include <iostream>

using namespace std;

int main() {
    
    int index = 1;
    while(index <= 5) {
        cout << index << endl;
        index++;
    }
    
    
    for(int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    
    int nums[] = {1, 2, 5, 7, 3};
    int numsSize = sizeof(nums) / sizeof(int);
    for(int i = 0; i < numsSize; i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}
