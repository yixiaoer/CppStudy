# Chapter 3 类和对象

类（Class）是面向对象程序设计的最基本概念

对象是类的实例

## 类与对象的基本概念

### 结构体与类

* C++ 中的结构体

  * C++ 中对 C 语言中的结构体进行了扩充
  * 可以含有**不同类型的数据**，还可以含有**函数**
  * 结构体中的数据和函数都是结构体的成员
    * 结构体中的数据称为**<font color=#F9AC91>数据成员</font>**
    * 结构体中的函数称为**<font color=#F9AC91>成员函数</font>**，为了访问这些成员函数，必须先定义该结构体类型的变量，然后像访问结构体中的数据一样进行访问（0.cpp）

* 类的声明

  * C++ 中提供了一种比结构体类型更安全有效的数据类型——类，类与结构体形式很相似

  * 类是一种数据类型，由用户定义的抽象的数据类型，类代表了一批对象的共性和特征，类是对象的抽象，而对象是类的实例

  * 先声明一个类类型，然后用它去定义若干的同类型的对象，对象是类类型的变量

  * C++ 中类中的成员分为**私有成员**（用 private 声明）和**公有成员**（用 public 声明）

    * **<font color=#CA9E92>私有成员</font>**
      * 包括数据成员和成员函数
      * 只能被类内的成员函数访问，而不能被类外的对象访问
      * 默认情况下，类中的成员是私有的
      * 如果一个类中的所有成员都声明为私有的，即只有私有（private）部分，那么该类将完全与外界隔绝，这样的类是没有实际意义的
    * **<font color=#CA9E92>公有成员</font>**
      - 包括数据成员和成员函数
      - 能被类内的成员函数访问，也能被类外的对象访问
      - 默认情况下，结构体中的成员是公有的
    * 在实际应用中一般把需要保护的数据设置为私有的，把它隐蔽起来，而把成员函数设置为公有的，作为类与外界的接口（1.cpp）
    * private 和 publc 称为成员访问限定符，用它们来声明各成员的访问属性

  * 类类型声明的一般形式

    ```C++
    class 类名{
        [private:]
          私有数据成员和成员函数
            
        public:
          公有数据成员和成员函数
    };
    ```

  * 除了 private 和 public 之外，类中的成员还可以用另一个关键字 protected 来说明，被 protected 说明的数据成员和成员函数称为保护成员，保护成员可以由本类的成员函数访问，也可以由本类的派生类的成员函数访问，而类外的任何访问都是非法的，即它是半隐蔽的

  * 数据成员可以是任何数据类型，但是不能用 auto、register 或 extern 进行说明



### 成员函数的定义

* 类的成员函数是函数的一种，用法与普通函数基本一样，只是它属于一个类的成员

* 成员函数可以访问本类中任何成员（包括私有的、保护的和公有的）

* 成员函数可以被指定为私有的、公有的和被保护的

  * 私有的成员函数只能被本类中其他成员函数调用，不能被类外的对象调用
  * 公有的成员函数及可以被本类的成员函数访问，也可以在类外被该类的对象访问

* 定义成员函数的方式

  成员函数及可以定义成普通函数，也可以定义成内联函数

  1. 【定义成普通成员函数】在类声明中只给出成员函数的原型，而将成员函数的定义放在类的外部

  这种成员函数在类外定义的一般形式：

  ```C++
  返回值类型 类名 ::成员函数名(参数表)
  {
      函数体
  }
  ```

  说明

  * 在类外定义成员函数时，必须在成员函数名之前加上类名，在类名和函数名之间加上作用域运算符“::“，用于声明这个成员函数是属于哪个类的

    若在函数名之前没有类名，或既无类名又无作用域运算符”::“，则表明该函数不是成员函数，而是普通函数

  * 在类外定义成员函数时，要说明参数表中参数的类型，还必须要指出其参数名

  2. 【定义成内联成员函数】将成员函数直接定义在类的内部 

  ```C++
  class Point{
      public:
      void setpoint(int a,int b)
      {
          x=a;
          y=b;
      }
      int getx()
      {
          return x;
      }
      int gety()
      {
          return y;
      }
      
      private:
      int x,y;
  };
  ```



  * 只有相当简短的成员函数才定义为内联函数

  * 这种定义内联成员函数的方法没有使用关键字 inline 进行声明，因此称为隐式定义

  2. 【定义成内联成员函数】在类声明中只给出成员函数的原型，而将成员函数的定义放在类的外部

  ```C++
  class Point{
      public:
      inline void setpoint(int,int);
      inline int getx()
      inline int gety()
      
      private:
      int x,y;
  };
  inline void Point::setpoint(int a,int b)
  {
          x=a;
          y=b;
  }
  inline int Point::getx()
  {
      return x;
  }
  inline int Point::gety()
  {
      return y;
  }
  ```

  * 显示地说明这是一个内联函数



### 对象的定义和使用

