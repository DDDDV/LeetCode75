#include <iostream>

using namespace std;

struct innerProj{
    int a;
    int c;
    string b;
};

class subjectA{
private:
    string name;
public:
    void show(const innerProj &p){
        cout << p.a << p.b << endl;
        cout << sizeof(p) << endl;
    }
};

int main() {
    innerProj p1;
    p1.a = 15;
    p1.b = "sam";
    subjectA a;

    a.show(p1);

    return 0;
}
