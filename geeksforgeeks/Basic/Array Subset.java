class Solution {
    public boolean isSubset(int a[], int b[]) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i : a){
            map.put(i, map.getOrDefault(i,0) +1);
        }
        for(int j : b){
            if(map.containsKey(j) && map.get(j) >0){
                map.put(j, map.get(j)-1);
            } else {
                return false;
            }
        }
        return true;
    }
}
