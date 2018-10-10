#include <iostream>
#include "rpn_calculator.hpp"

void test();

int main()
{
//    test();
    std::cout << "Enter your formula:\n";
    std::string formula;
    std::getline(std::cin, formula);
    std::cout << "You entered " << formula << std::endl;

    rpn_calculator calculator;
    int result = calculator.process_formula(formula);
    std::cout << "The result is:\n";
    std::cout << result << std::endl;
    system("pause");
    return 0;
}

/**
 * should return 5
 */
void test() {
    std::string formula = "15 7 1 1 + - / 3 * 2 1 1 + + -";
    std::cout << "You entered " << std::endl;
    std::cout << formula << std::endl;
    rpn_calculator calculator;
    int result = calculator.process_formula(formula);
    std::cout << "The result is:\n";
    std::cout << result << std::endl;
    if(result != 5)
    {
        std::cout << "CALCULATION ERROR" << std::endl;
    } else
    {
        std::cout << "CALCULATION SUCCESSFUL" << std::endl;
    }
}