#include <iostream>
using namespace std;
void max_min(int b[], int k){    //Функция которая меняет наименьшее и наибольшее значения одномерного массива
  int max_index = 0;
  int min_index = 0;
  int a;
  for(int i = 1; i < k; i++){
    if (b[i] > b[max_index])
      max_index = i;
    if (b[i] < b[min_index])
      min_index = i;
  }
  a = b[min_index];
  b[min_index] = b[max_index];
  b[max_index] = a;
}
int main() {
  int n;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
  cin >> array[i];
  max_min(array,n);
  for (int i = 0; i < n; i++)
  cout << array[i] << endl;
  return 0;
}
