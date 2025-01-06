// Header file required for calling importNumbersFromFile() from this file
#include "import_numbers_from_file.h"

// Header file required for calling insertionSort() from this file
#include "insertion_sort.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " <filename>" << endl;
    return EXIT_FAILURE;
  }

  // Data import
  string filename = argv[1];
  vector<double> a = importNumbersFromFile(filename);
  insertionSort(a);

  // Output
  for (const auto &key : a) {
    cout << key << " ";
  }
  cout << endl;
  return 0;
}