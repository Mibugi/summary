# JavaScript

### 概述

#### 1.注意

- JavaScript 没有访问系统文件的权限（安全）
- 无需编译，由上到下一次解释执行
- 和Java没有任何直接关系



### 一、JavaScript组成

- ECMAScript （核心）：规定了js的语法和基本对象。
- DOM 文档对象模型： 处理网页内容的方法和接口。（标记型文档 HTML）
- BOM 浏览器对象模型： 与浏览器交互的方法和接口。



#### 二、JavaScript输出

- 使用 window.alert() 写入警告框
- 使用 document.write() 写入 HTML 输出
- 使用 innerHTML 写入 HTML 元素
- 使用 console.log() 写入浏览器控制台

### 二、JavaScript引入方式

#### 1.内部脚本

在当前页面内部写 script 标签，内部即可书写 JavaScript 代码。

```
<script type="text/javascript">
	//JavaScript代码
</script>
```

理论上可以放在任何位置。

#### 2.外部引入

在 HTML 文档中，通过  script src="" 标签引入.js文件。

格式

```
<script type="text/javascript" src="javascript文件路径"></script>
```

外部引用时 script 标签内不能有 script 代码，即使写了也不会执行。



### 三、注释

单行注释	//

多行注释	/* */



### 四、变量

标示内存中的一块控件，用于存储数据，且数据是可变的。

变量声明

```
var 变量名;	//变量赋予默认值，默认值为 undefined（未定义的）
```

变量的声明和赋值

```
var 变量名=值;	//变量赋予对应的值
```

在声明 JavaScript 变量时，需要遵循以下命名规范：

- 必须以字母或下划线开头，中间可以是数字

- 变量名不能包含空格等符号

- 不能使用 JavaScript 关键字作为变量名

- 严格区分大小写

#### 1.基本数据类型

类似于 java 中的基本数据类型

- string    字符串类型。JavaScript中没有单个字符。（''和""都是字符串）

- boolean   布尔类型。固定值为true和false

- number   数字类型。任意数字。

- null   空，一个占位符。

- undefined   未定义类型。

typeof( )判断变量类型

#### 2.变量的语法拓展

##### 1-更新变量

一个变量被重新赋值后，它原有的值就会被覆盖，变量值将以最后一次赋的值为准。

##### 2-同时声明多个变量

```js
        // var age = 18;
        // var address = '火影村';
        // var gz = 2000;
        var age = 18,
            adddress = '火影村',
            gz = 2000;
```



### 五、数据类型