* 类与对象的关系

  把具有共同属性和行为的事物所构成的集合叫类

  类的变量叫做类的对象，对象也称为类的实例

* 对象的定义

  * 在声明类的同时，直接定义对象

    在声明类的右花括号“}”后，直接写出属于该类的对象名表

    ```C++
    class Point{
        public:
        inline void setpoint(int,int);
        inline int getx()
        inline int gety()
        
        private:
        int x,y;
    }op1,op2;
    ```

    在声明类的同时直接定义了对象 op1 和 op2

  * 声明了类之后，在使用时再定义对象

    定义对象的格式与定义基本数据类型变量的格式类似，其一般形式为：

    `类名 对象名1，对象名2， ...;`

  * 声明了一个类便声明了一种类型，它并不接受和存储具体的值，只作为生成具体对象的一种“样板”，只有定义了对象后，系统才为对象分配存储空间，以存放对象中的成员

* 对象中成员的访问

  * 不论是数据成员，还是成员函数，只要是公有的，在类的外部可以通过类的对象进行访问

  * 访问对象中的成员通常的三种方法

    * 通过对象名和对象选择符访问对象中的成员

      * 一般形式：`对象名.数据成员名`  或`对象名.成员函数名[(实参表)]`

        其中 `.`叫做对象选择符，简称点运算符

      * 说明：在类的内部所有成员之间都可以通过成员函数直接访问，但是类的外部不能访问对象的私有成员

    * 通过指向对象的指针访问对象中的成员

      * 在定义对象时若定义的是指向此对象的指针，则访问此对象的成员时，不能用“.”操作符，而应使用“->”操作符

    * 通过对象的引用访问对象中的成员

      * 如果为一个对象定义了一个引用，也就是为这个对象起了一个别名，因此完全可以通过引用来访向对象中的成员



### 类的作用域和类成员的访问属性

* 类的作用域就是在类的声明中一对花括号所形成的作用域
  * 在类的作用域内，一个类的任何成员函数成员可以不受限制的访问该类中的其他成员
  * 在类的作用域之外，对这个类的数据成员和成员函数的访问则要受到一定的限制，有时甚至是不允许的
* 一个类的所有成员都在该类的作用域内
* 类成员的访问属性
  * 公有属性
  * 私有属性
  * 保护属性
* 一般而言，公有成员是类的对外接口；私有成员是类的内部数据和内部实现，不希望外部访问



## 构造函数与析构函数

* 类是一种用户自定义的类型，可能简单也可能复杂

* 但声明一个类的对象时，编译程序需要为对象分配内存空间，同时对他的数据成员赋初值，这些可有构造函数来完成
* 构造函数是属于某一个类的，可由用户提供，或由系统自动生成
* 与构造函数对应的是析构函数，当撤销类的对象时，析构函数就回收存储空间，并做一些善后工作
* 析构函数也属于某一个类，可由用户提供，也可由系统自动生成

### 对象的初始化和构造函数

* 类是一种抽象的数据类型，不占存储空间，不能容纳具体的数据，因此**在类声明中不能给数据成员赋初值**

* 与使用变量一样使用对象时也应该先定义后使用，在定义对象时，对数据成员赋初值称为对象的初始化

  * 在定义对象时，如果某一数据成员没有被赋值，那么其值是不可预知的
  * 对象是一个实体，在使用对象时，其每一个数据成员都应该有确定的值
  * 如果一个类中的多有成员都是公有的，则可以在定义对象时对数据成员进行初始化，这种方式类似于结构体变量初始化的方法，但是**如果类中包含私有的或保护的成员时**，就不能用这种方法进行初始化，这时可以采用类中的公有成员函数来对对象中的数据成员赋初值（e.g. 1class.cpp 中的 init），但并不方便。C++ 提供了一个更好的方法，即利用构造函数来完成对象的初始化

