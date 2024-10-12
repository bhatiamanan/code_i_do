//{ Driver Code Starts
// Initial Template for C

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// } Driver Code Ends
// User function Template for C

int pairsum(int arr[], int n) {
    // Code Here
    int largest = 0;
    int slargest = 0;
        
    for(int i=0; i<n; i++){
        if(arr[i] > largest ){
            slargest = largest ;
            largest = arr[i];
        }else if(arr[i]>slargest && arr[i] < largest){
            slargest = arr[i];
        }
    }
    return largest + slargest;
}



//{ Driver Code Starts.

int main() {
    char ts[1001]; // Buffer to store the input for the number of test cases (shouldn't
                   // exceed 100 characters)
    fgets(ts, sizeof(ts),
          stdin);     // Read a line from standard input and store it in 'ts'
    int t = atoi(ts); // Convert the string 'ts' to an integer (number of test cases)

    // Loop over each test case
    while (t--) { // Decrease t by 1 each iteration and continue until t becomes 0

        char *line = NULL; // Pointer to store the input line (dynamically allocated)
        size_t len = 0;    // Size of the allocated buffer, used by getline function
        long read = getline(&line, &len, stdin); // Read a line from standard input into
                                                 // the dynamically allocated buffer

        int *nums = (int *)malloc(
            1000000 *
            sizeof(int)); // Dynamically allocate memory for up to 1e6 integers
        int n = 0; // Variable to count the number of integers in the current test case
        char *token =
            strtok(line, " "); // Tokenize the input line using space as a delimiter
        while (token != NULL) {
            // Print the current token (string) for debugging purposes
            // printf("Token: %s\n", token);

            // Convert each token to an integer and store it in the nums array
            nums[n++] = atoi(token);
            token = strtok(NULL, " "); // Get the next token
        }
        int brr[n];
        for (int i = 0; i < n; i++) {
            brr[i] = nums[i];
        }
        // Check if the array is sorted using the previously defined function
        int ans = pairsum(brr, n);
        // Output 'true' if the array is sorted, 'false' otherwise
        printf("%d\n", ans);

        free(nums); // Free dynamically allocated memory for the nums array
        free(line); // Free dynamically allocated memory for the input line
    }

    return 0; // Return 0 to indicate successful execution
}
// } Driver Code Ends