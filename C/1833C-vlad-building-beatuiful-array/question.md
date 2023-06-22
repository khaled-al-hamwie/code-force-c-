# intro
Vlad was given an array a of n positive integers. Now he wants to build a beautiful array b of length n from it.
Vlad considers an array beautiful if all the numbers in it are positive and have the same parity. That is, all numbers in the beautiful array are greater than zero and are either all even or all odd.
To build the array b
, Vlad can assign each bi
 either the value ai
 or ai−aj
, where any j
 from 1
 to n
 can be chosen.

To avoid trying to do the impossible, Vlad asks you to determine whether it is possible to build a beautiful array b
 of length n
 using his array a
.

Input
The first line of input contains an integer t
 (1≤t≤104
) — the number of test cases.

Then follow the descriptions of the test cases.

The first line of each case contains a single integer n
 (1≤n≤2⋅105
) — the length of the array a
.

The second line of each case contains n
 positive integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all cases does not exceed 2⋅105
.

Output
Output t
 strings, each of which is the answer to the corresponding test case. As the answer, output "YES" if Vlad can build a beautiful array b
, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).