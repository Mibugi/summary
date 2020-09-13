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

[font-weight 属性](https://www.w3school.com.cn/cssref/pr_font_weight.asp)设置文本的粗细。

```
    <style>
        .bold {
            /* font-weight: bold; *加粗/
            font-weight: 700;
        }
        h2 {
            font-weight: 400;
            /* font-weight: normal; 变细*/
        }
    </style>
</head>
<body>
    <h2>江南百景图</h2>
    <p>玩家将梦回明朝江南地区，成为城市的设计师，描绘蓝图、兴造建筑、规划布局，经营赚钱。</p>
    <p>同时安排居民起居工作，写意世间百态，或带领大家奇遇探险。</p>
    <p>重绘明朝江南盛景，打造专属于玩家的江南百景图。</p>
    <p>明朝江南遭劫，百废待兴。玩家需要扮演文征明，重绘明朝江南盛景，打造专属于你的江南百景图。</p>
    <p class="bold" >在山水画卷中享受明朝水乡日常。</p>
    <p>你将成为城市的设计师，描绘蓝图、兴造建筑、规划布局，经营赚钱。</p>
</body>
</html>
```



##### 4-文字样式

[font-style 属性](https://www.w3school.com.cn/cssref/pr_font_font-style.asp)最常用于规定斜体文本。

该属性有三个值：

- normal - 文本正常显示

- italic - 文本斜体显示

- oblique - 文本倾斜显示
  ```
          p {
              font-style: italic;
          }
          em {
              font-style: normal;
          }
  ```



##### 5-font复合属性写法

```
body {
	font: font-style font-weight font-size/line-height font-family;
}
```

不能修改顺序。

属性间用空格隔开

```
font: italic 700 16px 'Microsoft Yahei';
```

不需要设置的属性可以省略（取默认值），但必须保留 font-size 和 font-family 属性，否则 font 属性不起作用。

```
font: 20px 'Microsoft Yahei';
```



### 四、CSS文本属性

通过文本属性，您可以改变文本的颜色、字符间距，对齐文本，装饰文本，对文本进行缩进，等等。



#### 1.文本颜色

```
<html>
<head>
	<style type="text/css">
		body {
			color:red
		}
		h1 {
			color:#00ff00
			}
		p.ex {
			color:rgb(0,0,255)
		}
	</style>
</head>

<body>
	<h1>这是 heading 1</h1>
	<p>这是一段普通的段落。请注意，该段落的文本是红色的。在 body 选择器中定义了本页面中的默认文本颜色。</p>
	<p class="ex">该段落定义了 class="ex"。该段落中的文本是蓝色的。</p>
</body>
</html>
```



#### 2-.对齐文本

text-align 属性用于设置元素内文本内容的水平对齐方式。

```html
<html>
<head>
	<style type="text/css">
		h1 {
			text-align: center
			}
		h2 {
			text-align: left
			}
		h3 {
			text-align: right
			}
	</style>
</head>

<body>
	<h1>这是标题 1</h1>
	<h2>这是标题 2</h2>
	<h3>这是标题 3</h3>
</body>
</html>
```

默认左对齐。



#### 3.装饰文本

text-decoration 添加下划线、删除线、上划线。

```html
<html>
<head>
	<style type="text/css">
		h1 {
            	text-decoration: overline	下划线
        }
		h2 {
            	text-decoration: line-through	删除线
        }
		h3 {
            	text-decoration: underline	下划线
        }
		h4 {
            	text-decoration:blink	文本闪烁（标记）
        }
		a {
            	text-decoration: none	默认（去除链接默认自带的下划线）
        }
	</style>
</head>

<body>
	<h1>这是标题 1</h1>
	<h2>这是标题 2</h2>
	<h3>这是标题 3</h3>
	<h4>这是标题 4</h4>
	<p><a href="http://www.w3school.com.cn/index.html">这是一个链接</a></p>
</body>

</html>
```



#### 4.文本缩进

text-indent 用来指定文本第一行的缩进，通常是将段落的首行缩进。

```html
<html>
<head>
	<style type="text/css">
		p {
			text-indent: 1cm
			}
	</style>
</head>
<body>
	<p>
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
		这是段落中的一些文本。
	</p>
</body>
</html>
```

em 是一个相对单位，即当前元素（font-size）1个文字的大小。



#### 5.行间距

line-height 用于设置行间距。

```html
p {
	line-height: 26px;
}
```



### 五、CSS的引入方式



#### 1.内部样式表

写到 html 页面内部，是将所有的CSS代码抽取出来，单独放倒一个  style 标签中。

可以方便控制当前整个页面中的元素样式设置。

这是 嵌入式引用！！



#### 2.行内样式表

```
<div style="color: red; font-size: 12px;">行内样式表</div>
```

适合于修改简单样式。



#### 3.外部样式表

样式单独写到CSS文件中，之后吧CSS文件引入。

- 新建后缀为 .css 的样式文件，把所有CSS代码都放入此文件中。

- css文件里面只有样式没有标签。

- 在 HTML 页面中，使用 link 标签引入这个文件。

 ```
<link rel="stylesheet" href="css文件路径">
 ```

#####   

### 六、Chrome调试工具

#### 1.打开调试工具

打开 Chrome 浏览器，按下 F12 或右击页面空白处→检查。



#### 2.使用调试工具

![](https://github.com/Singularity-V206/summary/blob/master/img/Chrome-tiaoshi.png)


### 七、Emmet语法

提高 gtml/css 的编写速度。



#### 1.快速生成 HTML 结构语法

![Emmet-HTML](https://github.com/Singularity-V206/summary/blob/master/img/Emmet-HTML.png)

#### 2.快速生成 CSS 结构语法

懒得打了，意会

#### 3.快速格式化代码

右键格式化文档啊



### 八、CSS复合选择器

#### 1.后代选择器

后代选择器（descendant selector）又称为包含选择器。

后代选择器可以选择作为某元素后代的元素。

```
元素1 元素2 {
	样式声明
}
```

```html
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>后代选择器</title>
    <style>
        /* 把ol里面的小li选出来改为pink */
        ol li {
            color: pink;
        }

        ol li a {
            color: deeppink;
        }

        .nav li a {
            color: yellow;
        }
    </style>
</head>

<body>
    <ol>
        随便写写
        <li>我是ol 的孩子</li>
        <li>我是ol 的孩子</li>
        <li>我是ol 的孩子</li>
        <li><a href="#">我是孙子</a></li>
    </ol>
    <ul>
        <li>我是ul 的孩子</li>
        <li>我是ul 的孩子</li>
        <li>我是ul 的孩子</li>
        <li><a href="#">不会变化</a></li>
    </ul>
    <ul class="nav">
        <li>我是ul 的孩子</li>
        <li>我是ul 的孩子</li>
        <li>我是ul 的孩子</li>
        <li><a href="#">不会变化</a></li>
    </ul>
</body>

</html>
```



#### 2.子选择器

子元素选择器（Child selectors）只能选择作为某元素子元素的元素。

语法

```
元素1>元素2{样式声明}
```

```html
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>子元素选择器</title>
    <style>
        .nav>a {
            color: red;
        }
    </style>
</head>

<body>
    <div class="nav">
        <a href="#">我是儿子</a>
        <p>
            <a href="#">我是孙子</a>
        </p>
    </div>
</body>

</html>
```



#### 3.并集选择器

集体声明。

```
元素1,
元素2 {
	样式声明
}
```

元素间逗号隔开。最后一个选择器，不需要加逗号。

```html
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>并集选择器</title>
    <style>
        /* 要求1：把朱元璋和魏九天改为粉色 */
        /* div,
        p {
            color: pink;
        } */

        /* 要求2：把朱元璋和魏九天改成红色 把ul里面的改为粉色 */
        div,
        p,
        .pig li {
            color: pink;
        }
    </style>

</head>

<body>
    <div>朱元璋</div>
    <p>魏九天</p>
    <span>李白</span>
    <ul class="pig">
        <li>徐霞客</li>
        <li>谈允贤</li>
        <li>祝英台</li>
    </ul>
</body>

</html>
```



#### 4.伪类选择器

CSS 伪类用于向某些选择器添加特殊的效果。

##### 1-链接伪类

在支持 CSS 的浏览器中，链接的不同状态都可以不同的方式显示，这些状态包括：活动状态，已被访问状态，未被访问状态，和鼠标悬停状态。

```css
a:link {color: #FF0000}		/* 未访问的链接 */
a:visited {color: #00FF00}	/* 已访问的链接 */
a:hover {color: #FF00FF}	/* 鼠标移动到链接上 */
a:active {color: #0000FF}	/* 选定的链接 */
```

```html
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>链接伪类选择器</title>
    <style>
        /* 未访问过的链接 */
        a:link {
            color: #333333;
            text-decoration: none;
        }

        a:visited {
            color: #2564da;
        }

        a:hover {
            color: #885998;
        }

        a:active {
            color: #36ff51;
        }
    </style>
</head>

<body>
    <a href="#">这是个链接</a>
    <a href="https://www.w3school.com">未知的网站</a>
</body>

</html>
```

- 在 CSS 定义中，a:hover 必须被置于 a:link 和 a:visited 之后，才是有效的。
- 在 CSS 定义中，a:active 必须被置于 a:hover 之后，才是有效的。

##### 2-focus伪类选择器

:focus 伪类在元素获得焦点时向元素添加特殊的样式。

这个伪类应用于有焦点的元素。例如 HTML 中一个有文本输入焦点的输入框，其中出现了文本输入光标；也就是说，在用户开始键入时，文本会输入到这个输入框。其他元素（如超链接）也可以有焦点，不过 CSS 没有定义哪些元素可以有焦点。

```
input:focus
  {
  	color: yellow;
  }
```

```css
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>focus选择器</title>
    <style>
        /* 把获得光标的input表单元素选取出来 */
        input:focus {
            background-color: #8c5fe6;
            color: #bba214;
        }
    </style>
</head>

<body>
    <input type="text">
    <input type="text">
    <input type="text">
</body>

</html>
```



### 九、CSS元素显示模式

元素（标签）以什么方式进行显示。

#### 1.块元素

![](https://github.com/Singularity-V206/summary/blob/master/img/kuaiyuansu.png)

- 文字类元素内不能使用块级元素

  

#### 2.行内元素

- 相邻行内元素在一行上，一行可以显示多个。

- 高、宽直接设置无效。

- 默认宽度是本身内容的宽度。

- 航元素只能容纳文本或其他行内元素。

  - 链接里不能再放链接

  - a 里面可以放块级元素

    

#### 3.行内块元素

- 和相邻行内元素（行内块）在一行上，但是他们之间会有空白缝隙。一行可以现实多个。

- 默认宽度是本身内容的宽度。

- 高度、行高、外边距和内边距都可以控制。

  

#### 4.元素显示模式转换

转化为块元素： display:block;

转化为行内元素：display:inline;

转化为行内块元素：display: inline-block



```html
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>元素显示模式转换</title>
    <style>
        a {
            /* 把行内元素转化为块级元素 */
            display: block;
            width: 100px;
            height: 30px;
            background-color: powderblue;
        }

        div {
            /* width: 300px;
            
            height: 100px; */
            background-color: rosybrown;
            display: inline;
        }

        span {
            width: 300px;
            height: 30px;
            background-color: skyblue;
            display: inline-block;
        }
    </style>
</head>

<body>
    <a href="#">这是个链接</a>
    <a href="#">这是个链接</a>
    <div>这是个块级元素</div>
    <div>这是个块级元素</div>
    <span>行内元素转换为行内块元素</span>
</body>

</html>
```

侧边栏制作

```html
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>简洁版侧边栏</title>
    <style>
        a {
            display: block;
            width: 230px;
            height: 40px;
            background-color: #55585a;
            font-size: 14px;
            color: snow;
            text-decoration: none;
            text-indent: 2em;
            line-height: 40px;
        }

        a:hover {
            background-color: #ff6700;
        }
    </style>
</head>

<body>
    <a href="#">手机 电话卡</a>
    <a href="#">电视 盒子</a>
    <a href="#">笔记本 平板</a>
    <a href="#">出行 穿戴</a>
    <a href="#">智能 路由器</a>
    <a href="#">健康 儿童</a>
    <a href="#">耳机 音响</a>
</body>

</html>
```

##### 小技巧：单行文字垂直居中

文字的行高=盒子的高度

line-height = height

```css
        div {
            width: 200px;
            height: 40px;
            background-color: pink;
            line-height: 40px;
        }
```



### 十.CSS的背景

#### 1.背景颜色

可以使用 [background-color 属性](https://www.w3school.com.cn/cssref/pr_background-color.asp)为元素设置背景色。这个属性接受任何合法的颜色值。

background-color 不能继承，其默认值是 transparent。transparent 有“透明”之意。也就是说，如果一个元素没有指定背景色，那么背景就是透明的，这样其祖先元素的背景才能可见。

```
background-color: transparent;
```



#### 2.背景图片

要把图像放入背景，需要使用 [background-image 属性](https://www.w3school.com.cn/cssref/pr_background-image.asp)。background-image 属性的默认值是 none，表示背景上没有放置任何图像。

```css
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>背景图片</title>
    <style>
        div {
            width: 700px;
            height: 250px;
            background-image: url(../images/LOL-logo.jpg);
        }
    </style>
</head>

<body>
    <div></div>
</body>

</html>
```



#### 3.背景平铺

如果需要在页面上对背景图像进行平铺，可以使用 [background-repeat 属性](https://www.w3school.com.cn/cssref/pr_background-repeat.asp)。

属性值 repeat 导致图像在水平垂直方向上都平铺，就像以往背景图像的通常做法一样。

repeat-x 和 repeat-y 分别导致图像只在水平或垂直方向上重复，no-repeat 则不允许图像在任何方向上平铺。



```CSS
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>背景平铺</title>
    <style>
        div {
            width: 700px;
            height: 250px;
            background-image: url(../images/LOL-logo.jpg);
            background-color: #3a2a97;
            /* 背景图片不平铺 */
            /* background-repeat: no-repeat; */
            /* 默认情况下背景平铺 */
            /* background-repeat: repeat; */
            /* 沿x轴平铺 */
            /* background-repeat: repeat-x; */
            /* 沿y轴平铺 */
            background-repeat: repeat-y;
        }
    </style>
</head>
```



#### 4.背景位置

background-position 属性设置背景图像的起始位置。

```
background-position: x y;
```

x坐标和y坐标。

- length ：百分数 | 由浮点数字和单位标识符组成的长度值

- position ：top|center|bottom|left|right 方位名词

##### 1-参数是方位名词

如果指定的两个值都是方位名词，则两个值的前后顺序无关。即 left top = top left  。

如果仅规定了一个关键词，那么第二个值将默认是"center"。

##### 2-参数是精确单位

第一个肯定是x坐标，第二个肯定是y坐标。

如果仅规定了一个值，另一个值将是 50%。

##### 3-参数是混合单位

方位名词和精确单位混合使用，啧第一个值是x，第二个值是y。



#### 5.背景图像固定（背景附着）

background-attachment 属性设置背景图像是否固定或者随着页面的其余部分滚动。

```
background-attachment： scroll | fixed
```

scroll：默认值。背景图像会随着页面其余部分的滚动而移动。

fixed：当页面的其余部分滚动时，背景图像不会移动。



#### 6.背景复合写法

无顺序要求

```
background: black url(../案例/综合案例/image/bg.jpg) no-repeat fixed center top;
```

用空格隔开。



#### 7.背景色半透明

```
background: rgba(0, 0, 0, 0.3);
```

a：alpha透明度，取值为0-1

只是让背景色半透明，对内容没有影响。



### 十一、CSS三大特性

#### 1.层叠性

相同选择器给设置相同的样式，此时一个样式就会覆盖（层叠）另一个冲突样式。

层叠性原则：

- 样式冲突，就近原则。



#### 2.继承性

子标签会继承父标签的某些样式，如文本颜色和字号

##### 行高的继承

```CSS
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>行高的继承</title>
    <style>
        body {
            color: pink;
            font: 12px/1.5 '微软雅黑';
        }

        div {
            /* 子元素继承了父元素 body 的行高 */
            /* 1.5是当前元素文字大小 font-size 的1.5倍 */
            font-size: 14px;
        }

        p {
            font-size: 16px;
        }
    </style>
</head>

<body>
    <div>粉红色的回忆</div>
    <p>粉红色的回忆</p>
</body>

</html>
```



#### 3.优先级

- 选择器相同，则执行层叠性
- 选择器不同，则根据选择器权重执行

![youxianji](https://github.com/Singularity-V206/summary/blob/master/img/kuaiyuansu.png)

行内>id>类>元素>继承/*

```css
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CSS优先级</title>
    <style>
        div {
            color: pink !important;
        }

        .test {
            color: red;
        }

        #demo {
            color: green;
        }
    </style>
</head>

<body>
    <div class="test" id="demo" style="color: purple;">你笑起来真好看</div>
</body>

</html>
```

##### 1-优先级注意点

继承的权重是0，如果该元素没有直接选中，不管父元素权重多高，子元素得到的权重都是0。

```css
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>权重注意点</title>
    <style>
        /* 父亲的权重是100 */
        #father {
            color: red;
        }

        /* p继承的权重为0 */
        p {
            color: pink;
        }

        body {
            color: red;
        }
        /* a链接浏览器默认制定了一个样式 蓝色的 有下划线 */
        a {
            color: green;
        }
    </style>
</head>

<body>
    <div id="father">
        <p>试一下</p>
    </div>
    <a href="#">我是单独的样式</a>
</body>

</html>
```

（即自己有样式就不需要继承）

##### 2-权重叠加

如果是复合选择器，则会有权重叠加，需要计算权重。

```css
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>权重的叠加</title>
    <style>
        /* 复合选择器会有权重叠加的问题 */
        li {
            color: red;
        }
        /* 权重 0，0，0，1 + 0，0，0，1 = 0，0，0，2 */
        ul li {
            color: green;
        }
        /* 权重0，0，1，0 +0，0，0，1 = 0，0，1，1 */
        .nav li {
            color: pink;
        }
    </style>
</head>

<body>
    <ul class="nav">
        <li>大猪蹄子</li>
        <li>大肘子</li>
        <li>猪尾巴</li>
    </ul>
</body>

</html>
```

权重虽然会叠加，但永远不会进位。



### 十二、CSS盒子模型

![](https://github.com/Singularity-V206/summary/blob/master/img/box.png)

#### 1.边框

元素的边框 (border) 是围绕元素内容和内边距的一条或多条线。

每个边框有 3 个方面：宽度、样式，以及颜色。

```
border : border-width || border-style || border-color 
```

- border-width :定义边框粗细，单位是px

- border-style ：边框的样式

- border-color  ：边框颜色

实线边框 solid

```
border-style: solid;
```

  虚线边框 dashed

```
border-style: dashed;
```

点线

```
border-style: dotted;
```

##### 1-边框的复合写法

```
border: 1px solid red;
```

没有顺序

##### 2-边框分开写法

```
border-top: 1px solid red;
```

只设定上边框，其余同理。

border-bottom ：下边框

```css
        div {
            width: 200px;
            height: 200px;
            border: 5px solid blue;
            border-top: 5px solid red;
        }
```

上边框为红色，其余边框为蓝色。（叠层性）

先写大的再写小的。

##### 3-表格的细线边框

border-collapse 控制浏览器绘制表格边框的方式。控制相邻单元格的边框。

collapse ：合并

```css
border-collapse: collapse;
```

##### 4-边框会影响盒子实际大小



```css
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>边框会影响盒子的实际大小</title>
    <style>
        /* 我们需要一个200*200的盒子，但是这个盒子有10px的红色边框 */
        div {
            width: 180px;
            height: 180px;
            background-color: pink;
            border: 10px solid red;
        }
    </style>
</head>

<body>
    <div></div>
</body>

</html>
```



#### 2.内边距（padding）

padding-left ：左内边距

以此类推

##### 复合写法

```
padding: 5px;
```

1个值，上下左右都5px。

```
padding: 5px 10px;
```

2个值，上下内边距5px，左右内边距10px。

```
padding: 5px 10px 20px;
```

3个值，上5px，左右10px，下20px。

```
padding: 5px 10px 20px 30px;
```

4个值，上5px，右10px，下20px，左30px，顺时针。

##### padding影响盒子实际大小