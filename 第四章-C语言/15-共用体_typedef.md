# 共用体和`typedef`



## 一、共用体

在C语言中, 不同数据类型使用共同存储区域, 这种数据类型称为共用体, 又称为联合体.

### 1.1 共用体类型定义

==语法==

```c
union   共用体名
{
    成员列表;
};
```

* 共用体类型的定义, 共用体类型变量的声明和定义与结构体相似
* 共用体与结构体不同仅在于使用内存的方式上 
  * 共用体: 成员共同使用一个内存空间. 共用体变量占用的空间等于成员中占用最大空间.
  * 结构体: 成员各自占有内存空间, 结构体变量占用的空间等于所有成员占用空间的和.

### 1.2 共用体变量定义

1. 先定义共用体, 在定义共用体变量

   ```c
   union   共用体名
   {
       成员列表;
   };
   
   union  共用体名  共用体变量名; 
   ```

2. 定义共用体时, 定义共用体变量

   ```c
   union   共用体名
   {
       成员列表;
   } 共用体变量名;
   ```

3. 直接定义共用体变量

   ```c
   union 
   {
       成员列表;
   } 共用体变量名;
   ```

### 1.3 共用体变量赋值

```c
共用体变量.成员名 = 成员对应类型的值
```

* 共用体变量的成员共用内存. 对在某一时刻只能使用一个成员.
* 在同一作用区域同一次执行时, 共用体变量中起作用的成员时最后一次赋值的成员
* 共用体通常和结构体混合使用.

## 二、typedef

C语言中允许使用关键字`typedef`定义新的数据类型.

**==语法==**

```c
typedef  已有数据类型  新数据类型;
```

* ```c
  typedef   int   INT;
  ```

  * 将`int`类型定义为`INT`类型.

* ```c
  typedef    struct   _node_
  {
      int   data;
      struct   _node_   *next;
  }listnode, *linklist;
  ```

  * 相当于定义了两个数据类型`listnode`和`linklist`

    * `listnode` 等价于 `struct   _node_`
    * `linklist` 等价于 `struct  _node_  *`

  * 等价定义

    ```c
    struct   _node_
    {
        int   data;
        struct   _node_   *next;
    };
    
    typedef   struct  _node_   listnode;
    typedef   struct  _node_   *linklist;
    ```

    