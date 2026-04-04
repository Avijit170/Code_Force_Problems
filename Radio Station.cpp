#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    map<string, string> server;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        server[ip] = name;
    }
    for (int i = 0; i < m; i++)
    {
        string com, ipt;
        cin >> com >> ipt;
        string ip = ipt.substr(0, ipt.size() - 1);
        cout << com << " " << ipt<< " #" << server[ip] << endl;
    }
    return 0;
}

