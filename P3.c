
void release_pid(int rpid)                            
{
	int i;
    for(i = 0; i <= MAX_PID; i++)
    {
        if(pidA[i].p == rpid)
        {
            pidA[i].bitm = 0;
        }
    }
}


