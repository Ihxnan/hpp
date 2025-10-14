#ifndef IHXNAN_FENWICK
#define IHXNAN_FENWICK

#include <vector>

template <class T> class Fenwick
{
    std::vector<T> tree;
    int length;

    T lowbit(int x)
    {
        return x & -x;
    }

  public:
    Fenwick(int length = 100000) : tree(length + 1), length(length)
    {
    }

    void add(int pos, T val)
    {
        for (; pos <= length; pos += lowbit(pos))
            tree[pos] += val;
    }

    T sum(int pos) const
    {
        T ans = 0;
        for (; pos > 0; pos -= lowbit(pos))
            ans += tree[pos];
        return ans;
    }

    T querry(int left, int right) const
    {
        return sum(right) - sum(left - 1); 
    }
};

#endif // !IHXNAN_FENWICK
