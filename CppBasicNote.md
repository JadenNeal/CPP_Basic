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

### 指针

指针是一个变量，存储的是值的地址。

一定要在对指针使用`*`之前，将指针初始化为一个确定的、适当的地址。

为一个数据对象（结构或者基本类型）获得并指定分配内存的通用格式如下：

```cpp
typeName* pointer_name = new typeName;
```

#### 使用delete释放内存

`new`和`delete`是配对的，否则将发生内存泄漏（memory leak）

```cpp
int* ps = new int;
delete ps;  // ok
delete ps;  // not ok, cannot delete twice

int judge = 5;
int* pt = &judge;
delete pt;  // not allowed delete pt from variable.
```

使用new和delete时，应遵循以下规则：

- 不要使用delete来释放不是new分配的内存；
- 不要使用delete释放同一个内存块两次；
- 使用`new []`为数组分配内存，应使用`delete []`来释放；
- 使用new为一个实体分配内存，应使用`delete`（没有方括号）来释放
- 对空指针使用delete是安全的

为数组分配内存的通用格式如下：

```cpp
typeName* pointer_name = new type_name [num_elements];
```


