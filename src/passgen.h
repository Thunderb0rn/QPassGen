#ifndef PASSGGEN_H
#define PASSGGEN_H

#include <stdlib.h>
#include <time.h>
#include <string>

class PassGen {
private:
    std::string  _password="";
    std::string Letters = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM";
    std::string Numbers = "0123456789";
    std::string Others = "~!@#$%^&*()_+=-{}[:;<.,>/?\\|]";
public:
    PassGen() {};

    std::string generate(int len = 4, bool letter = true, bool number = true, bool other = true);
};

#endif // PASSGGEN_H
