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
    FILE *fi;
    FILE *fo;
    fi=fopen("//Users//a20161104590//Desktop//test//input","r");
    fo=fopen("//Users//a20161104590//Desktop//test//output","w");
    int a[10];
    int i,j,x;
    for(i=0;i<10;i++)
    {
        fscanf(fi,"%d",&a[i]);
    }
        for(i=0;i<9;i++)
        {
            for(j=0;j<9-i;j++)
            {
                if(a[j+1]<a[j])
                {
                  x=a[j];
                  a[j]=a[j+1];
                  a[j+1]=x;
                }
            }
        }
    for(j=0;j<9;j++)
    {
        printf(" %d",a[j]);
        fprintf(fo," %d",a[j]);
    }
    return 0;
    }
