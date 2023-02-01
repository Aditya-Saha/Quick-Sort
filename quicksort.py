def partition(arr,lb,ub):
    k=lb-1
    i=lb
    while(i<ub): 
        if (arr[i] <= arr[ub]):
            k=k+1
            arr[k],arr[i]= arr[i],arr[k]
        i=i+1
    k=k+1
    arr[k],arr[ub]= arr[ub],arr[k]
    
    return k

def quicksort(arr,lb,ub):
    if(lb< ub):
        k=partition(arr,lb,ub)
        quicksort(arr,lb,k-1)
        quicksort(arr,k+1,ub)
    
    

arr=[10, 7, 8, 9, 1, 5]
ub=len(arr)

quicksort(arr,0,ub-1)

print(arr)
