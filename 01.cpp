#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
struct dic {
	string word = "";
	unsigned count = 0;
	void print() {
		cout << word << " [" << count << "]" << endl;
	}
	void print(ofstream& file) {
		file << word << " [" << count << "]" << endl;
	}
};
string get(const string& str) {
	string result = "";
	for (int i = 0; i < str.size(); ++i) 
		result.push_back(std::tolower(str[i]));
	return result;
}
void add(vector<dic>& dictionary, const string& n_w) {
	string l_w = get(n_w);
	for (int i = 0; i < dictionary.size(); ++i)
		if (dictionary[i].word == lr_w) {
			dictionary[i].count++;
			return;
		}
	dictionary.push_back(dic{ l_w, 1 });
}
bool read_by_delimiter(ifstream& file, string& word, const string& delimiters) {
	word = "";
	bool isWordConstructed = false;
	while (!file.eof() && !isWordConstructed) {
		char symbol = file.get();
		if (symbol == EOF)
			break;
		if (delimiters.find(symbol) == string::npos)
			word += symbol;
		else
			if (!word.empty())
				isWordConstructed = true;
	}
	if (file.eof() && word.empty())
		return false;
	return true;
}
int main() {
	vector<dic> dictionary;
	ifstream in("1.txt");
	while (!in.eof()) {
		string n_w;
		if (!read_by_delimiter(in, n_w, "!?.,';: -+/*’\n"))
			break;
		add(dictionary, n_w);
	}
	ofstream out("2.txt");
	for (int i = 0; i < dictionary.size(); ++i)
		if (dictionary[i].count > 1)
			dictionary[i].print(out);
	return 0;
}
