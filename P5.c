int main()
{
    int i =0;
    printf("\n\tEnter How Many Number of Threads You Want : ");
    scanf("%d",&sizeoft);
    pthread_t thread[sizeoft];
	printf("\n\t##          Creating %d Threads              ##",sizeoft);
