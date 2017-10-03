#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

#define LEFT 0
#define RIGHT 1
#define MAXN 1000002

struct node_seg
{
	int left_p;
	int right_p;
	int count_p;
	bool out_of_bound;
	node_seg():left_p(0),right_p(0),count_p(0),out_of_bound(false){}
	node_seg(bool out):left_p(0),right_p(0),count_p(0),out_of_bound(out){}
};
 
node_seg seg_tree[4*MAXN];
int input[MAXN];

void build(int node,int begin,int end){
	if(begin==end){
		if(input[begin]==RIGHT){
			seg_tree[node].right_p=1;
		}else{
			seg_tree[node].left_p=1;
		}
		return;
	}

	int mid= (begin + end)/2;

	build(node*2+1, begin,mid);
	build(node*2+2, mid+1,end);
	seg_tree[node].left_p=seg_tree[node*2+1].left_p +seg_tree[node*2+2].left_p;
	seg_tree[node].right_p=seg_tree[node*2+1].right_p +seg_tree[node*2+2].right_p;

	int join=0;
	int left_left=seg_tree[node*2+1].left_p;
	int right_right=seg_tree[node*2+2].right_p;
	if( left_left> 0){
		if(right_right > 0){
			int aux = min(left_left,right_right);
			seg_tree[node].left_p-=aux;
			seg_tree[node].right_p-=aux;
			join+=aux;
		}
	}

	seg_tree[node].count_p = 2*join+seg_tree[node*2+1].count_p + seg_tree[node*2+2].count_p;
}

node_seg query(int node,int begin,int end,int i,int j){
	node_seg resp;
	//printf(">> %d %d %d %d\n", begin, end, i,j);
	if(j< begin || i > end){
		return resp;
	}

	if(begin >= i && end <= j){

		//printf("ed %d %d \n", begin,end);
		return seg_tree[node];
	}

	int mid= (begin + end)/2;

	node_seg n_left = query(node*2+1, begin,mid,i,j);
	node_seg n_right = query(node*2+2, mid+1,end,i,j);

	resp.left_p = n_left.left_p   +  n_right.left_p;
	resp.right_p= n_left.right_p  +  n_right.right_p;

	int join=0;
	int left_left=n_left.left_p;
	int right_right=n_right.right_p;
	if( left_left> 0){
		if(right_right > 0){
			int aux = min(left_left,right_right);
			resp.left_p-=aux;
			resp.right_p-=aux;
			join+=aux;
		}
	}

	resp.count_p= 2*join + n_left.count_p +n_right.count_p;

	return resp;


}

int main(){
	string p;
	while(cin >> p){
		int n = p.length(),q;
		for(int i=0;i<n;i++){
			if(p[i]=='('){
				input[i]=LEFT;

			}else{
				input[i]=RIGHT;				
			}
		}
		scanf("%d",&q);
		build(0,0,n-1);
		for (int i = 0; i < q; i++)
		{
			int begin,end;
			scanf("%d %d",&begin,&end);
			printf("%d\n",query(0,0,n-1,--begin,--end).count_p );
		}


	}




	return 0;
}
