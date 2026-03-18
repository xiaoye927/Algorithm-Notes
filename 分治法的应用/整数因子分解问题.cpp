///////////////////////////////////
//任务描述
大于0的正整数n可以分解为：n=x1x2…*xm。例如，当n=12时，共有8种不同的分解式。
对于给定的正整数n，计算n共有多少种不同的分解式。

相关知识
为了完成本关任务，你需要掌握：1、分治法的基本思想，解题步骤；2、基本的编程技术。

编程要求
输入
多组数据，每组数据有一行，输入待分解的正整数n。当n=0时输入结束。
输出
//对于每组数据分别输出一行，该行对应n的分解式的种数。
#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////
int cnt = 0 ;	//计数器，方案数 
stack<int> s;	//栈，用于保存因子 
///////////////////////////////////
//递归函数，实现分治 
void factorization(int n){	
////////////*begin*////////////
if(n==1){
    cnt++;
    
}
int i=2;
while(i<=n){
    if(n%i==0){
        s.push(i);
        factorization(n/i);
        s.pop();
    }
    i++;
}

/////////////*end*/////////////
}//factorization
 
int main(){
	int n ;
 
	cin>>n;
	
	while (n>0)
	{
		factorization(n);
		cout<<cnt<<endl;
		cnt=0;
		cin>>n;
	}
 
	return 0 ;
}//main
