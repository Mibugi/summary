# CSS学习

### 一、CSS语法

CSS 规则由两个主要的部分构成：选择器，以及一条或多条声明。

选择器｛样式｝

给谁改样式｛改什么样式｝

```
    <style>
        p {
            color: red;
            /* 修改文字大小为12像素 */
            font-size: 12px;   
        }
    </style>
```

每条声明由一个属性和一个值组成。

属性（property）是所希望设置的样式属性（style attribute）。每个属性有一个值。属性和值被冒号分开。

使用花括号来包围声明。

### 二、CSS代码风格

#### 1.样式书写格式

- 紧凑格式

  ```
  h3 { color: deeppink;font-size: 20px;}
  ```

- 展开格式

  ```
  h3 { 
  	color: deeppink;
  	font-size: 20px;
  }
  ```

#### 2.样式大小写

#### 3.空格规范

属性值前面，冒号后面，保留一个空格。

选择器和大括号中间保留空格。

### 三、CSS选择器

#### 1.CSS选择器作用

选择标签

#### 2.基础选择器

由单个选择器组成

##### 1-标签选择器

用 HTML 标签名作为选择器

```css
标签名 {
	属性1: 属性值1；
	属性2: 属性值2；
	属性3: 属性值3；
	...
}
```

##### 2-类选择器

类选择器允许以一种独立于文档元素的方式来指定样式。

该选择器可以单独使用，也可以与其他元素结合使用。

语法

```css
.类名 {
    属性1: 属性值1;
    ...
}
```

为了将类选择器的样式与元素关联，必须将 class 指定为一个适当的值。

类名前有一个点号（.）

```
<style>
        .red {
            color: red;
        }
</style>
</head>
<body>
    <ul>
        <li class="red">祝英台</li>
        <li>梁山伯</li>
        <li class="red">郑和</li>
        <li>魏九天</li>
        <li>谈允贤</li>
    </ul>
</body>
```

样式点定义 结构类（class）调用

- 多类名

  使用方式

  ```
  <div class="red font20">帅哥</div>
  ```

  - 多个类名中间必须用空格分开
  
##### 3- id 选择器

id 选择器可以为标有特定 id 的 HTML 元素指定特定的样式。

id 选择器以 "#" 来定义。

语法

```
#id名 {
	属性1: 属性值1;
	...
}
```

id 属性只能在每个 HTML 文档中出现一次。

##### 4-通配符选择器

用 * 定义，表示选取页面中所有元素（标签）。

语法

```
* {
	属性1: 属性值1;
}
```

不需要调用。

#### 3.CSS字体属性

##### 1-字体系列

使用 [font-family 属性](https://www.w3school.com.cn/cssref/pr_font_font-family.asp) 定义文本的字体系列。

```
p { font-family:"微软雅黑";}
div {font-family: Arial,"Microsoft Yahei","微软雅黑";}
```

只有当字体名中有一个或多个空格（比如 New York），或者如果字体名包括 # 或 $ 之类的符号，才需要在 font-family 声明中加引号。

单引号或双引号都可以接受。但是，如果把一个 font-family 属性放在 HTML 的 style 属性中，则需要使用该属性本身未使用的那种引号：

```
<p style="font-family: Times, TimesNR, 'New Century Schoolbook', Georgia,
 'New York', serif;">...</p>
```

各字体之间必须用英文状态下的逗号隔开。

##### 2-字体大小

[font-size 属性](https://www.w3school.com.cn/cssref/pr_font_font-size.asp)设置文本的大小。

语法

```
p {
	font-size: 20px;
}
```

如果没有规定字体大小，普通文本（比如段落）的默认大小是 16 像素。

可以给 body 指定整个页面文字的大小。

##### 3-字体粗细