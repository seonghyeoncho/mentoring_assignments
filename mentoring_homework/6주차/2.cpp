#include <cstring>
#include <iostream>

using namespace std;

class Printer {
    private:
        string savedString;
    public:
        void SetString(string);
        void ShowString(void);


};
void Printer::SetString(string saveString) {
    savedString = saveString;
}
void Printer::ShowString() {
    cout << savedString << '\n';
};

int main() {
    Printer pnt;

    pnt.SetString("Hello World");
    pnt.ShowString();

    pnt.SetString("I Love C++");
    pnt.ShowString();


    return 0;
}