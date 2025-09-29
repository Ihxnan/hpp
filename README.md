# Ihxnan‘s 常用自定义头文件

## 安装说明

```sh
# 终端运行即可(优先推荐, GitHub 版本更新及时)
git clone https://github.com/Ihxnan/hpp.git
cd hpp
sudo ./scripts/setup.py
```

**注意**：如果访问不了github的话请使用gitee（不常更新，可能版本落后)

```sh
# 终端运行即可(Gitee 备用地址)
git clone https://gitee.com/Ihxnan/hpp.git
cd hpp
sudo ./scripts/setup.py
```

## 简介

### debugutils

#### 使用

```c++
#include <debugutils>
```

- 常用类型的简写

| 简写 | 类型                                |
| :-:  | :-:                                 |
| ll   | long long                           |
| vi   | vector<int>                         |
| vvi  | vector<vector<int>>                 |
| pii  | pair<int, int>                      |
| pll  | pair<long long, long long>          |
| psi  | pair<string, int>                   |
| 常量 | 值                                  |
| iINF | 0x3f3f3f3f(int无穷大)               |
| lINF | 0x3f3f3f3f3f3f3f3f(long long无穷大) |
| mod  | 998244353(小mod)                    |
| MOD  | 1000000007(大mod)                   |

- 最大公约数
    ll gcd(ll a, ll b)

- 重载的print
    - 支持基本值的输出
    - 支持向量和键值对的输出
    - 支持变参输出
    ```c++
    #include <debugutils>

    int main()
    {
        vi arr{1, 2, 3};
        print(arr);
        std::map<int, int> mp;
        mp[1] = 2;
        mp[3] = 4;
        print(arr, mp);
        return 0;
    }
    ```

### rd
#### 使用
```c++
#include <rd>
```

- void set_rd(int x) 设置随机数的范围(不设置默认1e5)
- int rd() 生成随机数 

### time
#### 使用
```c++
#include <time>
```

- double timeTaken(Func&& func, Args&&... args) 返回函数func执行时间
