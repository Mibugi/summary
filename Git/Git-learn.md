# 有关对于Git的学习
---
##### 目录
<a href="#git01">一、Git是什么<br>
<a href="#git02">二、创建操作<br>
<a href="#git03">三、删除文件<br>
<a href="#git04">四、检出仓库<br>
<a href="#git05">五、推送<br>
<a href="#git06">六、分支<br>
<a href="#git07">七、更新、合并<br>
 ---
 
<a name="git01"><br>
## 一、Git是什么
Git是目前世界上最先进的分布式版本控制系统<br>
  
<a name="git02"><br>
## 二、创建操作
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
  
<a name="git03"><br>
## 三、删除文件
`$ git rm readme.txt`<br>
 
<a name="git04"><br>
## 四、检出仓库
（从此开始我要换一个方式表达，打得太累了）<br>
* 创建一个本地仓库的克隆版本<br>
`git clone /path/to/repository`<br>
* 如果是远端服务器上的仓库,命令会是这个样子<br>
`git clone username@host:/path/to/repository`<br>
  
<a name="git05"><br>
## 五、推送
* 提交到远端仓库<br>
`git push origin master`<br>
可以把 master 换成想要推送的任何分支<br>
* 如果没有克隆现有仓库，并欲将库连接到某个远程服务器<br>
`git remote add origin <server>`<br>
  
<a name="git06"><br>
## 六、分支
* 创建一个叫做“feature_x”的分支，并切换<br>
`git checkout -b feature_x`<br>
* 切换回主分支<br>
`git checkout master`<br>
* 再把新建的分支删掉<br>
`git branch -d feature_x`<br>
  
<a name="git07"><br>
## 七、更新、合并
* 更新本地仓库至最新改动<br>
`git pull`<br>
* 以在工作目录中 获取（fetch） 并 合并（merge） 远端的改动。要合并其他分支到当前分支（例如 master）<br>
`git merge <branch>`<br>
* 标记为合并成功<br>
`git add <filename>`<br>
* 在合并改动之前查看<br>
`git diff <source_branch> <target_branch>`<br>
