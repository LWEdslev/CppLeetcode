#include <random>
#include <unordered_set>

class RandomizedSet {
private:
    std::unordered_set<int> inner;
public:
    RandomizedSet() 
    {
        inner = std::unordered_set<int>();
    }
    
    bool insert(int val) 
    {
        auto p = inner.insert(val);
        return p.second;
    }
    
    bool remove(int val) 
    {
        bool ret = inner.erase(val) == 1;
        return ret;
    }
    
    int getRandom() 
    {
        auto it = inner.begin();
        std::advance(it, rand() % inner.size());
        return *it;
    }
};

int main() 
{
    return 0;
}