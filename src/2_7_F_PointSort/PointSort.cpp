#include "PointSort.h"

#include <algorithm>

bool comparePoints(Point& one, Point& two) {
  return one.first * one.first + one.second * one.second <
         two.first * two.first + two.second * two.second;
}

PointList SortPoints(PointList points) {
  std::sort(points.begin(), points.end(), comparePoints);

  return points;
}