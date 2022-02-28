#include <iostream> 
using namespace std;
// функция выводящая всевозможные ходы ферзя, с водимых коориднат.
int ferz(int row, int column) { 
    int i,j;
    for (i = 1; i <= 8; i++) {
      if (row != i ) 
        cout << i << ' ' << column << endl; // определение возможных вариантах в столбце
      if (column != i ) 
        cout << row << ' ' << i << endl;  // определение возможных вариантах в строке
    for (j = 8; j > 0;) {
      if (i + j == row + column and column != j and row != i) // определение возможных вариантах на 1 даигонали
        cout << i << ' ' << j << endl;
      if (i - j == row - column and column != j and row != i) // определение возможных вариантах на 2 даигонали
        cout << i << ' ' << j << endl;
      j = j - 1;
      }
    } 
    return 0;
}
int main(){
  int row_in,column_in;
  cout << "Введите позицию ферзя" << endl;
  cin >> row_in >> column_in;
  ferz(row_in,column_in);
  return 0;
}
