#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<string> fizzbuzz(int count);

int main(int argc, char** argv) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " count" << endl;
    return -1;
  }

  vector<string> result = fizzbuzz(atoi(argv[1]));
  for (int i = 0; i < result.size(); ++i) {
    cout << result[i] << endl;
  }

  return 0;
}
