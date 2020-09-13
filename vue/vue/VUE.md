# VUE

Vue 是一套用于构建用户界面的**渐进式框架**。

### 一、起步

引入 Vue：

```html
<!-- 开发环境版本，包含了有帮助的命令行警告 -->
<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
```

或者：

```html
<!-- 生产环境版本，优化了尺寸和速度 -->
<script src="https://cdn.jsdelivr.net/npm/vue"></script>
```



### 二、声明式渲染

#### 1.el挂载点

Vue.js 的核心是一个允许采用简洁的模板语法来声明式地将数据渲染进 DOM 的系统：

```html
<div id="app">
  {{ message }}
</div>
```

```js
var app = new Vue({
  el: '#app',
  data: {
    message: 'Hello Vue!'
  }
})
```

一个 Vue 应用会将其挂载到一个 DOM 元素上 (对于这个例子是 `#app`) 然后对其进行完全控制。那个 HTML 是我们的入口，但其余都会发生在新创建的 Vue 实例内部。

##### Vue实例的作用范围是什么？

Vue会管理el选项命中的元素及其内部的后代元素



#### 2.data数据对象

- Vue中用到的数据定义在data中

- data中可以写复杂类型的数据

- 渲染复杂类型数据时，遵循js的语法即可



### 三、本地应用

#### 1.v-text

设置标签的文本值（textContent）

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div id="app">
        <h2 v-text="message+'!'">内容</h2>
        <h2 v-text="info+'!'">内容</h2>
        <h2>{{ message+'!' }}内容</h2>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            data: {
                message: "一段内容!",
                info: "另一端内容!"
            }
        })
    </script>
</body>

</html>
```



#### 2.v-html指令

设置标签的innerHTML

内容中有 html 结构会被解析为标签

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div id="app">
        <p v-html="content"></p>
        <p v-text="content"></p>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            data: {
                // content: "一段内容"
                content: "<a href='http://www.baidu.com'>百度</a>"

            }
        })
    </script>
</body>

</html>
```

#### 3.v-on指令基础

- v-on 指令的作用是：为元素绑定事件

- 事件名不需要写on

- 指令可简写为@

- 绑定的方法定义在methods中

- 方法内部通过 this 关键字可以访问定义在 data 中数据

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div id="app">
        <input type="button" value="v-on指令" v-on:click="doIt">
        <input type="button" value="v-on简写" @click="doIt">
        <input type="button" value="双击事件" @dblclick="doIt">
        <h2 @click="changeFood">{{ food }}</h2>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            data: {
                food: "西兰花炒蛋"
            },
            methods: {
                doIt: function () {
                    alert("做It");
                },
                changeFood: function () {
                    this.food += "好好吃！"
                }
            }
        })
    </script>
</body>

</html>
```

##### 计数器实例

- 创建 Vue 示例时：el（挂载点）、data（数据）、methods（方法）
- v-on/@ 绑定事件
- 方法中通过 this ，关键字获取 data 中的数据
- v-text 指令的作用是：设置元素的文本值，简写为{{}}

#### 4.v-show指令

根据表达值的真假，切换元素的显示和隐藏

原理是修改元素的display，实现显示隐藏

指令后面的内容，最终都会解析为布尔值

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div id="app">
        <input type="button" value="切换显示状态" @click="changeIsShow">
        <input type="button" value="累加年龄" @click="addAge">
        <img v-show="isShow" src="img/qingxiatongyou.jpg" alt="">
        <img v-show="age>=18" src="img/qingxiatongyou.jpg" alt="">
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            data: {
                isShow: false,
                age: 17
            },
            methods: {
                changeIsShow: function () {
                    this.isShow = !this.isShow;
                },
                addAge: function () {
                    this.age++;
                }
            },
        })
    </script>
</body>

</html>
```

#### 5.v-if指令

- 根据表达值的真假，切换元素的显示和隐藏（操作dom元素）

```js
  <!DOCTYPE html>
  <html lang="en">
  
  <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Document</title>
  </head>
  
  <body>
      <div id="app">
          <input type="button" value="切换显示" @click="toggleIsShow">
          <p v-if="isShow">一段文本</p>
          <p v-if="isShow">一段文本 - v-Show修饰</p>
          <h2 v-if="temperature>=35">热死了</h2>
      </div>
      <!-- 开发环境版本，包含了有帮助的命令行警告 -->
      <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
      <script>
          var app = new Vue({
              el: "#app",
              data: {
                  isShow: false,
                  temperature: 20
              },
              methods: {
                  toggleIsShow: function () {
                      this.isShow = !this.isShow;
                  }
              },
          })
      </script>
  </body>
  
  </html>
```

  

#### 6.v-bind指令

设置元素的属性（比如：src/title/class）

语法：	v-bind:属性名=表达式

