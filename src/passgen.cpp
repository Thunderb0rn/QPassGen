#include "passgen.h"

int Hash(int key) {
    int n = key*key*0.01551234+key*0.120057878061;
    n<<3;

    return (n>0 ? n : -1*n);
}

int hash(std::string str) {
    int res = 0;
    for (int i = 0 ; i < str.size(); i++) {
        res += Hash( (int)str[i] );
    }

    return res;
}

std::string PassGen::generate(int len, bool letter, bool number, bool symbol) {
    srand(time(NULL) + hash(_password));
    _password = "";
    std::string dict = "";
    if (number) {

        dict += Numbers;
    }
    if (letter) {

        dict += Letters;
    }
    if (symbol) {

        dict += Others;
    }


    for (int i = 0; i < len; i++) {
        _password += dict[ rand() % dict.size() ];
    }

    return _password;
}
