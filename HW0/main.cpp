#include <iostream>
#include <Dense>
 
using Eigen::Matrix3d;
using Eigen::Vector3d;
using Eigen::Map;
 
int main()
{
  Matrix3d rotate45;
  rotate45 << cos(45), -sin(45), 0,
              sin(45), cos(45), 0,
              0, 0, 1;
  Matrix3d translationOne;
  translationOne << 1, 0, 1,
                    0, 1, 2, 
                    0, 0, 1;
  double data[] = {2, 1, 0};
  Map<Vector3d> v1(data);  
  std::cout << "Result is: " << std::endl << translationOne* rotate45* v1 << std::endl;

}