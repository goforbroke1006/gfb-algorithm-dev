//
// Created by goforbroke on 18.12.18.
//

#include <vector>
#include "../../include/golang/jarvis-march.h"

void goJarvisMatch(point *src, size_t srcSize, point *dist, size_t &distSize) {
    distSize = 2;
    dist = new point[distSize]; // TODO: stub
    dist[0].x = 20;
    dist[0].y = 20;
    dist[1].x = 10;
    dist[1].y = 10;
}
