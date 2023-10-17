#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    while(cin >> str, cin.eof() != EOF) {
        cout << str << endl;
    }
    cout << str << endl;
    return 0;
}