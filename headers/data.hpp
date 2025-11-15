#ifndef IHXNAN_DATA
#define IHXNAN_DATA

#include <iostream>
#include <rd>

enum ProblemType
{
    Array,
    String
};

class Data
{
    ProblemType type;
    int n;
    int l;
    int r;

    void array()
    {
    }
  public:
    void generate(ProblemType type)
    {
        if (type == Array)
            array();
        else
            std::cout << "Not have this type" << std::endl;
    }
};

#endif // !IHXNAN_DATA
