// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int leftborder = 0;
  int rightborder = size - 1;
  while (leftborder <= rightborder) {
    int seredina = (leftborder + rightborder) / 2;
    if (arr[seredina] == value) {
      count++;
      int i = seredina - 1;
      while (i >= leftborder && arr[i] == value) {
        count++;
        i--;
      }
      i = seredina + 1;
      while (i <= rightborder && arr[i] == value) {
        count++;
        i++;
      }
      break;
    } else if (arr[seredina] < value) {
      leftborder = seredina + 1;
    } else {
      rightborder = seredina - 1;
    }
  }
  return count;
}
