## C基本算法及程序

#### 目录
<a href="#git01">一、矩阵的操作<br>

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
