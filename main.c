#include <assert.h>

int main(void)
{
    int x = 0, y = 0;
    
    y = my_func(x);
    
    return 0;
}

int my_func(int x) {
    
    assert(x > 0);
    
    return -x;
    
}
