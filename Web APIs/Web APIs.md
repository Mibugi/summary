# Web APIs

### 一、DOM



#### 1.DOM树

- 文档：一个页面就是一个文档，DOM中用 dovument 表示。
- 元素：网页中的所有标签都是元素，DOM中使用 element 表示。
- 节点：网页中的所有内容都是节点（标签、属性、文本、注释等），DOM用 node 表示。



#### 2.获取元素

- 根据ID获取
- 根据标签名获取
- 通过HTML5新增的方法获取
- 特殊元素获取



##### 1-根据ID获取

使用 getElementByid() 可以获取带有 ID 的元素对象。

语法

```js
var element = document.getElementById(id);
```

参数

1.**`element`**是一个 [Element](https://developer.mozilla.org/zh-CN/docs/Web/API/Element) 对象。如果当前文档中拥有特定ID的元素不存在则返回null.

2.**`id`**是大小写敏感的字符串，代表了所要查找的元素的唯一ID.



##### 2-根据标签名获取

getElementsByTagName() 返回包含带有指定标签名称的所有元素的节点列表（集合/节点数组）。

还可以获取某个元素（父元素）内部所有指定标签名的子元素

```js
element.getelementsByTagName('标签名');
```

tip：父元素必须是单个对象（必须指明是哪一个元素对象），获取时不包括父元素自己。



##### 3-通过HTML5新增的方法获取

```js
document.getElementsByClassName('类名');
```

```js
document.querySelector('选择器');
```

根据指定选择器返回第一个元素对象。

```js
document.querySelectorALL('选择器');
```

根据指定选择器返回



##### 4-获取特殊元素（body、html）

1.获取body 元素

```js
var bodyEle = document.body;
```

2.获取html 元素

```js
var htmlEle = document.documentElement;
```



#### 3.事件



##### 1-事件三要素

- 事件源：事件被触发的对象
- 事件类型：如何触发
- 事件处理程序：通过一个函数赋值的方式 完成

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <button id="btn">唐伯虎</button>
    <script>
        //  点击一个按钮 弹出对话框
        //  (1)事件源 事件触发的对象 
        var btn = document.getElementById('btn');
        //  (2)事件类型 如何触发 什么事件 比如鼠标点击（onclick） 或鼠标经过 键盘按下
        //  (3)事件处理程序 通过一个函数赋值的方式 完成
        btn.onclick = function () {
            alert('点秋香');
        }
    </script>
</body>

</html>
```



##### 2-执行事件的步骤

1.获取事件源

2.注册事件（绑定事件）

3.添加事件处理程序（采取函数赋值形式）

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div>123</div>
    <script>
        //  执行事件步骤
        //  点击div 控制台输出 我被选中了
        //  1.获取事件源
        var div = document.querySelector('div');
        //  2.绑定事件 注册事件
        //  div.onclick
        //  3.添加事件处理程序
        div.onclick = function () {
            console.log('我被选中了');
        }
    </script>
</body>

</html>
```



#### 4.操作元素

JavaScript的 DOM 操作可以改变网页内容、结构和样式，我们可以利用 DOM 操作元素来改变元素里面的内容、属性等。注意以下都是属性。



##### 1-改变元素的内容

```js
element.innerText
```

从起始位置到终止位置的内容，但它除去 html 标签，同时空格和换行也会被去掉

```js
element.innerHTML
```

起始位置到终止位置的全部内容，包括 html 标签，同时保留空格和换行