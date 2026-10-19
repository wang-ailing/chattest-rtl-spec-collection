#include <iostream>
#include <cmath>
#include <fstream>

struct FPUResult {
    bool sign;
    unsigned long long mantissa;
    int exponent;
};

FPUResult fpu_div(double a, double b) {
    double result = a / b;
    FPUResult res;
    res.sign = std::signbit(result);

   
    double log_result = logb(result);
    if (std::isinf(result)) {
        res.exponent = 1024; 
    } else {
        res.exponent = static_cast<int>(log_result);
    }

 
    double fraction = frexp(result, &res.exponent);
    res.mantissa = fraction * (1LL << 52);

    std::cout << "Input: a = " << a << ", b = " << b << std::endl;
    std::cout << "Result: " << result << std::endl;
    std::cout << "Sign: " << res.sign << std::endl;
    std::cout << "Exponent: " << res.exponent << std::endl;
    std::cout << "Mantissa: " << res.mantissa << std::endl;

    return res;
}

int main() {
    double a, b;
    std::cin >> a >> b;
    FPUResult res = fpu_div(a, b);


    std::ofstream outfile("ref_output.txt");
    if (!outfile.is_open()) {
        std::cerr << "Error: Unable to open ref_output.txt" << std::endl;
        return 1;
    }
    outfile << res.sign << " " << res.mantissa << " " << res.exponent << std::endl;
    outfile.close();

    return 0;
}

