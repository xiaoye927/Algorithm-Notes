///////////////////////////////////
/*
任务描述
设整型数组a[0:n-1]是已排好序的数组。
请改写二分搜索算法，使得当搜索元素x不在数组中时，参数返回小于x的最大元素下标i和大于x的最小元素下标j。
当搜索元素x在数组中时，参数i和j相同，均为x在数组中的下标。
示例：
输入：
7
0 2 6 10 12 18 20
12
输出：
4 4

相关知识
编程要求
输入
多组数据，每组数据三行，
第1行为数组的长度n，第2行输入数组的n个元素a[i]，第3行输入待查找元素x。n=0表示输入结束。 
输出
对于每组数据输出一行，该行有2个空格隔开的整数，分别表示小于x的最大元素下标i和大于x的最小元素下标j。当搜索元素x在数组中时，参数i和j相同，均为x在数组中的下标。

*/









include <bits/stdc++.h>
using namespace std;
///////////////////////////////////

//折半查找，使用非递归 
void binSearch(int a[],int n,int x,int &i,int &j){
////////////*begin*////////////
    int left=0,right=n-1;
 
while (left<=right){
   int mid=left+(right-left)/2;
    if(a[mid]==x){
      i=j= mid;
      break;
    }else if(a[mid]>x){
        right=mid-1;
    }else if(a[mid]<x){
        left=mid+1;
    }
}
  i=right,j=left;

/////////////*end*/////////////
}//binSearch

//主函数i
int main(){
	int x;	
	int i,j,n;
				
	cin>>n;//输入元素个数 
	while (n>0)//未结束 
	{
		int a[n];
		for (int k=0;k<n;k++) cin>>a[k];//输入排好序的n个整数
		int x;
		cin>>x;//输入待查找元素 
		binSearch(a,n,x,i,j);//折半查找 
		cout<<i<<" "<<j<<endl;//输出要求的下标 
		
		cin>>n;//输入下一批元素个数
	}
	
	return 0;
}//main
