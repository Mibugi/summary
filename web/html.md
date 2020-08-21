# HTML学习

### 目录

<a href="#1"> 基本操作<br>
<a href="#2">图像标签使用<br>
<a href="#3">超链接标签<br>
<a href="#4">注释<br>
<a href="#5">特殊字符<br>
<a href="#6">表格标签<br>

<a name="1"><br>
### 一、基本操作

#### 1.标题

```
<h>一级标题<br></h>
```

#### 2.字体加粗

```
<strong>常用加粗文字</strong>非加粗文字
<b>加粗方式2</br>
```

#### 3.字体倾斜效果

```
<em>常用倾斜效果</em>
<i>倾斜效果2</i>
```

#### 4.删除线

```
我是<del>常用删除线</del>
我是<s>删除线</s>
```

#### 5.下划线

```
<ins>常用下划线</ins>
<u>下划线2</u>
```

#### 6.盒子

```
<div>大盒子，一个单独占一行</div>
<span>百度</span>
<span>新浪</span>
<span>微博（可跨行显示，即一个小盒子）</span>
```

#### 7.在不产生一个新段落的情况下进行换行

```
<br /> 元素是一个空的 HTML 元素。由于关闭标签没有任何意义，因此它没有结束标签
```
<a name="2"><br>
### 二、图像标签使用

#### 1.

```
<img src="xiongmaotou.jpg"/>
```

#### 2.替换文本，图像显示不出来的时候用文字替换

alt="文字内容"

```
<img src="xiongmaotou.jpg" alt="熊猫头"/>
```

#### 3.提示文本，鼠标悬停在图片上时所显示的文字

title="文字内容"

```
<img src="xiongmaotou.jpg" alt="熊猫头" title="我是熊猫头"/>
```

#### 4.width 给图像设定宽度

```
<img src="xiongmaotou.jpg" alt="熊猫头" width="300"/>
```

#### 5.height 给图像设定高度

```
<img src="xiongmaotou.jpg" alt="熊猫头" title="我是熊猫头" height="100"/>
```

#### 6.border 给图像设定边框

```
<img src="xiongmaotou.jpg" alt="熊猫头" title="我是熊猫头" width="300" height="200" border="15"/>
```

#### 7.路径

绝对路径

```
<img src="C:\Users\10423\Desktop\web\案例\img.jpg" />
```

同一级路径

```
<img src="img.jpg"/>
```

下一级路径

```
<img src="images/img.jpg" />
```


<a name="3"><br>
### 三、超链接标签

#### 1.链接的语法格式

```
<a href="跳转目标" target="目标窗口的弹出方式"> 文本或图像 </a>
```

> 用于指定链接目标的url地址，当为标签应用href属性时，就具有超链接功能

> 用于指定链接页面的打开方式，_self为默认值，_blank为在新窗口中打开方式

#### 2.外部链接

#### 3.内部链接

网站内部页面之间的相互链接，直接链接内部页面名称即可

#### 4.空链接

没有确定连接目标

```
<a href="#">空链接</a>
```

#### 5.下载链接

如果href里面地址是一个文件或者压缩包，会下载这个文件

地址链接是 文件 .exe 或者是 zip 等压缩包形式

```
<a href="img.zip">下载文件</a>
```

#### 6.网页元素链接

```
<a href="http://www.baidu.com"><img src="img.jpg"/></a>
```

#### 7.锚点链接

可以快速定位到页面中的某个位置

<u>在链接文本的href属性中，设置属性为#名字的形式</u>

<u>找到目标位置标签，id属性=刚才的名字</u>

```
<a href="#bk">游戏背景</a>
<h3 id=bk>游戏背景</h3>
```
<a name="4"><br>
### 四、注释

快捷键：ctrl + /

<a name="5"><br>
### 五、特殊字符

