#include <iostream>
using namespace std;

int main() {
    int nums[5];
    cout << "Enter five different numbers from 1 to 5: ";
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3] >> nums[4];
    
    // check for duplicates
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (nums[i] == nums[j]) {
                cout << "Duplicate number entered, please enter a different number: ";
                cin >> nums[j];
                j--;
            }
        }
    }
    
    // replace numbers with x
    for (int i = 0; i < 5; i++) {
        switch (nums[i]) {
            case 1:
                nums[i] = 'x';
                break;
            case 2:
                nums[i] = 'x';
                break;
            case 3:
                nums[i] = 'x';
                break;
            case 4:
                nums[i] = 'x';
                break;
            case 5:
                nums[i] = 'x';
                break;
            default:
                break;
        }
    }
    
    // display result
    cout << "Result: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}