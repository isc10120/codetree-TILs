#include <iostream>
#include <list>
using namespace std;

int main() {
    int N;
    list<int> dll;
    cin >> N;
    while(N--){
        string q;
        cin >> q;
        if(q.compare("push_front")==0){
            int A;
            cin >> A;
            dll.push_front(A);
        } else if(q.compare("push_back")==0){
            int A;
            cin >> A;
            dll.push_back(A);
        } else if(q.compare("pop_front")==0){
            cout << dll.front() << endl;
            dll.pop_front();
        } else if(q.compare("pop_back")==0){
            cout << dll.back() << endl;
            dll.pop_back();
        } else if(q.compare("size")==0){
            cout << dll.size() << endl;
        } else if(q.compare("empty")==0){
            cout << dll.empty() << endl;
        } else if(q.compare("front")==0){
            cout << dll.front() << endl;
        } else if(q.compare("back")==0){
            cout << dll.back() << endl;
        }
    }
    return 0;
}