简写：	：属性名

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        .active {
            border: 1px solid red;
        }
    </style>
</head>

<body>
    <div id="app">
        <img v-bind:src="imgSrc" alt="">
        <br>
        <img :src="imgSrc" alt="" :title="imgTitle+'!'" :class="isActive?'active':''" @click="toggleActieve">
        <br>
        <img :src="imgSrc" alt="" :title="imgTitle+'!'" :class="{active:isActive}" @click="toggleActieve">
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            data: {
                imgSrc: "img/wd-zr.png",
                imgTitle: "左然",
                isActive: false
            },
            methods: {
                toggleActieve: function () {
                    this.isActive = !this.isActive;
                }
            }
        })
    </script>
</body>

</html>
```

#### 7.图片切换案例

1.定义图片数组

2.添加图片索引

3.绑定 src 元素

4.图片切换逻辑

5.显示状态切换

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        .center {

            text-align: center;
            display: table-cell;
            vertical-align: middle;
            width: 400px;
            height: 400px;

        }

        .title {
            display: block;
            height: 100px;
            position: absolute;
            top: 60px;
            left: 321px;
        }

        .logo {
            width: 140px;
            background-color: rgb(48, 46, 46);
        }

        .pst {
            position: absolute;
            left: 320px;
            top: 150px;

        }

        .le {
            width: 100px;
            position: absolute;
            left: 290px;
            top: 347px;
        }

        .ri {
            width: 100px;
            position: absolute;
            left: 1132px;
            top: 347px;
        }
    </style>
</head>

<body>
    <div id="mask">
        <div class="center">
            <h2 class="title">
                <img src="img/wd-logo.png" alt="" class="logo" />
                未定事件簿
            </h2>
            <!-- 图片 -->
            <img :src="imgArr[index]" alt="" class="pst">
            <!-- 左箭头 -->
            <a href="javascript:void(0)" @click="prev" v-show="index!=0" class="left">
                <img src="img/back.png" alt="" class="le" />
            </a>
            <!-- 右箭头 -->
            <a href="javascript:void(0)" @click="next" v-show="index<imgArr.length-1" class="right">
                <img src="img/right.png" alt="" class="ri" />
            </a>
        </div>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#mask",
            data: {
                imgArr: [
                    "img/wd1.png",
                    "img/wd-xy.png",
                    "img/wd-zr.png",
                ],
                index: 0
            },
            methods: {
                prev: function () {
                    this.index--;
                },
                next: function () {
                    this.index++;
                }
            },
        })
    </script>
</body>

</html>
```

#### 8.v-for指令

- 根据数据生成列表结构

- 语法是 (item,index) in 数据

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div id="app">
        <input type="button" value="添加数据" @click="add">
        <input type="button" value="移除数据" @click="remove">
        <ul>
            <li v-for="(it,index) in arr">
                {{ index+1 }}一些地区:{{ it }}
            </li>
        </ul>
        <h2 v-for="item in vegetables" v-bind:title="item.name">
            {{ item.name }}
        </h2>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            data: {
                arr: ["北京", "上海", "广州", "深圳"],
                vegetables: [
                    { name: "西兰花炒蛋" },
                    { name: "蛋炒西兰花" }
                ]
            },
            methods: {
                add: function () {
                    this.vegetables.push({ name: "花菜炒蛋" })
                },
                remove: function () {
                    this.vegetables.shift();
                }
            }
        })
    </script>
</body>

</html>
```



#### 9.v-on补充

传递自定义参数，事件修饰符

- 事件绑定的方法写成函数调用的形式，可以传入自定义参数

- 定义方法是需要定义形参来接收传入的实参

- 事件的后面跟上 .修饰符 可以对事件进行限制

- .enter 可以限制触发案件为回车

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div id="app">
        <input type="button" value="点击" @click="doIt(666,'铁汁')">
        <input type="text" @keyup.enter="sayHi">
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            methods: {
                doIt: function (p1, p2) {
                    console.log("做it");
                    console.log(p1);
                    console.log(p2);
                },
                sayHi: function () {
                    alert("你吃了吗")
                }
            }
        })
    </script>
</body>

</html>
```

#### 10.v-modle指令

获取和设置表单元素的值（双向数据绑定）

```js
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div id="app">
        <input type="button" value="修改message" @click="setM">
        <input type="text" v-model="message" @keyup.enter="getM">
        <h2>{{message}}</h2>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el: "#app",
            data: {
                message: "一段文字"
            },
            methods: {
                getM: function () {
                    alert(this.message);
                },
                setM: function () {
                    this.message = "铁汁";
                }
            }
        })
    </script>
</body>

</html>
```

#### 11.记事本案例

1.新增-生成列表结构（v-for数组）-获取用户输入(v-model)-回车，新增数据（v-on .enter 添加数据）

2.删除

3.统计

4.清空

5.隐藏