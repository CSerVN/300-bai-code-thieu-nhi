#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int n, count=0;
    long x;
    std::cin >> n >> x;
    std::vector<int> r(n);
    for(int &y : r)
    {
        std::cin >> y;
    }
    for (int i=0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if((1l*r[i]*r[i] + 1l*r[j]) == x)
            {
                ++count;
            }
        }
    }
    std::cout << count;
    return 0;
}
