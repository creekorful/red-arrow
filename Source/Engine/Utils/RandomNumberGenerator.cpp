#include "RandomNumberGenerator.h"

RandomNumberGenerator::RandomNumberGenerator()
{
    std::random_device rd;
    m_mt = std::mt19937(rd);
}

float RandomNumberGenerator::random(float min, float max)
{
    std::uniform_real_distribution<float> dist(min, max);
    return dist(m_mt);
}
