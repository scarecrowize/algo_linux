void exch(int *x,int *y);
void insertion(int a[],int l,int r);
void exch(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
void insertion(int a[],int l,int r)
{
	int i;
	for(i=r;i>l;i--)if(a[i-1]>a[i])exch(&a[i-1],&a[i]);
	for(i=l+2;i<=r;i++)
	{
		j=i;v=a[i];
		while(a[j-1]<v)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=v;
	}
}
