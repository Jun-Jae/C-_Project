#include <iostream>

using namespace std;

int main() {

    // while��, do while��

    string str = "Panda";
    int i = 0;
    bool a = true;
    bool b = false;
    
    while (str[i] != '\0') {
        cout << str[i] << endl;
        i++;
    }

    return 0;
}