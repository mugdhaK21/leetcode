class Solution {
    public boolean checkIfPangram(String sentence) {
        Set<Character> result = new HashSet<>();
        for(char c : sentence.toCharArray()){
            result.add(c);
        }
        
        return result.size()==26;
    }
}