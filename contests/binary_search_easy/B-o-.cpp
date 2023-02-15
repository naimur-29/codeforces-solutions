/*
⠀⠀⠀⠀⣠⣶⡾⠏⠉⠙⠳⢦⡀⠀⠀⠀⢠⠞⠉⠙⠲⡀⠀
⠀⠀⠀⣴⠿⠏⠀⠀⠀⠀⠀⠀⢳⡀⠀ ⡏⠀⠀⠀⠀⠀⢷
⠀⠀⢠⣟⣋⡀⢀⣀⣀⡀⠀⣀⡀⣧⠀⢸⠀⠀⠀⠀⠀ ⡇
⠀⠀⢸⣯⡭⠁⠸⣛⣟⠆⡴⣻⡲⣿⠀⣸⠀9ain ⡇
⠀⠀⣟⣿⡭⠀⠀⠀⠀⠀⢱⠀⠀⣿⠀⢹⠀⠀⠀⠀⠀ ⡇
⠀⠀⠙⢿⣯⠄⠀⠀⠀⢀⡀⠀⠀⡿⠀⠀⡇⠀⠀⠀⠀⡼
⠀⠀⠀⠀⠹⣶⠆⠀⠀⠀⠀⠀⡴⠃⠀⠀⠘⠤⣄⣠⠞⠀
⠀⠀⠀⠀⠀⢸⣷⡦⢤⡤⢤⣞⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢀⣤⣴⣿⣏⠁⠀⠀⠸⣏⢯⣷⣖⣦⡀⠀⠀⠀⠀⠀⠀
⢀⣾⣽⣿⣿⣿⣿⠛⢲⣶⣾⢉⡷⣿⣿⠵⣿⠀⠀⠀⠀⠀⠀
⣼⣿⠍⠉⣿⡭⠉⠙⢺⣇⣼⡏⠀⠀⠀⣄⢸⠀⠀⠀⠀⠀⠀
⣿⣿⣧⣀⣿.........⣀⣰⣏⣘⣆⣀
*/

#include <iostream>
#include <vector>

int FindElementIndex(std::vector <int> arr, int arr_size, int element) {
    bool isFound = false;
    int left = 0, right = arr_size-1, mid = (left + right)/2;
    while(!isFound && left <= right) {
        if (arr[mid] == element) isFound = true;
        else if (arr[mid] > element) {
            right = mid - 1;
            mid = (left + right)/2;
        }
        else {
            left = mid + 1;
            mid = (left + right)/2;
        }
    }

    return isFound ? mid : -1;
} 

int* FindOccurrence (std::vector <int> arr, int size, int key) {
    int mid = FindElementIndex(arr, size, key);
    
    bool isLeftFound = false, isRightFound = false, isFoundLastElement {mid == -1};
    int* res = new int[3] {-1, -1, 0};
    int left, right;
    
    if (!isFoundLastElement) {
        res[0] = res[1] = mid;
        res[2]++;
        left = mid - 1;
        right = mid + 1;
    }

    while(!isFoundLastElement) {
        isFoundLastElement = isLeftFound && isRightFound;
        if (arr[left] == key) {
            res[0] = left;
            res[2]++;

            left--;
        }
        else isLeftFound = true;

        if (arr[right] == key) {
            res[1] = right;
            res[2]++;
            
            right++;
        } else isRightFound = true;
    }

    return res;
}

int main() {
    int size, key;
    std::cin >> size;
    std::vector <int> arr;

    for (int i = 0; i < size; i++) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    std::cin >> key;
    int* ptr_FindOccurrence = FindOccurrence(arr, size, key);

    if (!size)
        std::cout << "-1 -1 0" << std::endl;
    else
        std::cout
        << ptr_FindOccurrence[0] << " "
        << ptr_FindOccurrence[1] << " "
        << ptr_FindOccurrence[2] << " "
        << std::endl;

    delete[] ptr_FindOccurrence;
    return 0;
}