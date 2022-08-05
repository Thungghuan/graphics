#include <cmath>
#include <eigen3/Eigen/Core>
#include <iostream>

int main() {
  Eigen::Vector3f p(2.0f, 1.0f, 1.0f);

  // rotate 45°
  float theta = M_PI_4;
  Eigen::Matrix3f r;
  r << std::cos(theta), -std::sin(theta), 0, std::sin(theta), std::cos(theta),
      0, 0, 0, 1;

  Eigen::Vector3f p1 = r * p;
  std::cout << p1 << std::endl;

  // translate (1, 2)
  Eigen::Matrix3f t;
  t << 1, 0, 1, 0, 1, 2, 0, 0, 1;

  Eigen::Vector3f p2 = t * p1;
  std::cout << p2 << std::endl;

  // in one step
  Eigen::Matrix3f m;
  m << std::cos(theta), -std::sin(theta), 1, std::sin(theta), std::cos(theta),
      2, 0, 0, 1;
  Eigen::Vector3f p3 = m * p;
  std::cout << p3 << std::endl;

  return 0;
}