#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define _FOR(i, a, b) for(int i = (a); i >= (b); --i)
int max(int n,...) {va_list args;va_start(args, n);int ret = INT_MIN;FOR(i, 0, n-1)ret = max(ret, va_arg(args, int));va_end(args);return ret;}
int min(int n,...) {va_list args;va_start(args, n);int ret = INT_MAX;FOR(i, 0, n-1)ret = min(ret, va_arg(args, int));va_end(args);return ret;}
#define DEBUG // if debugging codes are contained, delete this line before submitting

class Solution {
public:
    int findComplement(int num) {
      unsigned int mask = 1;
      FOR(i, 0, 31) {
        if(mask > num) break;
        mask <<= 1;
      }
      return ~num & (mask-1);
    }
};