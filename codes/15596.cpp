#include <vector>

long long sum(std::vector<int> &a){
    long long sum = 0;

    while(!a.empty())
    {
        sum += a.back();
        a.pop_back();
    }

    return sum;
}
