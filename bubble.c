void bubble(int a[],int l,int r);
void exch(int *x,int *y);
void bubble(int a[],int l,int r)
{
	int i,j;
	for(i=l;i<r;i++)
		for(j=r;j>i;j--)
		{
			if(a[j-1]>a[j])
			exch(&a[j-1],&a[j]);
		}
}
