//
//  main.c
//  ChujieExamination
//
//  Created by HiLau on 2023/6/26.
//

#include <stdio.h>
#include <string.h>
//一、求两个正整数的最小公倍数
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d",&a,&b);
//    int i = 1;
//    while(1)
//    {
//        if(a*i%b == 0)
//        {
//            printf("%d\n",a*i);
//            break;
//        }
//        i++;
//    }
//    return 0;
//}

//二、i like beijing. 输出 beijing. like i
void reverse(char* left,char* right)
{
    while(left < right)
    {
        char tmp = 0;
        tmp = *left;
        *left = *right;
        *right = tmp;
        
        left++;
        right--;
    }
}
int main()
{
    char arr[100] = {0};
    fgets(arr, 100, stdin);
    int len = strlen(arr);
    reverse(arr,arr+len-1);
    
    char* start = arr;
    while(*start)
    {
        char* end = start;
        while(*end != ' ' && *end !='\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if(*end == ' ')
            start = end +1;
        else
            start = end;
        
    }
    printf("%s",arr);
    printf("\n");
    return 0;
}
