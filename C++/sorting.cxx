#include <iostream>
#include <vector>
#include <algorithm>
// #include <ranges>

// using namespace std;

int main()
{
    std::vector<int> data{};
    int x{};

    while (std::cin >> x)
    {
        data.emplace_back(x);
    }

    // std::ranges::sort(data);

    for (int element : data)
    {
        std::cout << element << '\n';
    }

    int a = 3;
    int b = 5;

    std::iter_swap(*a, *b);
    std::cout << a << " " << b;

    return 0;
}