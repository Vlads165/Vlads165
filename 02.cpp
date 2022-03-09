# include <iostream>
using namespace std;
int main () {     //функция для посчета суммы положительных чисел в двумерном массиве
    int n,m;
    int sum = 0;
    cin >> n >> m;
    int array[n][m];
    for (int i=0; i<n; i++)
        for(int j=0; j<m; j++)
          cin>>array[i][j];
for (int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if (array[i][j] > 0)
              sum += array[i][j];
    cout << sum << endl;
    return 0;
}
