/*/////////////////////////////////
汉诺塔问题：
经典的双递归问题。所谓递归，简言之：传递、归零。
也就是所有的递归问题，包括两个要素 ：
传递（递归方程/递归条件）、归零（递归出口/基线条件）
最简单的问题：求n个元素的和sum。
很自然的想：
如果n=1，sum即为该元素的值；（出口）
如果n>1，sum为第1个元素+剩余n-1个元素的和。（递归方程）
用递归解决不困难吧！

汉诺塔问题，同学们看看运行结果里面的执行过程，非常完美的给出了搬运过程 
/////////////////////////////////*/
#include<bits/stdc++.h>
using namespace std;
///////////////////////////////////
int cnt;	//记录圆盘移动次数 
void move(char a,int n,char b){
	cout<<n<<": "<<a<<"-->"<<b<<endl;
	cnt++;
}//move

void hanoi(int n,char x,char y,char z){
////////////*begin*////////////
  if(n==1){
      move(x,1,z);
      return;
  }
    hanoi(n-1,x,z,y);
    move(x,n,z);
    hanoi(n-1,y,x,z);
    

/////////////*end*/////////////
}//hanoi

int main(){
	int n;
	cin>>n;
	while (n>0)
	{
		cnt=0;
		hanoi(n,'A','B','C');
		cout<<cnt<<endl;
		cin>>n;
	}
	return 0;
}//main
