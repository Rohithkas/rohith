
int allocate_pid(void)                               
{
	int i,j;
    for(i = MIN_PID, j =0; i <= MAX_PID; i++, j++)
    {
        if(pidA[j].bitm == 0)
        {
            pidA[j].p = i;
            pidA[j].bitm = 1;
            return i;
            break;
        }
    }
	
}

