#ifndef RED_ARROW_RANDOMNUMBERGENERATOR_H
#define RED_ARROW_RANDOMNUMBERGENERATOR_H

#include <random>

class RandomNumberGenerator
{
public:
    RandomNumberGenerator();

    float random(float min, float max);

private:
    std::mt19937 m_mt;
};


#endif //RED_ARROW_RANDOMNUMBERGENERATOR_H
