# 有关对于Git的学习
## 一、Git是什么
Git是目前世界上最先进的分布式版本控制系统
## 二、如何操作
#### 1、创建版本库
假设在D盘work目录下新建一个版本库<br>
`$ cd D:`<br>
`$ cd work`<br>
`$ mkdir summary`<br>
`$ cd summary`<br>
`$ pwd`<br>
pwd 命令是用于显示当前的目录<br>
#### 2、通过命令 git init 把这个目录变成git可以管理的仓库
`$ git init`<br>
#### 3、把文件添加到版本库中
* summary目录下新建记事本文件 readme.txt <br>
`$ touch readme.txt`<br>
* 命令 git add添加到暂存区<br>
`$ git add readme.txt`<br>
* 命令 git commit文件提交到仓库<br>
`git commit -m"readme.txt提交"`<br>
现在我们已经提交了一个readme.txt文件了<br><br>
下面可以通过命令git status来查看是否还有文件未提交<br>
`$ git status`<br>
此时我修改了readme.txt的内容，继续使用git status来查看下结果，命令会告诉我们 readme.txt文件已被修改，但是未被提交的修改
* 查看修改内容<br>
`$ git diff readme.txt`<br>
#### 4、版本回退
* 对文件进行修改后，查看历史记录<br>
`$ git log`<br>
命令显示从最近到最远的显示日志<br>
* 把当前的版本回退到上一个版本<br>
`git reset --hard HEAD^`<br>
## 三、删除文件
`$ git rm readme.txt`<br>
