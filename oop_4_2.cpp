#include <iostream>
#include <string>
#include <map> // map, multimap
#include<vector>
using namespace std;
int main() {
  map <char, vector <int> > m;
  vector<int> v1,v2,v3;
  v1.push_back(38);
  v1.push_back(123);
  v2.push_back(380);
  v2.push_back(321);
  v3.push_back(3800);
  v3.push_back(999);
  m['C'] = v1;   // insert
  m['A'] = v2;
  m['B'] = v3;


  map <char, vector <int> >::iterator it;
  it = m.begin();
  while (it != m.end()) {
  cout << (*it).first << "=";
  for(vector <int>::iterator vit=(*it).second.begin();vit!=(*it).second.end();vit++)
  {
      cout << *vit << " ";
  }
  cout << endl;
    it++;
  }
char key;
  cout << "Enter a char: ";
  cin >> key;
  it = m.find (key);
  if (it == m.end())
    cout << key
         << " is NOT in map.";
  else
    cout << key << " is IN map.";
}
