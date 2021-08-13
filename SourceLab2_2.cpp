#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float num1, num2;
void summation() {
	printf("Summation = %.2f \n", num1 + num2); }
void difference() {
	printf("Difference = %.2f \n", num1 - num2); }
void product() {
	printf("Product = %.2f \n", num1 * num2); }
void quotient() {
	printf("Quotient = %.2f", num1 / num2); }
int main() {
	printf("Enter the number ");
	scanf("%f %f", &num1, &num2);
	summation();
	difference();
	product();
	quotient();
	return 0;
}