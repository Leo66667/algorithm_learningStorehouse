/*       dfs递归函数标准写法模板： 
void dfs(int step){
	if(到达目的地){
		输出解
		返回 
	}
	合理的剪枝操作
	for(inti=1;i<=枚举数;i++){
		if(满足条件){
			更新状态位；
			dfs(step+1);
			恢复状态位； 
		}
	} 
}                                   */
#include<bits/stdc++.h>
using namespace std;
int n,a[10],book[10]={0};
void dfs(int step){
	if(step==n){
		for(int i=0;i<n;i++){
			cout<<setw(5)<<a[i];
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if (book[i]==0){
			a[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
}


int main(){
cin>>n;
dfs(0) ;
return 0;

}
