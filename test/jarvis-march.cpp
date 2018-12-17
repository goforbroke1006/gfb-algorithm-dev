//
// Created by goforbroke on 16.12.18.
//

#include "gtest/gtest.h"
#include "../include/jarvis-march.h"

bool contains(const std::vector<point> &src, const point &p) {
    return end(src) != std::find(begin(src), end(src), p);
}

TEST(jarvisMatch, positive) {
    std::vector<point> points;
    points.emplace_back(10, 10);
    points.emplace_back(50, 50);
    points.emplace_back(10, 50);
    points.emplace_back(50, 10);
    points.emplace_back(30, 30);
    points.emplace_back(40, 40);

    auto res = jarvisMatch(points);

    ASSERT_TRUE(contains(points, point(10, 10)));
    ASSERT_TRUE(contains(points, point(10, 50)));
    ASSERT_TRUE(contains(points, point(50, 50)));
    ASSERT_TRUE(contains(points, point(50, 10)));
}
