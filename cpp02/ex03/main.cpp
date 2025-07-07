#include "Point.hpp"

// int main()
// {
//     Point a(3.3, 3.3f);
//     Point b(4.4, 4.4f);
//     Point c(6.6, 6.6f);

//     Point p(5.5f, 3.3f);
//     if(bsp(a, b, c, p))
//         std::cout << "inner" << std::endl;
//     else
//         std::cout << "outer" << std::endl;
// }

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(3, 3);
    Point outside(20, 20);
    Point edge(0, 5);
    Point vertex(0, 0);

    std::cout << "Inside point (3,3): " << bsp(a, b, c, inside) << std::endl;   // 1 (true)
    std::cout << "Outside point (20,20): " << bsp(a, b, c, outside) << std::endl; // 0 (false)
    std::cout << "On edge point (0,5): " << bsp(a, b, c, edge) << std::endl;    // 0 (false)
    std::cout << "Vertex point (0,0): " << bsp(a, b, c, vertex) << std::endl;   // 0 (false)

    return 0;
}