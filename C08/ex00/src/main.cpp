#include <easyfind.hpp>

int main()
{
    std::vector<int> arrV;
    arrV.push_back(1);
    arrV.push_back(2);
    arrV.push_back(3);
    arrV.push_back(4);
    arrV.push_back(5);
    try {
        easyfind(arrV, 8);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
