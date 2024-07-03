
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long int n, count = 0;
    string shape;
    // vector<string> arr;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> shape;

        if (shape == "Tetrahedron")
        {
            count += 4;
        }
        else if (shape == "Cube")
        {
            count += 6;
        }
        else if (shape == "Octahedron")
        {
            count += 8;
        }
        else if (shape == "Dodecahedron")
        {
            count += 12;
        }
        else if (shape == "Icosahedron")
        {
            count += 20;
        }
    }
    std::cout << count << std::endl;

    return 0;
}