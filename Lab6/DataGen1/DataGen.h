#ifndef DataGen_h
#define DataGen_h

#include "RandomSupport.h"

void insertion_sort(long list[], long size){
    long n = size;
    for (long i = 1; i < n; i++) {
        long j = i;
        while (j > 0 && list[j-1] > list[j]){
            long temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j = j - 1;
        }
    }
}

void Merge(long t[], long low, long high, long mid){
    long i, j, k, temp[high-low+1];
    i = low; k = 0; j = mid + 1;
 
    while (i <= mid && j <= high){
        if (t[i] < t[j]){
            temp[k] = t[i];
            k++;
            i++;
        }
        else{
            temp[k] = t[j];
            k++;
            j++;
        }
    }
 
    while (i <= mid){
        temp[k] = t[i];
        k++;
        i++;
    }
 
    while (j <= high){
        temp[k] = t[j];
        k++;
        j++;
    }

    for (i = low; i <= high; i++){
        t[i] = temp[i-low];
    }
}

void merge_sort(long list[], long low, long high){
    long mid;
    if (low < high){
        mid=(low+high)/2;
        
        merge_sort(list, low, mid);
        merge_sort(list, mid+1, high);
 
        Merge(list, low, high, mid);
    }
}

void counting_sort(long arr[], long sz) {
    int i, j, k;
    int idx = 0;
    int min, max;
 
    min = max = arr[0];
    for(i = 1; i < sz; i++) {
        min = (arr[i] < min) ? arr[i] : min;
        max = (arr[i] > max) ? arr[i] : max;
    }
 
    k = max - min + 1;
    /* creates k buckets */
    long *B = new long [k]; 

    for(i = 0; i < k; i++){
        B[i] = 0;
    }

    for(i = 0; i < sz; i++){
        B[arr[i] - min]++;
    }
    for(i = min; i <= max; i++) {
        for(j = 0; j < B[i - min]; j++){
            arr[idx++] = i;
        }
    }
 

    delete [] B;
}

void efficientRandomSortedList(long temp[], long s){
    // Get a new random device
    randomizer device = new_randomizer();
    // Get a uniform distribution from 1 to 1000
    uniform_distribution range = new_distribution(1, 1000);
    
    for (long i = 0; i < s; i++) {
        // At every cell of the array, insert a randomly selected number
        // from distribution defined above
        temp[i] = sample(range, device);
    }
    
    // Now sort the array using insertion_sort
    counting_sort(temp, s);
}


#endif /* DataGen_h */