def binarySearch(arr,left,right,val): 
    if right>= left: 
        mid = left+(right-left)//2
        if arr[mid]>x:
            return binarySearch(arr,left,mid-1,val)
        elif arr[mid]<x :
            return binarySearch(arr,mid+1,right,val)
        return mid 
    return -1


