# C++ Primer Plus 笔记
## Chap03 处理数据

##### {}初始化

列表初始化不允许缩窄，例如`float -> int`是不允许的。

```cpp
const int code = 66;
int x = 66;
char c1 {31325}; // narrowing, not allowed
char c2 {66};    // allowed, char can hold 66
char c3 {code};  // allowed, code is a constant and char can hold 66
char c4 {x};     // not allowed, x is a variable

x = 31325;
char c5 = x;     // allowed
```

**当运算涉及两种类型时，较小类型会转换成较大类型**。

下面就是一个整型提升（integral promotion）的例子。

```cpp
short a1 = 20;
short a2 = 30;
short a3 = a1 + a2;
// 执行最后一句时，程序先获取a1和a2的值，将其转换成int，相加运算后再转换成short赋给a3
```

强制类型转换：`typename (value)`

## Chap04 复合类型

数组初始化：`typename arrayName[size]`

- 若无赋值，则`size`是必须的
- 有赋值，可省去`size`参数

带有赋值的初始化：

```cpp
int cards[4] = {3, 6, 8, 10};
int s[4] = {3};  // 其余置零

cards = s; // 非法语句，不能将一个数组赋给另一个

char bird[11] = "Mr. Cheeps";  
// 需要提前计算数组大小
// 10个显式字符，还有一个 \0 结尾的隐式字符
char fish[] = "Bubbles";  // 编译器自动计算
```



