## C基本算法及程序

#### 目录
<a href="#git01">一、矩阵的操作<br>
<a href="#git02">二、排序算法<br>
<a href="#git03">三、字符串操作<br>
<a href="#git04">四、求精度<br>
<a href="#git05">五、链表操作<br>
<a href="#git06">六、倒序算法<br>
<a href="#git07">七、斐波那契数列<br>
<a href="#git08">八、递归<br>

<a name="git01"><br>
### 矩阵的操作
* 判断某整数是否为素数<br>
`int prime(int n)`  //返回值1为素数，否则为0<br>
`{ 	for(int k=2;k<n;k++)`<br>
`		if(n%k==0)return 0;`<br>
`	return 1;`<br>
`}`<br><br>
`void prime1(int n)`  //如果n为素数，进行输出<br>
`{ 	int j,l;`<br>
`	j=sqrt(n);`<br>
`       for(l=2;l<=j;l++)`<br>
`		if(n%l==0)break;`<br>
`	if(l>=j+1) printf(“%d”,n);`<br>
`}`<br><br>
* 求矩阵的转置，求矩阵的最大值及行、列号<br>
`void transpose(double a[M][N])` //求转置。M、N为矩阵的行列<br>
`{	double b[N][M];`  //矩阵b存储a的转置矩阵<br>
`	for(i=0;i<M;i++)`<br>
`		for(j=0;j<N;j++)`<br>
`			b[j][i]=a[i][j];`<br>
`}`<br><br>
`void matrix(double a[M][N])` //求矩阵的最大值及行、列号<br>
`{	double max,row,col;`//max为最大值，row为行，col为列<br>
`      	max=a[0][0];row=col=0;`<br>
`    	for(i=0;i<M;i++)`<br>
`		for(j=0;j<N;j++)`<br>
`			if(a[i][j]>max)`<br>
`				{max=a[i][j];row=i;col=j;}`<br>
`}`<br><br>
* 矩阵求鞍点（什么东西）<br>
`#include <string.h>`<br>
`void find(int x[][5],int y);`<br>
`void main()`<br>
`{`<br>
`	int x[4][5]={{23,145,67,89,12},{31,67,21,70,50},{10,200,30,100,30},{200,300,400,500,600}};`<br>
`    find(x,4);`<br>
`}`<br><br>
`void find(int x[][5],int y)`<br>
`{`<br>
`	int i,j,k,max,m,n,mini,biaozhi=0;`<br>
`	for(i=0;i<y;i++)`<br>
`	{`<br>
`		max=x[i][0];`<br>
`		m=i;`<br>
`		n=0;`<br>
`		for(j=0;j<5;j++)`<br>
`             if(x[i][j]>max)`<br>
`			 {`<br>
`				 max=x[i][j];`<br>
`				 n=j;`<br>
`			 }`<br>
`		mini=m;`<br>
`		for(k=0;k<y;k++)`<br>
`			if(x[k][n]<max)   mini=k;`<br>
`		if(mini==m)`<br>
`		{`<br>
`			printf("%d   %d   %d  \n",max,m,n);`<br>
`			biaozhi=1;`<br>
`		}`<br>
`	}`<br>
`	if(biaozhi==0)    printf("not found\n");`<br>
`}`<br>

<a name="git02"><br>
### 排序算法
* 起泡排序<br>
`void sort1(double a[ ],int n)` //起泡排序. n个元素存储在一维数组a中<br>
`{	double t; `//辅助变量t,用于交换<br>
`	for(int i=0;i<n-1;i++)`<br>
`		for(int j=0;j<n-i-1;j++)`<br>
`			if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}`<br>
`}`<br>
* 选择排序<br>
`void sort2(double a[ ],int n)` //选择排序. n个元素存储在一维数组a中<br>
`{	double t; int k;` //辅助变量k,记各趟排序的最小元素下标<br>
`	for(int i=0;i<n-1;i++)`<br>
`	{  	k=i;`<br>
`		for(int j=i;j<n;j++)`  //可写成for(int j=i+1;j<n;j++) <br>
`			if(a[k]>a[j])k=j;`<br>
`           if(k!=i) {t=a[i];a[i]=a[k];a[k]=t;}`<br>
`	}`<br>
`}`<br>
  
