
void * Multi_Thread(void * v)                     
{
    int rpid = allocate_pid();       
	while (thnu < sizeoft)
    {
        pthread_mutex_lock(&m);     
        if (thnu >= sizeoft)
        {
            pthread_mutex_unlock(&m);
            break;
        }
        thnu++;                   
        printf("\n\t##   Thread %d    ##   Succesfully Created   ##",thnu);
        pthread_mutex_unlock(&m);     
    }
    release_pid(rpid);          
    
}

