    #include<stdio.h>
    int linearSearch(int [],int, int, int);

    int main() {
        int arr[20], n, i, key;
        printf("Enter the size of an array: ");
        scanf("%d", &n);

        for(i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Enter the key value: ");
        scanf("%d", &key);
        
        int index = linearSearch(arr, key, n, 0);
        
        if(index == -1) {
            printf("key not found!!");
        } else {
            printf("Index of key: %d", index);
        }
        return 0;
    }

    int linearSearch(int arr[20], int key, int n, int i) {
            if(i >= n) {
                return -1;
            }   
            if(arr[i] == key) {
                return i;
            }
            else {
                return linearSearch(arr, key, n, i+1);
            }
    }