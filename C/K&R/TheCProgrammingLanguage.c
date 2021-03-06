// #include <stdio.h>

// int main()
// {
// 	int fahr, celsius;
// 	int lower, upper, step;
// 	lower = 0;
// 	upper = 3000;
// 	step = 20;
// 	fahr = lower;
// 	while(fahr<=upper){
// 		celsius = 5 * (fahr-32) / 9;
// 		printf("%d\t%d\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }


// #include <stdio.h>

// int main()
// {
// 	float fahr, celsius;
// 	int lower, upper, step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
// 	fahr = lower;
// 	while(fahr<=upper){
// 		celsius = 5.0 / 9.0 * (fahr - 32);
// 		printf("%3.2f\t%3.2f\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }


// #include <stdio.h>
// int main()
// {
// 	int fahr;
// 	for(fahr = 0; fahr<=300; fahr = fahr + 20){
// 		printf("%3d\t%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32));
// 	}
// }

// #include <stdio.h>

// #define LOWER 0
// #define UPPER 300
// #define STEP 20

// int main(){
// 	int fahr;
// 	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
// 		printf("%3d\t%6.3f\n", fahr, (5.0/9.0)*(fahr-32));
// 	}
// }

// #include <stdio.h>

// int main()
// {
// 	int c;
// 	c = getchar();
// 	while(c != EOF)
// 	{
// 		putchar(c);
// 		c = getchar();
// 	}
// }

// example 1-6
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", (getchar()!=EOF));
// }


// example 1-7
// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", EOF);
// }

// count
// #include <stdio.h>
// int main()
// {
// 	int nl, c;
// 	nl = 0;

// 	while((c = getchar()) != EOF)
// 	{
// 		printf("%c", c);
// 		if(c == '\n')
// 		{
// 			++nl;
// 		}
// 	printf("%d\n", nl);		
// 	}

// }

//example 1-8
// #include <stdio.h>

// int main()
// {
// 	int nextLineCount = 0;
// 	int tabCount = 0;
// 	int spaceCount=0;
// 	int c;

// 	while((c=getchar()) != EOF){
// 		if(c == '\n')
// 			++nextLineCount;
// 		if(c == '\t')
// 			++tabCount;
// 		if(c == ' ')
// 			++spaceCount;
// 		putchar(c);
// 	printf("Next line count is: %d\n Tab count is: %d\n Space count is:%d\n", nextLineCount, tabCount, spaceCount);
// 	}
// }

//word count
// #include <stdio.h>
// #define IN 1
// #define OUT 0

// int main(){
// 	int c, nl, nw, nc, state;
	
// 	state = OUT;
// 	nl = nw = nc = 0;
// 	while( (c = getchar()) != EOF)
// 	{
// 		++nc;
// 		if(c == '\n')
// 			++nl;
// 		if(c == ' ' || c == '\n' || c=='\t')
// 			state = OUT;
// 		else if(state == OUT){
// 			state = IN;
// 			++nw;
// 		}
// 	// printf("%d", nw);
// 	}
// 	printf("%d", nw);
// }


//example 1-13编写一个程序，打印输入单词长度的直方图，水平方向的直方图表容易，处置方向的直方图困难些
// #include <stdio.h>
// int main()
// {
// 	int c, i, x, nwhite, nother;
// 	int ndigit[10];

// 	nwhite = nother = 0;
// 	for(i=0;i<10;i++){
// 		ndigit[i]=0;
// 	}
// 	while((c=getchar()) != EOF){
// 		if(c >= '0' && c <= '9')
// 			++ndigit[c-'0'];
// 		else if(c==' ' || c== '\t' || c== '\n')
// 			++nwhite;
// 		else
// 			++nother;
	
// 	printf("Digits = \n");
// 	for(i = 0; i< 10 ;++i){
// 		printf(" [%d] ", i);
// 		for (x=0 ; x<=ndigit[i]; x++){
// 			if(x==ndigit[i]){
// 				printf("|%d\n",ndigit[i]);

// 			}else{
// 				printf ("-");
// 			}
// 		}
// 	}
// 	printf("whitespace = %d; otherword = %d\n", nwhite, nother);	
// 	}
// }

// #include <stdio.h>

// int power(int m, int n);

