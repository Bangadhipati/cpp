#include <iostream>

int main() 
{
    int n, c = 0;
    std::cout << "Input a Number: ";
    std::cin >> n;
    for(int i = 2; i <= n; i++) 
    {
        if(n % i == 0)
            c++;
    }
    if(c == 1)
        std::cout << "Prime" << std::endl;
    else
        std::cout << "Not Prime" << std::endl;
    return 0;
}
