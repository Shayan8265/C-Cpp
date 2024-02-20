/*
CH-230-A
a8_p6.[c]
Shayan Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *outfile;
    char file1[20], file2[20];
    double n1, n2;
    double sum, diff, product, division;
    // reading the name of the 1st file
    printf("Enter name of 1st file: ");
    scanf("%s", file1);
    fflush(stdin);
    // reading the name of the 2nd file
    printf("Enter name of 2nd file: ");
    scanf("%s", file2);
    // opening two files
    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");
    // reading the vlaues of the file
    fscanf(fp1, "%lf", &n1);
    // reading the vlaues of the file
    fscanf(fp2, "%lf", &n2);
    // Closing the files after reading
    fclose(fp1);
    fclose(fp2);
    // finding sum
    sum = n1 + n2;
    // finding difference
    diff = n1 - n2;
    // finding product
    product = n1 * n2;
    // finding division
    division = n1 / n2;
    // printing numbers from the file
    printf("\nNumbers scanned from input files are %lf and %lf\n\n", n1, n2);
    printf("Sum of %lf and %lf is %lf\n", n1, n2, sum);
    printf("Difference between %lf and %lf is %lf\n", n1, n2, diff);
    printf("Product of %lf and %lf is %lf\n", n1, n2, product);
    printf("Division of %lf by %lf is %lf\n", n1, n2, division);
    // Opening results.txt file in write mode
    outfile = fopen("results.txt", "w");
    // Writing output to a file named results.txt
    fprintf(outfile, "Sum of %lf and %lf is %lf\n", n1, n2, sum);
    fprintf(outfile, "Difference between %lf and %lf is %lf\n", n1, n2, diff);
    fprintf(outfile, "Product of %lf and %lf is %lf\n", n1, n2, product);
    fprintf(outfile, "Division of %lf by %lf is %lf\n", n1, n2, division);
    // Closing the file
    fclose(outfile);
    printf("Results written to results.txt successfully");
    return 0;
}
// completely solved.