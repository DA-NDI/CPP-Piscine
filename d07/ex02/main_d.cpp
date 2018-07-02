#include <iostream>
int        main(void) {
    Array<float> testDefaultConstructor;
    std::cout << "\033[1;34mtestDefaultConstructor\033[0m => " << testDefaultConstructor.getArr() << std::endl;

    Array<std::string> testDefaultConstructorOnString;
    std::cout << "\033[1;34mtestDefaultConstructorOnString\033[0m => " << testDefaultConstructorOnString.getArr() << std::endl;

    Array<int> tst(12);
    std::cout << "\033[1;34mtst\033[0m => " << tst.getArr() << std::endl;
    std::cout << "Array<int> tst(12) = {";
    for (int i = 0; i < 12; i++) {
        tst[i] = i + 1;
        std::cout << tst[i];
        if (i < 11) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
    try {
        std::cout << "tst[13] = 42" << std::endl;
        tst[13] = 42;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    Array<int> tst2 = tst;
    std::cout << "\033[1;34mtst2\033[0m => " << tst2.getArr() << std::endl;


    Array<int> tst3(tst);
    Array<int> tst4(tst);

    std::cout << "Array<int> tst2 = tst; tst2 = {";
    for (int i = 0; i < 12; i++) {
        std::cout << tst2[i];
        if (i < 11) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
    try {
        std::cout << "tst2[-1] = -42" << std::endl;
        tst2[-1] = -42;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    Array<std::string> arrayOfStrings(5);
    arrayOfStrings[0] = "Hello";
    arrayOfStrings[1] = "World";
    arrayOfStrings[2] = "Foo";
    arrayOfStrings[3] = "Bar";
    arrayOfStrings[4] = "Zaz";
    std::cout << "Array<std::string> arrayOfStrings(5); arrayOfStrings = {";
    for (int i = 0; i < 5; i++) {
        std::cout << "\"" << arrayOfStrings[i] << "\"";
        if (i < 4) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
    try {
        std::cout << "std::cout << arrayOfStrings[7] << std::endl;" << std::endl;
        std::cout << arrayOfStrings[7] << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
