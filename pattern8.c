void main(){
	int n,i,j,k=1;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(k%2==0){
				printf(" 0");
			}else{
				printf("1");
			}
			k++;
		}
		printf("\n");
	}
}
