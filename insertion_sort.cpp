// Include the header file declaring insertion_sort() to ensure consistency
// between the declaration and definition
#include "insertion_sort.h"
#include <vector>

// FEEL FREE TO INCLUDE ADDITIONAL EXTERNAL LIBRARIES

using namespace std;

// This function sorts the input vector of doubles in ascending order in place
// using the insertion sort algorithm
void insertionSort(vector<double> &num)
{

  for (int x = 1; x < num.size(); x++)
  {
    double selected = num[x];
    int subindex = x;

    for (subindex = x; subindex > 0 && num[subindex - 1] > selected; subindex--)
    {
      num[subindex] = num[subindex - 1];
    }
    num[subindex] = selected;
  }
}