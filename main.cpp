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