#include <cstdio>
#include <vector>
#include <string>

using namespace std;

vector<string> fizzbuzz(int count) {
  vector<string> fb;
  for (int i = 1; i <= count; ++i) {
    fb.push_back("");
    if (i % 3 == 0) {
      fb[i-1] += "fizz";
    }
    if (i % 5 == 0) {
      fb[i-1] += "buzz";
    }
    if (fb[i-1] == "") {
      char buffer [33];
      sprintf(buffer, "%d", i);
      fb[i-1] = buffer;
    }
  }
  return fb;
}
