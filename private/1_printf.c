// - 函数名含义 中英文
//   // print formatted string
// - 所在的库
//   // stdio.h
// - 函数的原型 
//   //  int printf( const char *format, ... );
//   - 返回类型，参数数量和类型
//   // 返回 int, 打印的字符数量，如果错误返回负值
// - 最简单的例子
//    - 结合原型介绍
//    printf("Bob");
      
//      %c: ("Bo%c", 'b');
//      %s: ("Bob %s", "is a boy");
////    - 术语
//      % + 字母 --》 转换说明符 / 转换指定符， 用于以指定 格式和数据 替换 或者说 插入第一个字符串参数
//// - 延伸例子
//      %后面的字母不是乱给的，是有含义的 c 指 字符char, s 指字符串string
//      转换说明符有很多，比如
//      %d 十进制数值，%f 浮点数，%e 数字的科学计数法
//
//      ("Bob is %d years old", 9)
//      ("Bob has %f dollars", 11.2)
      //("Bob is %6.3e miles away from China", 23450.0)

//e 前面的6.3的含义，6指整个数字表达式站多少个字符，如果指定的字符数量不够，不会只截取部分
//多出的部分会用空格填补，一般可以用来统一字符串的占位宽度


//
//用到字符串中
//
//("Hello %8s", "World");
//小数点后面的数字对于字符串有不同的含义

//("Hello %.2s", "World");
//代表截取多少个字符



// 数字类型的基本用法
//printf("%6.2d", 35);
// 默认是右对齐，左对齐的话加 - 
//printf("%-6.2d", 35);


//
//将会至少显示12位数字, 并带有6位小数的浮点数.

// - 可能的陷阱




#include <stdio.h> 

int main(void) {
  const char* string_a = "hello";
  const char* string_b = "hello";

  printf("address a and b are: %p vs %p\n", string_a, string_b);

  printf("Hello %.2s", "World");

  getchar();
  return 0;
}