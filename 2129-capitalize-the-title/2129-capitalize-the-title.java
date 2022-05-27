class Solution {
    public String capitalizeTitle(String title) {
          String[] words = title.split(" ");
        String answer = "";
        for(String word: words) {
            word = word.toLowerCase();
            if(word.length() < 3) {
                answer += word;
            } else {
                answer += word.substring(0, 1).toUpperCase() + word.substring(1, word.length());
            }
            answer += " ";
        }
        return answer.trim();
        
    }
}