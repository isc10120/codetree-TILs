#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> arr;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string query;
        cin >> query;
        if(query.compare("push_back")==0){
            int x;
            cin >> x;
            arr.push_back(x);
        } else if(query.compare("pop_back")==0){
            arr.pop_back();
        } else if(query.compare("size")==0){
            cout << arr.size() << endl;
        } else if(query.compare("get")==0){
            int x;
            cin >> x;
            cout << arr[x-1] << endl;
        }
    }
    return 0;
}