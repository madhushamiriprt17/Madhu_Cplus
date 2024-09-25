#include <iostream>
#include <string>
using namespace std;

template < typename OprandType >
OprandType add(OprandType a, OprandType b)
{
    OprandType result = a + b;
    return result;
}

int main()
{
    int result = add<int>(5,4);
    std:: cout<<result<<std::endl;
    float fresult =add<float>(7.1f,10.4f);
    std:: cout<<fresult<<std::endl;
    return 0;
}
