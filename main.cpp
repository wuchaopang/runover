//
//  main.cpp
//  runover
//
//  Created by 20141105049 on 15/12/9.
//  Copyright © 2015年 20141105049. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a[3]={1,2,3};
    int b[4];
    int *p;
    p=a;
    int i;
    for(i=0;i<100;i++)
    {
        b[i]=i;
    }
    printf("%d  %d  %d\n",a[0],a[1],a[2],a[3]);
    printf("%d  %d  %d\n",&a[0],&a[1],&a[2],&a[3]);
    printf("%d %d %d %d %d %d\n",p,&b[0],&b[1],&b[2],&b[3],b);
    return 0;
}
