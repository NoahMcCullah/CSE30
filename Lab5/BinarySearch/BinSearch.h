#ifndef BinSearch_h
#define BinSearch_h

long binSearch(long* list, long n, long val){
	int left = 0;
	int right = n;
	int mid;

		while(left <= right){
			mid  = (left + right) / n;

			if(list[mid] == val){
				return mid;
			}
			else if(list[mid] < val){
				left = mid + 1;
			}
			else{
				right = mid - 1;
			}
		}
		return -1;
	}
#endif