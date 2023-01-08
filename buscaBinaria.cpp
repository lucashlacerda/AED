#include <iostream>
using namespace std;

int indexOf(int arr[], int size, int value){
  int right = size -1;
  int left = 0;

  while(left <= right){
    int middle = int((right + left) / 2);

    if(arr[middle] > value){
      right = middle - 1;
    }else if(arr[middle] < value){
      left = middle + 1;
    }else
      return middle;
  }

  return -1;
}
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  int value = 5;

  int index = indexOf(arr, size, value);

  cout << index;  
  return 0;
}
