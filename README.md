// К сожаления я не смог справится с этой задачей, пытался много раз( это маленьк часть кода которая сохранилась, сотальное было потеряно при закрытие копилятора онлйан) Главная вопрос который возникал это как вставить одно и то же слово дважды...........
#include <iostream>
using namespace std;
int main() {
    string s,k;
  getline(cin,s);
  for (int i = 0; i <= s.size(); i++) {
    if (s[i] = "a" and s[i-1] = " ")
      for ( int j = i; j != 0; j++) {
        if (s[j] = " " )
          j = 0;
       k[j] = s[j];
      }
     k[i] = s[i] ;
  }
  for (int i = 0; i <= s.size(); i++)
    cout << k[i];
  return 0;
}
