//
//  main.c
//  test
//
//  Created by 20161104590 on 2017/6/12.
//  Copyright © 2017年 20161104590. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
        int a[10];
        int i,j,x;
        printf("输入10个数字:");
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);
        for(i=0;i<9;i++)
            for(j=0;j<9-i;j++)
                if(a[j+1]<a[j])
                {
                    x=a[j];
                    a[j]=a[j+1];
                    a[j+1]=x;
                }
        for(j=0;j<9;j++)
            printf("%d",a[j]);
        return 0;
    }
