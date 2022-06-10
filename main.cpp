#include <iostream>

using namespace std; // not production

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

int main() {
    std::cout << "Hello, World!" << endl;


    for (int parity: {0, 1}) {
        cout << parity << endl;
    }

    return 0;
}
