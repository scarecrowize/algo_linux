int partition(int a[],int l,int r);
void quicksort(int a[],int l,int r);
void exch(int *x,int *y);
void quicksort(int a[],int l,int r)
{
	int i;
	if(l>=r)return;
	i=partition(a,l,r);
	quicksort(a,l,i-1);
	quicksort(a,i+1,r);
}
int paritition(int a[],int l,int r)
{
	int i=l-1;int j=r,v=a[r];
	for(;;)
	{
		while(a[++i]<v);
		while(a[--j]>v)if(j==1)break;
		if(i>=j)break;
		exch(&a[i],&a[j]);
	}
	exch(&a[i],&a[r]);
	return i;
}
void exch(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
