#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string ymd, d;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> ymd >> d;

  ll yy, mm, dd, n;
  {
    auto iss = istringstream{ymd.substr(0, 4)};
    iss >> yy;
  }
  {
    auto iss = istringstream{ymd.substr(5, 2)};
    iss >> mm;
  }
  {
    auto iss = istringstream{ymd.substr(8, 2)};
    iss >> dd;
  }
  {
    auto iss = istringstream{d};
    iss >> n;
  }

  dd += n;
  while (30 < dd) {
    ++mm;
    dd -= 30;
  }

  while (12 < mm) {
    ++yy;
    mm -= 12;
  }

  cout << yy << '-' << setfill('0') << setw(2) << mm << '-' << setfill('0')
       << setw(2) << dd;

  return 0;
}