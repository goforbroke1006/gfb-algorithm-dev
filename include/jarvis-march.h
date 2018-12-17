//
// Created by goforbroke on 11.12.18.
//

#ifndef GFB_ALGORITHM_DEV_JARVIS_MARCH_H
#define GFB_ALGORITHM_DEV_JARVIS_MARCH_H

#include <vector>
#include <cmath>

class point {
public:
    explicit point() : x(0), y(0) {}

    explicit point(double x, double y) : x(x), y(y) {}

    double x, y;

    bool operator==(const point b) const {
        return (this->x == b.x && this->y == b.y);
    }

    bool operator!=(point b) const {
        return !(this->x == b.x && this->y == b.y);
    }

    bool operator!=(point *b) const {
        return !(this->x == b->x && this->y == b->y);
    }

    point operator-(point &other) const {
        return point(this->x - other.x, this->y - other.y);
    }
};

std::vector<point> jarvisMatch(std::vector<point> src);

#endif //GFB_ALGORITHM_DEV_JARVIS_MARCH_H
