#include <iostream>
using namespace std;
bool is_valid_identifier(const string& id) {
  if (id.empty()) return false;
  if (!((id[0] >= 'a' && id[0] <= 'z') ||
        (id[0] >= 'A' && id[0] <= 'Z') ||
        id[0] == '_')) return false;
  for (size_t i = 1; i < id.size(); ++i) {
    if (!((id[i] >= 'a' && id[i] <= 'z') ||
          (id[i] >= 'A' && id[i] <= 'Z') ||
          (id[i] >= '0' && id[i] <= '9') ||
          id[i] == '_')) return false;
  }
  return true;
}
int main() {
  string id;
  cout << "Enter an identifier: ";
  char ch;
  while ((ch = cin.get()) != '\n') {
    id += ch;
  }
  if (is_valid_identifier(id)) {
    cout << id << " is a valid identifier." << endl;
  } else {
    cout << id << " is not a valid identifier." << endl;
  }
  return 0;
}

