#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

void prt(vector<int>& arr, string msg = "") {
  cout << msg << " ";
  for  (int i=0;i< arr.size();i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}


void calc_LIS(vector<int>& D) {
  vector< vector<int> > L(D.size());  // The longest increasing subsequence ends with D[i]

  L[0].push_back(D[0]);

  for (int i=1; i<D.size(); i++) {
    for(int j=0; j<i; j++) {
      if ( (D[j] < D[i]) && ( L[i].size() < L[j].size() ) ) {
        L[i] = L[j];          
      }         
    }
    L[i].push_back(D[i]);
  }

  for (int j=0;j<L.size();j++) {
    prt(L[j]);
  }

}

int main() {
  int a[] = {3, 4, 6, 2, 5, 1};
  vector<int> arr(a, a + sizeof(a)/sizeof(a[0]));

  //prt(arr, "Data In:");
  calc_LIS(arr);

  return 0;
}
