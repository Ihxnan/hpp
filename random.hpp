#include <random>

std::random_device g_rand;

std::mt19937 gen(g_rand());

std::uniform_int_distribution<> dis(1, 100000);

inline void set_rd(int x)
{
    dis = std::uniform_int_distribution<>(1, x);
}

inline int rd()
{
    return dis(gen);
}
