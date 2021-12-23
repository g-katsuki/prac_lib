#ifndef _PRAC_LIB_H_
#define _PRAC_LIB_H_

namespace practice
{
class PracLib{
public:
  PracLib();  // コンストラクタ
  ~PracLib();  // デストラクタ
  /*** 関数の宣言 ***/
  void sum(const int &a, const int &b);
  /*** メンバ変数の宣言 ***/
  int member_;
private:
};
}

#endif