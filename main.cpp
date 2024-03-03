#include <iostream>
#include "logelement.h"

int main() {
    using namespace std;
    cout << "Test v 5.011: OK\n";
    LogElement logElement;
	 logElement.setIn1(true);
    logElement.setIn2(false);
    cout << boolalpha;
    cout << "In1:" << logElement.getIn1() << endl;
    cout << "In2:" << logElement.getIn2() << endl
	
return 0;
}
class LogElement {
private:
    bool _in1;
    bool _in2;

public:
    void setIn1(bool newIn1);
    void setIn2(bool newIn2);
    bool getIn1();
    bool getIn2();
};

void LogElement::setIn1(bool newIn1) {
    _in1 = newIn1;
}

void LogElement::setIn2(bool newIn2) {
    _in2 = newIn2;
}