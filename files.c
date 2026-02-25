#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {

    FILE *inFile, *outFile;
    int arr[100], n = 0;

    inFile = fopen("input.txt", "r");
    if(inFile == NULL) {
        printf("Error opening input file\n");
        return 1;
    }
    while(fscanf(inFile, "%d", &arr[n]) != EOF) {
        n++;
    }

    fclose(inFile);
    qsort(arr, n, sizeof(int), compare);
    outFile = fopen("output.txt", "w");
    if(outFile == NULL) {
        printf("Error opening output file\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        fprintf(outFile, "%d ", arr[i]);
    }

    fclose(outFile);

    printf("Sorting complete. Check output.txt\n");

    return 0;
}