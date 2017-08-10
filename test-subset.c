// =======================================
// = CS136, S14: Assignment 6, Problem 2 =
// = =================================== =
// = Author: C Master [1337]             =
// =======================================

// Interactive C testing program to test the subset module.

#include <stdio.h>

#include "subset.h"

int main(void) {
  int len;
  int sum;

  printf("Please enter the size of the array (must be a non-negative int) then press <enter>: ");

  scanf("%d", &len);

  int arr[len];

  printf("Created an array of %d ints!\n", len);
  printf("Please enter each element of the array followed by pressing <enter>.\n");

  // Iterates over all of the elements of arr.
  for (int i = 0; i < len; ++i) {
    printf("Element #%d: ", i + 1);
    scanf("%d", arr + i);
  }

  printf("The array is populated!\n");
  printf("Please specify sums or press <control> + <D> to terminate.\n");
  printf("Sum: ");

  // Iterates until EOF.
  while (EOF != scanf("%d", &sum)) {
    printf("-----\n");
    subset(arr, len, sum);
    printf("-----\n");
    printf("Sum: ");
  }

  printf("\nProgram terminated!\n");

  return 0;
}