// int main()
// {
// 	int i;
// 	printf("-------------------------------\n");
// 	for(i=0;i<10;++i)
// 	{
// 		printf("||%1d | %10d | %10d ||\n", i, power(2,i), power(3,i));
// 		printf("-------------------------------\n");
// 	}
// }

// int power(int base, int n)
// {
// 	int i, p;
// 	p = 1;
// 	for(i = 1;i<=n;++i){
// 		p = p * base;
// 	}
// 	return p;
// }

// #include <stdio.h>
// int binsearch(int x, int v[], int n);

// int main()
// {
// 	int arr[] = { 1, 2, 3, 20000,23454};

// 	printf("%d\n",binsearch(23454, arr, 5));

// }

// int binsearch(int x, int v[], int n){
// 	int low, high, mid;
// 	low = 0;
// 	high = n - 1;
// 	while(low<=high){
// 		mid = (low + high) / 2;
// 		if(x < v[mid])
// 			high = mid -1;
// 		else if (x>v[mid])
// 			low = mid + 1;
// 		else
// 			return mid;
// 	}
// 	return -1;
// }

// void shellsort(int v[], int n)
// {
// 	int gap, i, j, temp;
// 	for(gap = n/2; gap>0;gap/=2)
// 	{
// 		for(i = gap; i < n; i++){
// 			for(j = i - gap; j >= 0 && v[j] > v[j+gap]; j=j-gap){
// 				temp = v[j];
// 				v[j] = v[j+gap];
// 				v[j+gap] = temp;
// 			}
// 		}
// 	}
// }


// #include <stdio.h>
// int main()
// {
// 	int x = 1;
// 	int y = 2;
// 	int z[10];
// 	int *ip;
// 	ip = &x;
// 	printf("%d\n",ip);
// 	printf("%d\n",&x);
// 	printf("%d\n",&y);	
// 	printf("%d\n",&z);		
	
// }


// #include <stdio.h>
// int main()
// {
// 	int z[10] = {10,11,12,13,14,15,16,17,18,19};
// 	int *pa;
// 	pa = &z[0];
// 	printf("%d",*pa);
// 	pa++;
// 	printf("%d",*pa);
// }

// #include <stdio.h>
// #define MAXLINE 1000

// int getlinee(char line[], int maxline);
// void copy(char to[], char from[]);

// int main(){
//     int len;
//     int max;
//     char line[MAXLINE];
//     char longest[MAXLINE];

//     max = 0;
//     while((len = getlinee(line, MAXLINE))>0)
//     {
//         if(len > max){
//             max = len;
//             copy(longest, line);
//         }
//         if(max > 0){
//             printf("%s", longest);
//         }
//         return 0;
//     }
// }

// int getlinee(char s[], int lim)
// {
//     int c, i;
//     for (i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
//     {
//         s[i]= c;
//     }
//     if(c=='\n'){
//         s[i]=c;
//         ++i;
//     }
//     return i;
// }

// void copy(char to[], char from[])
// {
//     int i;
//     while((to[i]=from[i])!='\0')
//     {
//         ++i;
//     }
// }


// #include <string.h>
// #include <stdio.h>

// void reverse(char s[]);

// int main(){
//     char name[] = {'w','a','n','g','d','e','j'};
//     reverse(name);
//     for(int i=0;i<strlen(name);i++){
//         printf("%c", name[i]);
//     }
// }

// void reverse(char s[]){
//     int c, i, j;
//     for(i =0, j=strlen(s)-1; i<j; i++, j--)
//     {   
//         c = s[i];
//         s[i] = s[j];
//         s[j] = c;
//     }
// };


#include <stdio.h>
#include <string.h>

void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);
int main()
{
    int i = 0;
    int numbers[] = {1,2,3,4,5,12,644,5,3,34,4,34,44556,21,122,334,'w', 'd'};
    qsort(numbers, 0, 16);
    for(i =0;i<16;i++){
        printf("%d, ", numbers[i]);
    }
    return 0;
}


void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if(left >= right)
    {
        return;
    }
    swap(v, left, (left+right)/2);
    last = left;
    for(i=left+1; i<=right; i++)
    {
        if(v[i]<v[left])
        {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last); /* 恢复划分子集的元素*/
    qsort(v, left, last -1);
    qsort(v, last+1, right);
}

void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