![img](https://github.com/Singularity-V206/summary/blob/master/img/teshufuhao.png)

<a name="6"><br>

### 六、表格标签

#### 1.基本用法

```
<table>
	<tr>
		<td>单元格内文字</td>
		...
	<tr>
	...
<table>
```

1. table 用于定义表格

2. tr 用于定义行

3. td 用于定单元格，（table data）

#### 2.表头单元格标签

 th 表示表头部分(table head)

```
<table>
	<tr>
		<th>姓名</th>
		...
	</tr>
	...
</table>
```

#### 3.表格属性

![biaoge](https://github.com/Singularity-V206/summary/blob/master/img/biaoge.png)

这些属性要写到表格标签<table>里面去

```
<table align="center" border="1" cellpadding="20" cellspacing="0" width="500" height="255">
```

#### 4.表格结构标签

 thead 表格头部区域   tbody 表格的主题区域

#### 5.合并单元格

跨行合并：rowapan=“合并单元格的个数”

跨列合并：colspan=“合并单元格的个数”

###### 目标单元格：（写合并代码）

跨行：最上侧单元格为目标单元格，写合并代码

跨列：最左侧

```
    <table width="500" height="249" border=“1” cellspacing="0">
        <tr>
            <td></td>
            <td colspan="2"></td>
        </tr>
        <tr>
            <td rowspan="2"></td>
            <td></td>
            <td></td>
        </tr>
        <tr>
            <td></td>
            <td></td>
        </tr>
    </table>
```

删除多余单元格

### 七、列表标签

#### 1.无序列表

ul 表示HTML页面中的无序列表，列表项使用 li 标签定义

```
<ul>
	<li>列表项1</li>
	<li>列表项2</li>
	<li>列表项3</li>
	...
</ul>
```

1.各个列表项之间没有顺序级别之分，是并列的。

2.ul 只能嵌套 li 

3.li 里面啥都能放

#### 2.有序列表

ol 定义有序列表，列表排列以数字显示

```
<ol>
	<li>列表项1</li>
	<li>列表项1</li>
	<li>列表项1</li>
	...
</ol>
```

ol 中只嵌套 li 

#### 3.自定义列表

自定义列表以  dl  标签开始。每个自定义列表项以  dt  开始。每个自定义列表项的定义以  dd  开始。

```
<dl>
	<dt>Coffee</dt>
	<dd>Black hot drink</dd>
	<dt>Milk</dt>
	<dd>White cold drink</dd>
</dl>
```

定义列表的列表项内部可以使用段落、换行符、图片、链接以及其他列表等等。

### 八、表单标签

收集用户信息

#### 1.表单域

form 元素定义 HTML 表单，表单用于收集用户输入。

```
<form action="url地址" method="提交方式" name="表单域名称">
 .
	各种表单元素控件
 .
</form>
```

* action 属性*定义在提交表单时执行的动作。如果省略 action 属性，则 action 会被设置为当前页面。

* *method 属性*规定在提交表单时所用的 HTTP 方法（*GET* 或 *POST*）

  - ###### 何时使用 GET？

  如果表单提交是被动的（比如搜索引擎查询），并且没有敏感信息。

  当使用 GET 时，表单数据在页面地址栏中是可见的.

  GET 最适合少量数据的提交。浏览器会设定容量限制。

  - ###### 何时使用 POST？

  如果表单正在更新数据，或者包含敏感信息（例如密码）。

  POST 的安全性更加，因为在页面地址栏中被提交的数据是不可见的。

* Name 属性

  如果要正确地被提交，每个输入字段必须设置一个 name 属性

#### 2.表单元素

表单元素指的是不同类型的 input 元素、复选框、单选按钮、提交按钮等等。

##### 1.input输入表单元素

input (单标签)元素有很多形态，根据不同的 *type* 属性。

```
<input type="属性值" />
```

![input_shuxing](C:\Users\10423\Desktop\github\summary\img\input_shuxing.png)

单选按钮输入

input type="radio"定义*单选按钮*

```
<form>
	<input type="radio" name="sex" value="male" checked>Male
	<br>
	<input type="radio" name="sex" value="female">Female
</form> 
```

radio 单选按钮，可以实现多选一（有相同的name）

name是表单元素的名字 这里性别单选按钮必须有相同的名字 才能实现多选一

- 复选框

input type="checkbox" 

要有相同name

- 输入密码

input type="password" 

- 提交按钮

  

- 重置按钮

##### 2.默认值value

```
用户名: <input type="text" name="username" value="请输入用户名">
```

##### 3.规定此input元素首次加载时应当被选中

单选按钮和复选框可以设置 checked 属性，当页面打开的时候就可以默认选中这个按钮

checked="checked"

##### 4.规定输入字段中的字符最大长度

maxlength="正整数"

#### 2.select下拉表单元素

```
<select>
	<option>选项1</option>
	<option>选项2</option>
	<option>选项3</option>
	...
</select>
```

- select 中至少包含一对 option
- 在 option 中定义 selected = "selected" 时，当前项即为默认选中项

#### 3.textarea文本域表单元素

输入内容较多

```
<textarea rows="3" cols="20" >
	文本内容
</textarea>
```

cols = "每行的字符数" rows = “行数”
