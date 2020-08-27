#ifndef SortedCheck_h
#define SortedCheck_h

bool sortedCheck(long* list, long size){
    
    for(int i = 1; i < size; i++){
    	if(list[i-1] > list[i]){
    		return false;
    	}
    }
    return true;
}

#endif 