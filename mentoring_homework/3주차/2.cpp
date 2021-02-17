#include <iostream>
using namespace std;

int main() {
    int num;
    cout <<"구구단 출력: "<<'\n';
    cin >> num;

    for(int i=1 ; i<num+1;i++) {
        cout << num << "X" << i << "=" << i*num << '\n';
    }
    return 0;
};