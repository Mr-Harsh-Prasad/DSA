class Solution {
    public int findPages(int[] arr, int k) {
        int n = arr.length;
        if(n<k){
            return -1;
        }
        long low = 0;
        long high = 0;
        for(int x : arr){
            low = Math.max(low ,x);
            high +=x;
        }
        long ans = -1;
        while(low <=high){
            long mid = low + (high - low)/2;
            int student = 1;
            long sum = 0;
            for(int x : arr){
                if(sum + x > mid){
                    student++;
                    sum = x;
                } else {
                    sum += x;
                }
            }
            if(student <= k){
                ans = mid;
                high = mid -1;
            } else {
                low = mid +1;
            }
        }
        return (int) ans;
    }
}