<a name="git03"><br>
### 字符串操作
* 字符串（系统提供的库函数是strcat(),在头文件string.h中）<br>
`void stringcat(char a[ ],char b[ ])`//将b中的字符串拼接到a的后面<br>
`{	int i=0,j=0;`<br>
`	while(a[i]!=‘\0’)i++;` // 思考与while(a[i++]);的区别 <br>
`       while(b[j]!=‘\0’)`<br>
`	{	  a[i]=b[j];`<br>
`		   i++;j++;`<br>
`	}`<br>
`       a[i]=‘\0’;`<br>
`}`<br>
<a name="git04"><br>
### 求精度 
* 求精度-利用已知公式（例：求sin(x)）<br>
已知sinx=x/1-x3/3!+x5/5!- x7/7!+…+(-1)n+1 x(2n-1)/(2n-1)!+…<br>
`double sin(double x, double eps)` // 计算sinx的精度达到eps,如0.001<br>
`{	double term, sum; int n=1;`<br>
`	term=x;sum=0;`<br>
`	while (fabs(term)>=eps)`<br>
`        {	    sum=sum+term;n++;`<br>
`		    term=-1*term*x*x/((2*n-2)*(2*n-1));`<br>
`	}`<br>
`	return sum;`<br>
`}`<br>
<a name="git05"><br>
### 链表操作
* 创建有序链表，无序链表进行排序<br>
`node * addnode( node* head, int x) `//在有序链表head中插入元素x,仍有序<br>
`{	node *p1,*p2, *p=new node;`//生成一个结点p<br>
`	p->data=x; p->next=NULL;`//给结点p赋值<br>
`	if(head==NULL) head=p;`//为空链表<br>
`	else`<br>
`	{		p1=p2=head;`<br>
`       			while(p2 && x>p2->data){p1=p2;p2=p2->next;}`<br>
`			if(p2==head) {p->next=p2;head=p;}`<br>
`			else {p->next=p2;p1->next=p;}`<br>
`	}`<br>
`      return    head;`<br>
<a name="git06"><br>
### 倒叙算法
* 倒序算法(倒序一个整数数组)<br>
`void reverse(char a[ ],int n) `//对一维数组n个元素进行倒序<br>
`{	char t; int i;`<br>
`	for( i=0;i<n/2;i++)`<br>
`	{	   t=a[i];`<br>
`		   a[i]=a[n-i-1];`<br>
`		   a[n-i-1]=t;`<br>
`	}`<br>
`}`<br>

<a name="git07"><br>
### 斐波那契数列<br>
* 使用单变量<br>
`void fib(int n)` //使用单变量求前n项<br>
`{	long f1=1,f2=1,f3;`<br>
`     printf(“%d%d”,f1,f2);`<br>
`	for(int i=3;i<=n;i++)`<br>
`	{	   f3=f1+f2;`<br>
`           printf(“%d”,f3);`<br>
`           f1=f2;f2=f3;`<br>
`	}`<br>
`}`<br>
* 使用数组<br>
`#define N  40// N>=n`<br>
`void fib(int n) `//使用数组，求前n项<br>
`{	long f[N]={1,1};`<br>
`	for(int i=2;i<N;i++)`<br>
`		   f[i]=f[i-2]+f[i-1];`<br>
`      for(i=0;i<N;i++)`<br>
`	      printf(“%d”,f[i]);`<br>
`}`<br>
* 使用递归函数<br>
`long fib(int n) `//使用递归函数，求第n项<br>
`{	if(n==1 || n==2) return 1;`<br>
`	else  return f(n-2)+f(n-1);	`<br>
`}`<br>

<a name="git08"><br>
### 递归<br>
* 直接递归<br>
`void rec1(char c)`<br>
`{ printf(“%c”,c);`<br>
`  if (c==‘0’)  return;`<br>
`  rec1(c-1);    `<br>
` }`<br>
`void main()`<br>
`{  char c=‘3’;`<br>
`    rec1(c);`<br>
`}`<br>
`void rec2(char c)`<br>
`{` <br>
`  if (c==‘0’)  return;`<br>
`  rec2(c-1); `<br>
`  printf(“%c”,c);`<br>
` }`<br>
`void main()`<br>
`{  char c=‘3’;`<br>
`    rec2(c);`<br>
`}`<br>
