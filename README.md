# HPP - 常用自定义头文件集合

一个专为算法竞赛和编程实践设计的C++常用自定义头文件集合，提供调试工具、随机数生成、时间测量、数据生成和树状数组等实用功能。

## 项目结构

```
hpp/
├── headers/           # 头文件目录
│   ├── debug.hpp      # 调试工具和常用定义
│   ├── rd             # 随机数生成器
│   ├── time           # 时间测量工具
│   ├── data.hpp       # 数据生成工具
│   └── fenwick        # 树状数组模板
├── scripts/           # 安装脚本
│   └── setup.py       # 头文件安装脚本
└── README.md          # 项目说明文档
```

## 安装说明

### 安装方法

```bash
# 优先推荐（GitHub版本更新及时）
git clone https://github.com/Ihxnan/hpp.git
cd hpp
sudo ./scripts/setup.py

# 备用地址（Gitee，可能版本落后）
git clone https://gitee.com/Ihxnan/hpp.git
cd hpp
sudo ./scripts/setup.py
```

安装脚本会将所有头文件以符号链接方式安装到 `/usr/local/include/` 目录，使其在系统中全局可用。

### 使用方法

安装完成后，可以直接在C++代码中包含相应的头文件：

```cpp
#include <debug>     // 包含调试工具
#include <rd>        // 包含随机数生成器
#include <time>      // 包含时间测量工具
#include <fenwick>   // 包含树状数组模板
```

## 核心功能模块

### 1. debug.hpp - 调试工具集

#### 使用

```c++
#include <debug>
```

#### 功能特性

**类型别名**
| 简写 | 类型                                |
| :-:  | :-:                                 |
| ll   | long long                           |
| vi   | vector<int>                         |
| vvi  | vector<vector<int>>                 |
| vl   | vector<long long>                   |
| vvl  | vector<vector<long long>>           |
| vs   | vector<string>                      |
| pii  | pair<int, int>                      |
| pll  | pair<long long, long long>          |
| psi  | pair<string, int>                   |

**常量定义**
| 常量 | 值                                  |
| :-:  | :-:                                 |
| iINF | 0x3f3f3f3f(int无穷大)               |
| lINF | 0x3f3f3f3f3f3f3f3f(long long无穷大) |
| mod  | 998244353(小mod)                    |
| MOD  | 1000000007(大mod)                   |

**常用宏**
- `all(x)` - x.begin(), x.end()
- `out(x)` - 输出x并换行
- `out1/2/3(x, y, z...)` - 输出变量名和值
- `lowbit(x)` - x & -x
- `yn(ans)` - 输出"Yes"/"No"
- `YN(ans)` - 输出"YES"/"NO"
- `pb/pf/qb/qf` - 容器操作
- `no/yes` - 快速输出并返回

**数学函数**
- `ll gcd(ll a, ll b)` - 最大公约数

**输出重载**
支持vector、map、set、pair等容器的直接输出：

```c++
#include <debug>

int main()
{
    vi arr{1, 2, 3};
    out(arr);
    std::map<int, int> mp;
    mp[1] = 2;
    mp[3] = 4;
    out(mp);
    return 0;
}
```

### 2. rd - 随机数生成器

#### 使用

```c++
#include <iostream>
#include <rd>

using namespace std;

int main()
{
    // 默认范围[1,100000]
    for (int i = 0; i < 10; ++i)
        cout << rd() << ' ';
    cout << endl;
    
    // 设置范围[1,10]
    set_rd(10);
    for (int i = 0; i < 10; ++i)
        cout << rd() << ' ';
    
    // 直接指定范围
    for (int i = 0; i < 10; ++i)
        cout << rd(20, 30) << ' ';
    return 0;
}
```

#### 功能函数

- `set_rd()` - 设置默认范围[1,100000]
- `set_rd(r)` - 设置范围[1,r]
- `set_rd(l,r)` - 设置范围[l,r]
- `rd()` - 生成默认范围随机数
- `rd(r)` - 生成[1,r]范围随机数
- `rd(l,r)` - 生成[l,r]范围随机数

### 3. time - 时间测量工具

#### 使用

```c++
#include <cmath>
#include <iostream>
#include <time>

using namespace std;

void func1(int n)
{
    for (int i = 0; i < n; ++i)
        pow(i, i);
}

void func2(int n, int step)
{
    for (int i = 0; i < n; i += step)
        pow(i, i);
}

int main()
{
    int n = 1e9;
    cout << timeTaken(func1, n) << endl;
    cout << timeTaken(func2, n, 2) << endl;
    return 0;
}
```

#### 功能函数

- `double timeTaken(Func&& func, Args&&... args)` - 测量函数执行时间，返回秒为单位的double值

### 4. fenwick - 树状数组模板

#### 使用

```c++
#include <iostream>
#include <fenwick>

using namespace std;

int main()
{
    Fenwick<int> fw(10);
    
    // 添加元素
    for (int i = 1; i <= 10; ++i)
        fw.add(i, i);
    
    // 查询前缀和
    cout << fw.sum(5) << endl;
    
    // 查询区间和
    cout << fw.query(3, 7) << endl;
    
    return 0;
}
```

#### 模板类功能

- `Fenwick(length)` - 构造函数，默认长度100000
- `add(pos, val)` - 在位置pos增加val
- `sum(pos)` - 查询[1,pos]的和
- `query(left, right)` - 查询区间[left,right]的和

### 5. data.hpp - 数据生成工具

提供数据生成框架，支持：
- `ProblemType`枚举：Array、String
- `Data`类：用于生成不同类型的测试数据

## 技术特点

- 使用现代C++特性
- 模板化设计，支持多种数据类型
- 头文件库，无需编译，即插即用
- 符号链接安装，便于更新维护
- 专为算法竞赛优化，提供常用快捷操作
