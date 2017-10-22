#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("sample_routine.txt");
    string s,time,day;
    getline(fin,s);
    cout << "Enter day: (Tuesday/Wednesday): ";
    cin >> day;
    cout << "Enter time (format: xxtoxx) : ";
    cin >> time;
    fin >> s;
    int col=-1;
    while (s!=time)
    {
        fin >> s;cout << s << endl;
        col++;
    }cout << col;
    getline(fin,s);
    if (day=="Tuesday")
    {
        getline(fin,s);
    }
    else if (day=="Wednesday")
    {
        getline(fin,s);
        getline(fin,s);
        getline(fin,s);
    }

    fin.seekg(14,ios::cur);
    fin.seekg(col*13,ios::cur);
    fin >> s;
    if (s[0]=='|')
        cout << "available";
    else
        cout << "Not available";

    fin.close();
    return 0;
}
