#include <practice/prac_lib/prac_lib.hpp>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace practice;
using namespace std;

int main(int argc, char **argv)
{
  int a = 2, b = 3;
  /*** 実体を作る ***/
  PracLib prac_lib;
  /*** PracLibクラス型のprac_lib内にあるsumメソッド ***/
  prac_lib.sum(a, b);
  cout << "sum: " << prac_lib.member_ << endl;
  return 0;
}