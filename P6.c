for(i = 0; i < sizeoft; i++)
    {
        pthread_mutex_init(&m, NULL);
        pthread_create(&thread[i], NULL, Multi_Thread, NULL);
        Multi_Thread(NULL);
    }

    for(i = 0; i < sizeoft; i++)
    {
        pthread_join(thread[i], NULL);
        pthread_mutex_destroy(&m);
    }
    return 0;
}
