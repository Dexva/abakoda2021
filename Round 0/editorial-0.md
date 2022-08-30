# Round 0 - Commentary

_Note: This is just a commentary on the ideas behind the solutions. For full context, it is recommended to read the problems linked to the section titles._

### [A. Active Lifestyle](https://codeforces.com/group/Sw3sdIlMPV/contest/341739/problem/A)

We output `Exercise` if the input is an even number (`n%2==0`). Else, we output `Relax` if it is an odd number (`n%2!=0` or more explicitly, `n%2==1`).

### [B. Bubble Sort](https://codeforces.com/group/Sw3sdIlMPV/contest/341739/problem/B)

Theoretically, this problem can be solved with Gauss' formula for the summation of consecutive integers starting from 1. Specifically, the number of times `less` will be called through `bubble_sort()` is equal to `((a-1)*a)/2`, where `a` is the input (i.e., length of input list into `bubble_sort()`).

_(Note: The following section is applicable to C++ users only. AFAIK, Python does not have this problem LOL)_

However, notice that `a` is constrained in `[1, 10^12]`. This means that the answer may reach the magnitude of `10^24`, which is beyond the maximum possible value of `int` nor `long long` types. Instead, we have to use `__int128`. It can handle normal arithmetic operations, however the default `<<` operator does not. As such, we have to write our own "output/cout" function, and there are many ways to do this. An easy way is a "turn __int128 to a string" function, which is used in the sample solution.

### [C. Koordinated Universal Time](https://codeforces.com/group/Sw3sdIlMPV/contest/341739/problem/C)

General flow: CODY -> COORDINATED -> FRIEND

