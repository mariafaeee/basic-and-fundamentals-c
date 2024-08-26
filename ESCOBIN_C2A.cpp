// Programmed by Maria Fae Escobin
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int maxSize = 10;
    int array1[maxSize], array2[maxSize], mergedArray[maxSize * 2];
    int size1, size2;
 
       cout << "Enter the number of elements in the first array (up to 10): ";
       cin >> size1;

       if (size1 > maxSize || size1 < 1) {
          cout << "Invalid size for the first array!" << endl;
          return 1;
    }

       cout << "Enter the elements for the first array: ";
         for (int i = 0; i < size1; ++i) {
          cin >> array1[i];
    }
        cout << "Enter the number of elements in the second array (up to 10): ";
        cin >> size2;

   
       if (size2 > maxSize || size2 < 1) {
         cout << "Invalid size for the second array!" << endl;
          return 1;
    }

    cout << "Enter the elements for the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> array2[i];
    }

    int mergedSize = size1 + size2;
      for (int i = 0; i < size1; ++i) {
        mergedArray[i] = array1[i];
    }
      for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = array2[i];
    }
    sort(mergedArray, mergedArray + mergedSize, greater<int>());
     cout << "\nMerged array in descending order: ";
      for (int i = 0; i < mergedSize; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
