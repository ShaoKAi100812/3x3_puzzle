#include <stdio.h>

int main(){
	char arr1[3][4];
	char space;
	char arr2[3][4];
	int count1=0, count2=0;
	int pos1[4], pos2[4];
	int type1=0, type2=0;
	int i,j;
	//input
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%c",&arr1[i][j]);
			//printf("arr1=%c\n",arr1[i][j]);
		}
	}
	scanf("%c",&space);
	//printf("space=%c\n",space);
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%c",&arr2[i][j]);
			//printf("arr2=%c\n",arr2[i][j]);
		}
	}
	//compare which array has less '*'
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(arr1[i][j]=='*') count1++;
			if(arr2[i][j]=='*') count2++;
		}
	}
	if(count1+count2!=9){
		printf("NO\n");
		return 0;
	}
	if(count1<count2){
		count1=0;
		count2=0;
		//record '*' and '.' positions
		for(i=0;i<3;i++){
			for(j=0;j<4;j++){
				if(arr1[i][j]=='*'){
					pos1[count1]=i*4+j;
					//printf("arr1=%d\n",i*4+j);
					count1++;
				}
				if(arr2[i][j]=='.'){
					pos2[count2]=i*4+j;
					//printf("arr2=%d\n",i*4+j);
					count2++;
				}
			}
		}
		//'*' num judgement
		if(count1==0){
			printf("YES\n");
		}
		else if(count1==1){
			printf("YES\n");
		}
		else if(count1==2){
			printf("YES\n");
		}
		else if(count1==3){
			//arr1 '*' shape type judgement
			if(pos1[1]-pos1[0]==1&&pos1[2]-pos1[1]==1) type1=1;
			else if(pos1[1]-pos1[0]==4&&pos1[2]-pos1[1]==4) type1=1;
			else type1=2;
			//arr2 '.' shape type judgement
			if(pos2[0]+1==pos2[1]&&pos2[1]+1==pos2[2]) type2=1;
			else if(pos2[0]+4==pos2[1]&&pos2[1]+4==pos2[2]) type2=1;
			else type2=2;
			//correction judgement
			if(type1==type2) printf("YES\n");
			else if(type1!=type2) printf("NO\n");
		}
		else if(count1==4){
			//arr1 '*' shape type judgement
			if(pos1[0]!=5&&pos1[1]!=5&&pos1[2]!=5&&pos1[3]!=5){
				if(pos1[3]-pos1[0]==4||pos1[3]-pos1[0]==9) type1=3;
				else type1=6;
			}
			else if(pos1[2]-pos1[0]==4&&pos1[3]-pos1[1]==4) type1=4;
			else type1=5;
			//arr2 '.' shape type judgement
			if(pos2[0]!=5&&pos2[1]!=5&&pos2[2]!=5&&pos2[3]!=5){
				if(pos2[3]-pos2[0]==4||pos2[3]-pos2[0]==9) type2=3;
				else type2=6;
			}
			else if(pos2[2]-pos2[0]==4&&pos2[3]-pos2[1]==4) type2=4;
			else type2=5;
			//correction judgement
			if(type1==type2) printf("YES\n");
			else if(type1!=type2) printf("NO\n");
			//printf("%d %d\n",type1,type2);
		}
	}
	else if(count1>count2){
		count1=0;
		count2=0;
		//record '*' and '.' positions
		for(i=0;i<3;i++){
			for(j=0;j<4;j++){
				if(arr1[i][j]=='.'){
					pos1[count1]=i*4+j;
					count1++;
				}
				if(arr2[i][j]=='*'){
					pos2[count2]=i*4+j;
					count2++;
				}
			}
		}
		//'*' num judgement
		if(count1==0){
			printf("YES\n");
		}
		else if(count1==1){
			printf("YES\n");
		}
		else if(count1==2){
			printf("YES\n");
		}
		else if(count1==3){
			//arr1 '*' shape type judgement
			if(pos1[1]-pos1[0]==1&&pos1[2]-pos1[1]==1) type1=1;
			else if(pos1[1]-pos1[0]==4&&pos1[2]-pos1[1]==4) type1=1;
			else type1=2;
			//arr2 '.' shape type judgement
			if(pos2[0]+1==pos2[1]&&pos2[1]+1==pos2[2]) type2=1;
			else if(pos2[0]+4==pos2[1]&&pos2[1]+4==pos2[2]) type2=1;
			else type2=2;
			//correction judgement
			if(type1==type2) printf("YES\n");
			else if(type1!=type2) printf("NO\n");
		}
		else if(count1==4){
			//arr1 '*' shape type judgement
			if(pos1[0]!=5&&pos1[1]!=5&&pos1[2]!=5&&pos1[3]!=5){
				if(pos1[3]-pos1[0]==4||pos1[3]-pos1[0]==9) type1=3;
				else type1=6;
			}
			else if(pos1[2]-pos1[0]==4&&pos1[3]-pos1[1]==4) type1=4;
			else type1=5;
			//arr2 '.' shape type judgement
			if(pos2[0]!=5&&pos2[1]!=5&&pos2[2]!=5&&pos2[3]!=5){
				if(pos2[3]-pos2[0]==4||pos2[3]-pos2[0]==9) type2=3;
				else type2=6;
			}
			else if(pos2[2]-pos2[0]==4&&pos2[3]-pos2[1]==4) type2=4;
			else type2=5;
			//correction judgement
			if(type1==type2) printf("YES\n");
			else if(type1!=type2) printf("NO\n");
		}
	}
	return 0;
}
