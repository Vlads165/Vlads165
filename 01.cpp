#include <iostream>
using namespace std;
int t = 0; 

struct Branch
{
	int Data;
	Branch* LeftBranch; 
	Branch* RightBranch;

};

void print(Branch* aBranch)
{
	if (!aBranch) return; 
	t += 5; 
	print(aBranch->LeftBranch); 
	for (int i = 0; i < t; i++) cout << " "; 
	cout << aBranch->Data << endl; 
	print(aBranch->RightBranch);
	t -= 5; 
	return;
}

void add_elem(int aData, Branch*& aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else
	{
		if (aData > aBranch->Data) {
			add_elem(aData, aBranch->LeftBranch);
		}
		else if (aData < aBranch->Data) {
			add_elem(aData, aBranch->RightBranch);
		}
	}
}

void yb(Branch* aBranch)
{
	if (aBranch != NULL) {      
		yb(aBranch->LeftBranch);  
		cout << aBranch->Data << " "; 
		yb(aBranch->RightBranch); 
	}

}

void voz(Branch* aBranch)
{
	if (aBranch != NULL) {      
		voz(aBranch->RightBranch);  
		cout << aBranch->Data << " "; 
		voz(aBranch->LeftBranch); 
	}

}

int main()
{
	setlocale(LC_ALL, "rus");
	Branch* Root = 0;
	int element;
	int a[8];
	for (int i = 0; i < 8; i++) {
		cout << "Введите элемент: ";
		cin >> element;
		add_elem(element, Root);
		a[i] = element;
	}
	cout << "Вывод бинарного дерева: " << endl;
	print(Root);
	cout << endl;
	cout << "Вывод в порядке убывания: " << endl;
	yb(Root);
	cout << endl;
	cout << "Вывод в порядке возростания: " << endl;
	voz(Root);
	return 0;
}
// При вы ввыводе дерево читать справа налево 
