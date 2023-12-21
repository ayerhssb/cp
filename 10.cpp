#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int limak, bob, count = 0, limak_3, bob_2;
    std::cin >> limak;
    std::cin >> bob;

    for (int i = 1;; i++)
    {
        limak = 3 * limak;
        bob = 2 * bob;
        if (limak > bob)
        {
            std::cout << i << std::endl;
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}