//
// Created by jiaoml on 2019/8/11.
//

#ifndef ALGORITHM_ROUND_D_2019_1_H
#define ALGORITHM_ROUND_D_2019_1_H
/*
Problem
Steven has an array of N non-negative integers. The i-th integer (indexed starting from 0) in the array is Ai.

Steven really likes subintervals of A that are xor-even. Formally, a subinterval of A is a pair of indices (L, R), denoting the elements AL, AL+1, ..., AR-1, AR. The xor-sum of this subinterval is AL xor AL+1 xor ... xor AR-1 xor AR, where xor is the bitwise exclusive or.

A subinterval is xor-even if its xor-sum has an even number of set bits in its binary representation.

Steven would like to make Q modifications to the array. The i-th modification changes the Pi-th (indexed from 0) element to Vi. Steven would like to know, what is the size of the xor-even subinterval of A with the most elements after each modification?

Input
The first line of the input gives the number of test cases, T. T test cases follow.

Each test case starts with a line containing two integers N and Q, denoting the number of elements in Steven's array and the number of modifications, respectively.

The second line contains N integers. The i-th of them gives Ai indicating the i-th integer in Steven's array.

Then, Q lines follow, describing the modifications. The i-th line contains Pi and Vi, The i-th modification changes the Pi-th element to Vi. indicating that the i-th modification changes the Pi-th (indexed from 0) element to Vi.

Output
For each test case, output one line containing Case #x: y_1 y_2 ... y_Q, where x is the test case number (starting from 1) and y_i is the number of elements in the largest xor-even subinterval of A after the i-th modification. If there are no xor-even subintervals, then output 0.

Limits
Time limit: 40 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ Ai < 1024.
0 ≤ Pi < N.
0 ≤ Vi < 1024.

Test set 1 (Visible)
1 ≤ N ≤ 100.
1 ≤ Q ≤ 100.

Test set 2 (Hidden)
1 ≤ N ≤ 105.
1 ≤ Q ≤ 105.

Sample

Input

Output

2
4 3
10 21 3 7
1 13
0 32
2 22
5 1
14 1 15 20 26
4 26


Case #1: 4 3 4
Case #2: 4

In Sample Case 1, N = 4 and Q = 3.
After the 1st modification, A is [10, 13, 3, 7]. The subinterval (0, 3) has xor-sum 10 xor 13 xor 3 xor 7 = 3. In binary, the xor-sum is 112, which has an even number of 1 bits, so the subinterval is xor-even. This is the largest subinterval possible, so the answer is 4.
After the 2nd modification, A is [32, 13, 3, 7]. The largest xor-even subinterval is (0, 2), which has xor-sum 32 xor 13 xor 3 = 46. In binary, this is 1011102.
After the 3rd modification, A is [32, 13, 22, 7]. The largest xor-even subinterval is (0, 3) again, which has xor-sum 32 xor 13 xor 22 xor 7 = 60. In binary, this is 1111002.
In Sample Case 2, N = 5 and Q = 1. After the 1st modification, A is [14, 1, 15, 20, 26]. The largest xor-even subinterval is (1, 4), which has xor sum 1 xor 15 xor 20 xor 26 = 0. In binary, this is 02.
 */

namespace Round_D_2019_1 {

    int main();
};


#endif //ALGORITHM_ROUND_D_2019_1_H
