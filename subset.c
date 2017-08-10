/*********************************************** 
 * Name: Chen Chen
 * Student ID: 20518383
 * File: subset.c 
 * CS 136 Fall 2014 - Assignment 6, Problem 2
 * Description: 
***********************************************/
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
// subset(arr, len, sum) outputs each combination (solution) of 3 integers in arr 
// that add to sum followed by a message with the total number of solutions or a 
// message if no solutions exist.
// PRE:  arr is not NULL, arr has no duplicates, and len >= 0
// POST: if no solutions exist, output "No solution(s)\n".
//       if one or more solutions exist, output "x1 + x2 + x3 = sum\n" 
//       where the index of x1 < index of x2 < index of x3
//       for each solution, followed by "A total of z solution(s)\n", 
//       where z is the total number of solutions.
void subset(int arr[], int len, int sum) {
    assert(len >= 0);
    int first=0;
    int second=1;
    int my=2;
    int total=0;
    int count=0;
    while (first <= (len-3)) {
        int fourth=second;
        while (fourth <= (len-2)) {
            int third=my;
            while(third <= (len-1)) {
               total=arr[first]+arr[fourth]+arr[third];
                if (total == sum) {
                    printf("%d + %d + %d = %d\n",arr[first], arr[fourth],arr[third],total);
                    ++count;
                }
                ++third;
            }
            ++fourth;
        }
        ++first;
        ++second;
        ++my;
    }
    if (count > 0) {
        printf("A total of %d solution(s)\n", count);
    }
    else {
        printf("No solution(s)\n");
    }
}


