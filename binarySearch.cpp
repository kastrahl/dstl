#include <bits/stdc++.h>

int bs(int* arr, int start, int end, int num) {
  int mid = start + end / 2;
  if(arr[mid] == num) {
    return num;
  }
  else {
    if(arr[mid] > num) {
      return bs(arr, start, mid, num);
    }
    else if(arr[mid] < num){
      return bs(arr, mid+1, end, num);
    }
  }
  return -1;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int x = bs(arr, 0, 5, 2);
  std::cout << x << std::endl;
}
