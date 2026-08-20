class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies){
        List<Boolean> result = new ArrayList<>();
        int max=candies[0];
        for( int i=0;i<candies.length;i++)
        {
           int k = candies[i]+extraCandies;
           if(candies[i]>max)
           {
            max=candies[i];
           }
        }
        for( int i=0;i<candies.length;i++){
            int k = candies[i]+extraCandies;
           if(k>=max)
           result.add(true);
           else
           result.add(false);
        }
           return result;
        
    }
}