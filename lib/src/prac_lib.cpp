#include <practice/prac_lib/prac_lib.hpp>

using namespace practice;

/************************************
* Public methods
*************************************/
PracLib::PracLib()
{

}
PracLib::~PracLib()
{

}

/********************************************
* 足し算をするメソッド
*********************************************/
void PracLib::sum(const int &a, const int &b)
{
  /*** メンバ変数member_は関数を出ても値は残る ***/
  member_ = a + b;
}

/*************************************
* Private methods
*************************************/