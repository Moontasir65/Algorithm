#include <iostream>
using namespace std;
int longestSubSeq(int subArr[], int n) {
   int length[n] = { 0 };
   length[0] = 1;
   for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
         if (subArr[j] < subArr[i] && length[j] > length[i])
            length[i] = length[j];
      }
      length[i]++;
   }
   int lis = 0;
   for (int i = 0; i<n; i++)
      lis = max(lis, length[i]);
   return lis;
}
int main() {
   int arr[] = { 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 };
   int n = 16;
   cout << "Length of Longest Increasing Subsequence is: " << longestSubSeq(arr, n);
   return 0;
}
