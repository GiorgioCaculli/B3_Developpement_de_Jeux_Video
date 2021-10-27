#include "Functions.hpp"


Point operator-( Point point1, Point point2 )
{
    return Point( point1.get_x() - point2.get_x(), point1.get_y() - point2.get_y() );
}
