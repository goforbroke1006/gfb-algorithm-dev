//
// Created by goforbroke on 11.12.18.
//

#include "../include/jarvis-march.h"

point *leftmost(std::vector<point> points) {
    if (points.empty())
        return nullptr;
    auto *res = new point;
    res->x = points.front().x;
    res->y = points.front().y;
    for (auto &p : points) {
        if (p.x < res->x) {
            res->x = p.x;
            res->y = p.y;
        }
    }
    return res;
}

double radians2degrees(double aa) {
    return aa * 360 / (2 * M_PI);
}

point *getNextWithMinAngle(std::vector<point> dist, const std::vector<point> &src) {
    point p_prelast = dist.at(dist.size() - 1 - 1);
    point p_last = dist.back();

    const point p1 = p_prelast - p_last;

    double angle = 360;
    auto *res = new point;
    for (auto &cp : src) {
        if (cp == p_last)
            continue;

        const point cp_rel = cp - p_last;

        double tmp = radians2degrees(
                atan2(
                        p1.x * cp_rel.y - p1.y * cp_rel.x,
                        p1.x * cp_rel.x + p1.y * cp_rel.y
                )
        );

        if (tmp < angle) {
            angle = tmp;
            delete res;
            res = new point(cp.x, cp.y);
        }
    }
    return res;
}

std::vector<point> jarvisMatch(std::vector<point> src) {
    std::vector<point> dist;
    if (src.empty())
        return dist;

    if (src.size() <= 3)
        return src;

    point &second = *leftmost(src);
    point first = point(second.x, second.y - 10);

    dist.push_back(first);
    dist.push_back(second);

    point *third = getNextWithMinAngle(dist, src);
    if (third == nullptr)
        return dist;
    dist.push_back(*third);

    dist.erase(dist.begin());

    while (dist.front() != dist.back()) {
        point *next = getNextWithMinAngle(dist, src);
        if (next == nullptr)
            break;
        dist.push_back(*next);
    }

    return dist;
}
