## 程序生命周期
- exit
- atexit 注册程序正常终止时要调用的函数
- abort
- assert

## 数学相关

#### 三角函数
- acos arc cosine(inverse cosine)
- asin
- atan
- sin
- cos
- tan

#### 数值运算
- abs
- labs 长整数的绝对值
- fabs 浮点绝对值
- ceil 向上取整(进位)
- floor 向下取整
- fmod 浮点取余
- fabs 浮点绝对值
- div 整数除法 和 '/' 不同，返回值是类型为div_t 的结构体
- ldiv 长整数除法
- modf 分解成整数和小数部分 modulus and fraction
  - https://stackoverflow.com/questions/58986957/what-is-modf-a-math-function-from-c-c-etc-shorthand-for
- rand, srand
- sqrt



## 数据类型转换
- atof 字符串转为浮点数 ASCii to float
- atoi ascii to integer 把字符串转为integer
  - 关于这类函数命名的吐槽
- atol 字符串转换为长整数 ascii to long

## 数据/内容类型判断
- isalnum is alphanumeric or not
- isalpha, isspace, ispunct, islower, isupper
- isdigit, isxdigit



## 文件操作
- fclose
- fopen
- freopen 重新打开文件 file reopen
- fflush 清洗文件缓冲区
- fread
- fwrite
- fputc, fputs
- feof 检测文件末尾
- ferror 检测文件错误
- fprintf format 格式化写到文件，与printf不同的点是他写到文件不写到标准输出流
- fseek 文件寻址
- fsetpos file set position
- ftell
- rewind 回到文件起始处
- remove
- rename

## 标准输出输入流操作
- getchar()
- putc
- printf
- scanf

## 内存相关操作
- malloc
- free
- memcmp compare
- memcpy
- memchr 内存块中搜索字符
- memmove
- memset
  - https://stackoverflow.com/questions/9782126/why-memory-functions-such-as-memset-memchr-are-in-string-h-but-not-in-stdli
- setbuff


## 字符串相关
- sprintf string print format 把格式化字符串写到string buff中
- vsprintf 用到可变参数列表的格式化写
- sscanf
- strcat
- strchr
- strcmp
- strcpy
- strftime
- strlen
- strrchr
- strtod 字符串转为double
- strtol
- strtoul


## 系统环境相关
- getenv 搜索操作系统的环境列表
- system 执行操作系统命令 把传入字符串交给操作系统的命令处理器(shell)来执行


## 时间相关
- time
- gmtime Greenwich Mean Time(GMT) 把日历时间转换成分解的UTC时间
  - utc时间 Coordinate Universal Time 协调世界时间
- localtime
- asciitime



















