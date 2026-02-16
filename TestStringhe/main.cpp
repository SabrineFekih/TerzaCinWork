
#include <iostream>
#include <string>
using namespace std;

bool isSeparator( char c ) {
    if (c==' ' || c=='\t' || c=='\n') return true;
    return false;
}

int contaParole(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isSeparator(str[i]) && (i == 0 || isSeparator(str[i - 1]))) {
            count++;
        }
    }
    return count;
}

int main() {
  string s;
  cout << "Inserisci una frase: ";
  getline (cin, s);

  cout << "La frase contiene " << contaParole(s.c_str()) << " parole." << endl;

  return 0;
}
