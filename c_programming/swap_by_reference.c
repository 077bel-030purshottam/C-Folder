// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
// using namespace std;
void swap_num(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("the value of a  is %d and the value of the b is %d \n",a,b);
}
int main()
{
	int a, b;
	printf("Enter the value of the ab and b \n");
    scanf("%d%d",&a,&b);

	swap_num(a, b);

}

