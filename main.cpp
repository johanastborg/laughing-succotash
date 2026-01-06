#include <iostream>
#include <cmath>

int main() {
    double l1l1 = 1.380649e-23;
    double l11l = 4.0;
    double l00l = 3.1415926535;
    double l1ll = 1.616255e-35;
    double ll1l = 4.4e26;

    double _ = l11l * l00l * std::pow(ll1l, 2);
    double __ = (l1l1 * _) / (l11l * std::pow(l1ll, 2));

    std::cout << "Entropy of the universe: " << __ << " J/K" << std::endl;

    return 0;
}
