#include <iostream>
#include <list>
using namespace std;

int main() {
    list<char> l;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        char c;
        cin >> c;
        l.push_back(c);
    }

    list<char>::iterator it = l.end();
    for(int i=0; i<m; i++){
        char query;
        cin >> query;
        if(query=='L' && it!=l.begin()) it--;
        else if(query=='R' && it!=l.end()) it++;
        else if(query=='D' && it!=l.end()) it = l.erase(it);
        else if(query=='P'){
            char c;
            cin >> c;
            l.insert(it, c);
        }
    }
    
    for(it = l.begin(); it != l.end(); it++){
        cout << *it;
    }
    
    return 0;
}