#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int i=0;i<5;i++){
        int num;
        cout << i+1 <<"번째 정수 입력:"<<'\n';
        cin >> num;
        sum += num;
    }
    cout <<"합계:"<< sum <<'\n';
    return 0;
};