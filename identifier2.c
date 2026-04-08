# define DOUBLE(a) a*2
# define TRIPLE(a) a*3
int main()
{
	int a=1;
    printf("\nSINGLE\tDOUBLE\tTRIPLE");
	for(;a<=5;a++)
	printf("\n%d,\t%d,\t%d",a,DOUBLE(a),TRIPLE(a));
	return 0;
}
