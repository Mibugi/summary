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

##### 1.标题

```
<h>一级标题<br></h>
```

##### 2.字体加粗

```
<strong>常用加粗文字</strong>非加粗文字
<b>加粗方式2</br>
```

##### 3.字体倾斜效果

```
<em>常用倾斜效果</em>
<i>倾斜效果2</i>
```

##### 4.删除线

```
我是<del>常用删除线</del>
我是<s>删除线</s>
```

##### 5.下划线

```
<ins>常用下划线</ins>
<u>下划线2</u>
```

##### 6.盒子

```
<div>大盒子，一个单独占一行</div>
<span>百度</span>
<span>新浪</span>
<span>微博（可跨行显示，即一个小盒子）</span>
```

##### 7.在不产生一个新段落的情况下进行换行

```
<br /> 元素是一个空的 HTML 元素。由于关闭标签没有任何意义，因此它没有结束标签
```
<a name="2"><br>
### 二、图像标签使用

##### 1.

```
<img src="xiongmaotou.jpg"/>
```

##### 2.替换文本，图像显示不出来的时候用文字替换

alt="文字内容"

```
<img src="xiongmaotou.jpg" alt="熊猫头"/>
```

##### 3.提示文本，鼠标悬停在图片上时所显示的文字

title="文字内容"

```
<img src="xiongmaotou.jpg" alt="熊猫头" title="我是熊猫头"/>
```

##### 4.width 给图像设定宽度

```
<img src="xiongmaotou.jpg" alt="熊猫头" width="300"/>
```

##### 5.height 给图像设定高度

```
<img src="xiongmaotou.jpg" alt="熊猫头" title="我是熊猫头" height="100"/>
```

##### 6.border 给图像设定边框

```
<img src="xiongmaotou.jpg" alt="熊猫头" title="我是熊猫头" width="300" height="200" border="15"/>
```

##### 7.路径

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

##### 1.链接的语法格式

```
<a href="跳转目标" target="目标窗口的弹出方式"> 文本或图像 </a>
```

> 用于指定链接目标的url地址，当为标签应用href属性时，就具有超链接功能

> 用于指定链接页面的打开方式，_self为默认值，_blank为在新窗口中打开方式

##### 2.外部链接

##### 3.内部链接

网站内部页面之间的相互链接，直接链接内部页面名称即可

##### 4.空链接

没有确定连接目标

```
<a href="#">空链接</a>
```

##### 5.下载链接

如果href里面地址是一个文件或者压缩包，会下载这个文件

地址链接是 文件 .exe 或者是 zip 等压缩包形式

```
<a href="img.zip">下载文件</a>
```

##### 6.网页元素链接

```
<a href="http://www.baidu.com"><img src="img.jpg"/></a>
```

##### 7.锚点链接

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

![img](https://github.com/Singularity-V206/summary/blob/master/img/teshufuhao.jpg)

<a name="6"><br>

### 六、表格标签

##### 1.基本用法

```
<table>
	<tr>
		<td>单元格内文字</td>
		...
	<tr>
	...
<table>
```

1.table用于定义表格

2.tr用于定义行

3.td用于定单元格，（table data）

##### 2.表头单元格标签

th表示表头部分(table head)

```
<table>
	<tr>
		<th>姓名</th>
		...
	</tr>
	...
</table>
```

##### 3.表格属性

![biaoge](https://github.com/Singularity-V206/summary/blob/master/img/biaoge.png)

这些属性要写到表格标签<table>里面去

```
<table align="center" border="1" cellpadding="20" cellspacing="0" width="500" height="255">
```

##### 4.表格结构标签

thead表格头部区域  tbody表格的主题区域

##### 5.合并单元格

跨行合并：rowapan = “合并单元格的个数”

跨列合并：colspan = “合并单元格的个数”

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