* 构造函数

  * 一种特殊的成员函数，主要用于为对象分配空间，进行初始化，即对数据成员赋初值（这些数据成员常为私有成员）

  * 当用户没有显式的去定义构造函数时，编译器会为类生成一个默认的构造函数，称为 "**默认构造函数**"（是无参数构造函数）， 默认构造函数不能完成对象数据成员的初始化，只能给对象创建一标识符，并为对象中的数据成员开辟一定的内存空间

  * 构造函数的名字必须**与类名相同**，不能由用户任意命名

  * 可以有任意类型的参数，但**<font color=#434A91>不能具有返回值类型</font>**（连 void 都不能有）

  * 与普通的成员函数一样，构造函数的函数体可写在类外，也可写在类体外

  * 构造函数无需显式调用，在定义对象时被系统自动调用，只完成**新对象**的初始化

  * 可以重载

  * 4 种构造函数方式

    * 无参数构造函数（e.g. 3.cpp）

      *  如果创建一个类没有写任何构造函数,则**系统会自动生成默认的无参构造函数**，函数为空，什么都不做
      * 只要写了某一种构造函数，系统就不会再自动生成这样一个默认的构造函数
      * 如果希望有一个这样的无参构造函数，则需要自己显示地写出来
      * **不带参数的构造函数对对象的初始化是固定的**，如果需要在建立一个对象时，通过传递某些参数，对其中的数据成员进行初始化，则不应使用无参数构造函数

    * 一般构造函数

      * 有参数的构造函数
      * 数据成员初值被赋为指定值

      * 通常的几种形式

        * `类名 对象名[(实参表)]`（e.g. 4.cpp) 

        * `类名 *指针变量名=new类名[(实参表)]`（e.g. 5.cpp)

        * 使用等号赋值的方式进行初始化

          ```c++
          Complex c3 = Complex(1.0,2.5);
          ```

    * 复制构造函数（赋值构造函数）

      * 复制构造函数参数为类对象本身的引用，用于根据一个已存在的对象复制出一个新的该类的对象，一般在函数中会将已存在对象的数据成员的值复制一份到新创建的对象中
      * 若没有显示的写复制构造函数，则系统会默认创建一个复制构造函数，但当类中有指针成员时，由系统默认创建该复制构造函数会存在风险（具体原因查询有关 “浅拷贝” 、“深拷贝”的文章论述）

      ```c++
      Complex(const Complex & c)
      {
            m_real = c.m_real;
            m_img  = c.m_img;
      }            
      ```

    * 类型转换构造函数

      根据一个指定的类型的对象创建一个本类的对象

      ```c++
      // 例如：下面将根据一个double类型的对象创建了一个Complex对象
      Complex::Complex(double r)
       {
            m_real = r;
            m_imag = 0.0;
       }
      ```

  * 用成员初始化列表对数据成员初始化**<font color=EF6AF>还是有点迷？？？不太懂QAQ</font>**

    * C++ 提供的一种初始化数据成员的方法

    * 在原来的函数首部的末尾加一个冒号，然后列出成员初始化列表，其一般形式为：

      ```C++
      类名::构造函数名([参数表])[:(成员初始化列表)]
      {
      //构造函数体
      }
      ```

    * 用成员初始化列表来实现对数据成员的初始化，这种方法不在函数体内用赋值语句对数据成员初始化，而是在函数首部实现（e.g. 6.cpp)

    * 数据成员是按照它们在类中声明的顺序进行初始化的，与它们在成员初始化列表中列出的顺序无关（e.g. 7.cpp)

  * 构造函数的重载

    - 一般构造函数可以有各种参数形式，一个类可以有多个一般构造函数，前提是参数的个数或者类型不同（基于c++的重载函数原理，e.g. 8.cpp，10.cpp）
    - 如果在类中用户没有定义构造函数，系统会自动提供一个函数体为空的构造函数，但是只要类中定义了一个构造函数（不一定是无参构造函数），系统将不再给它提供默认构造函数（e.g. 9.cpp）

### 浅拷贝与深拷贝（[参考](http://blog.51cto.com/ticktick/194307)）

如果没有自定义复制构造函数，则系统会创建默认的复制构造函数，但系统创建的默认复制构造函数只会执行“浅拷贝”，即将被拷贝对象的数据成员的值一一赋值给新创建的对象，若该类的数据成员中有指针成员，则会使得新的对象的指针所指向的地址与被拷贝对象的指针所指向的地址相同，delete该指针时则会导致两次重复delete而出错。下面是示例：

```cpp
#include <iostream.h>
#include <string.h>
class Person 
{
public :
        
    // 构造函数
    Person(char * pN)
    {
        cout << "一般构造函数被调用 !\n";
        m_pName = new char[strlen(pN) + 1];
        //在堆中开辟一个内存块存放pN所指的字符串
        if(m_pName != NULL) 
        {
           //如果m_pName不是空指针，则把形参指针pN所指的字符串复制给它
             strcpy(m_pName ,pN);
        }
    }        
      
    // 系统创建的默认复制构造函数，只做位模式拷贝
    Person(Person & p)    
    { 
        //使两个字符串指针指向同一地址位置         
        m_pName = p.m_pName;         
    }

    ~Person( )
    {
        delete m_pName;
    }
        
private :
    char * m_pName;
};

void main( )
{ 
    Person man("lujun");
    Person woman(man); 
    
    // 结果导致   man 和    woman 的指针都指向了同一个地址
    
    // 函数结束析构时
    // 同一个地址被delete两次
}


// 下面自己设计复制构造函数，实现“深拷贝”，即不让指针指向同一地址，而是重新申请一块内存给新的对象的指针数据成员
Person(Person & chs);
{
     // 用运算符new为新对象的指针数据成员分配空间
     m_pName=new char[strlen(p.m_pName)+ 1];

     if(m_pName)         
     {
             // 复制内容
            strcpy(m_pName ,chs.m_pName);
     }
  
    // 则新创建的对象的m_pName与原对象chs的m_pName不再指向同一地址了
```

## 对象数组与对象指针





## string 类



## 向函数传递对象



## 对象的赋值和复制



## 静态成员


