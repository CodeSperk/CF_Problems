int n, m;
    scanf("%d %d", &n, &m);
    if(n <=0 || m <= 0){
        return 0;
    }

    int greaterNum = n > m ? n : m;
    int smallerNum = n < m ? n : m;

    int sum  = 0; 
    for(int i = smallerNum; i <= greaterNum; i++){
        printf("%d ", i);
        sum = sum + i;
    }
    printf("sum =%d", sum);